%% Constants
L = 524;    % mm Distancia lateral entre las orugas
R = 152.79; % mm Radio de la polea activa
D = 304.45; % mm Distancia entre centros de las poleas

%% Floor parameters
Floor.l = 20;  % m
Floor.w = 20;  % m
Floor.h = 0.1; % m

% Grid parameters
Grid.clr = [1 1 1]*1;
Grid.numSqrs = 150;
Grid.lineWidth = 0.02;
Grid.box_h = (Floor.l-(Grid.lineWidth*(Grid.numSqrs+1)))/Grid.numSqrs;
Grid.box_l = (Floor.l-(Grid.lineWidth*(1+1)))/1;
Grid.extr_data = Extr_Data_Mesh(Floor.w,Floor.w,Grid.numSqrs,1,Grid.box_h,Grid.box_l);