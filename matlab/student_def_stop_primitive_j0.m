%%
%           Agent Logic
%         Stop Primitive J0
%              2025
%
%
%% Stop primitive with j0 = 0 %%

%% Determine the optimal final position imposing j0 %%
syms j0;
final_opt_pos_j0_var = solve(subs(sol_opt.j, t, 0) == j0, sf); % t=0 because its the current time
final_opt_pos_j0_fun = matlabFunction(final_opt_pos_j0_var, 'Vars', [v0, a0, j0, vf, af, T], 'File', 'final_opt_pos_j0.m');
% - Use functions 'solve', 'diff', 'subs', and 'matlabFunction'

%% Determine the optimal time to stop with j0 = 0 %%
syms z;

final_opt_time_stop_j0_var = 1./solve(simplify(final_opt_time_stop_fun(v0, a0, final_opt_pos_j0_fun(v0, a0, 0, 0, 0, 1/z))) == 1/z, z);
final_opt_time_stop_j0_fun = matlabFunction(final_opt_time_stop_j0_var(1), 'Vars', [v0, a0], 'File', 'final_opt_time_stop_j0.m');
% - Use the function solve
%   Use the function final_opt_time_stop_fun 
%   Use 'subs' function to solve the system using the frequency instead of the time