classdef Ablative
    methods(Static)
        %Discription of Input Parameters:
            % c = Correction factor based on experimental data for the
            %     specific design at the throat section and on a nozzle
            %     stagnation pressure of 100 psia
            % R_r = Weight fraction of resin content in the ablative
            %       material
            % R_v = Weight fraction of pyrolyzed resin v.s. total resin
            %       content
            % C_p = Heat Capacity of constant pressure of pyrolysis
            %       gases (Btu/lb-F)
            % rho = Density of ablative material (lb/in^3)
            % k = Heat Conductivity of char (Btu/s-in^2-F/in)
            % t = Thrust-chamber firing duration (s)
            % L_p = Latent heat of pyrolysis (Btu/lb)
            % T_aw = Adiabatic wall temperature of the gas (R)
            % T_d = Decomposition temperature of resin (R)
            % p_c_ns = Nozzle stagnation chamber pressure (psia)

            % b = Constant, depends on the nature of the ablative shield;
            %     to be determined by experimental result
            % epsilon = Nozzle expansion area ratio at the investigated
            %           section

        %Discription of Output:
            % a = Char depth (inches)

        %This function calculates the char depth in the combustion chamber
        %(including the throat)
        function a = char_depth_cc(c, R_r, R_v, C_p, rho, k, t, L_p,...
                                   T_aw, T_d, p_c_ns)
            a = c * (((2*k*t)/(R_r*R_v*C_p*rho))*log(1+((R_r*R_v...
                *C_p*(T_aw-T_d))/L_p)))^0.5 * (p_c_ns/100)^0.4;
        end

        %This function calculates the char depth in the nozzle
        function a = char_depth_nozzle(b, t, epsilon)
            a = b * t^0.5 * exp(-0.0247*epsilon);
        end
    end
end
