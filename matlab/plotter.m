% Read the CSV file

figure(1);
clf(figure(1));
hold off;hold on;
grid on;
box on;
data = readtable('../../bin/log_internal/acc_test.csv', 'Delimiter', {',', ';'});

% Create a figure

% Plot acceleration data
subplot(2,1,1); hold on;
plot(data.time, data.acc, 'b-');
plot(data.time, data.requested_acc, 'r');
subplot(2,1,2); hold on;
plot(data.time, data.vel, 'b-');
plot(data.time, data.requested_vel, 'r');

% Add labels and title
% xlabel('Time [s]');
% ylabel('Acceleration [m/s^2]');
% title('Acceleration Test Data');

% Add grid

%% Read the CSV file

figure(2);
clf(figure(2));
hold off;hold on;
grid on;
box on;
xlabel('Time [s]');
ylabel('Velocity [m/s]');

data = readtable('../../bin/log_internal/coef_list.csv', 'Delimiter', {',', ';'});
data_test = readtable('../../bin/log_internal/acc_test.csv', 'Delimiter', {',', ';'});


% Create a figure

% Plot acceleration data
t = data.time;
T = data.final_time;


coeffs = [data.coef_1, data.coef_2, data.coef_3, data.coef_4, data.coef_5, data.coef_6]; 

t = t(1:end);
T = T(1:end);
coeffs = coeffs(1:end,:);

for i=1:size(coeffs,1)
% for i=1:10
    % v_opt = coeffs_v_opt(t, coeffs(i,:));
    % plot(t, s_opt, 'g');
    t_plot = (0:0.05:T(i))';
    v_opt = coeffs_v_opt(t_plot, coeffs(i,:));
    plot(t_plot+t(i), v_opt, 'g');
end
% 
% coeffs_reduced = coeffs(1:10:end, :);
% t_reduced = t(1:10:end);
% for i=1:size(coeffs_reduced,1)
%     v_opt = coeffs_v_opt(t_reduced, coeffs_reduced(i,:));
%     plot(t, s_opt, 'g');
%     t_plot = t_reduced + t_reduced(i);
%     plot(t_plot, v_opt, 'g', 'LineWidth',0.5);
% end

h1 = plot(data_test.time, data_test.requested_vel,' r--', 'DisplayName', 'Requested Velocity', LineWidth=2);
h2 = plot(data_test.time, data_test.vel, 'b-', 'DisplayName', 'Velocity', LineWidth=1);
legend([h1, h2]);
ylim([-1 20])


%% Read the CSV file

figure(3);
clf(figure(3));
hold off;hold on;
grid on;
box on;
xlabel('Position [m]');
ylabel('Velocity [m/s]');

data = readtable('../../bin/log_internal/coef_list.csv', 'Delimiter', {',', ';'});
data_test = readtable('../../bin/log_internal/acc_test.csv', 'Delimiter', {',', ';'});


% Create a figure

% Plot acceleration data
s = data.distance;
s0 = data.distance(1);

coeffs = [data.coef_1, data.coef_2, data.coef_3, data.coef_4, data.coef_5, data.coef_6]; 

t = t(1:end);
T = T(1:end);
coeffs = coeffs(1:end,:);

for i=1:size(coeffs,1)
% for i=1:10
    % v_opt = coeffs_v_opt(t, coeffs(i,:));
    % plot(t, s_opt, 'g');
    t_plot = (0:0.05:T(i))';
    v_opt = coeffs_v_opt(t_plot, coeffs(i,:));
    s_opt = coeffs_s_opt(t_plot, coeffs(i,:));
    plot(s0-s(i)+s_opt, v_opt, 'g');
end

h1 = plot(s0-data.distance, data_test.requested_vel,' r--', 'DisplayName', 'Requested Velocity', LineWidth=2);
h2 = plot(s0-data.distance, data_test.vel, 'b-', 'DisplayName', 'Velocity', LineWidth=1);
legend([h1, h2]);
ylim([-1 20])
