%Parametrs For All Circles
r = 4;
a = 0: 0.1 : 2*pi;

grid on;
while 1
   %to stay in the same graph
   hold on;
   
   %Custmoize x-axis and y-axis 
   axis([0 50 0 50]);

   % Add labels and title
   xlabel('X-axis');
   ylabel('Y-axis');
   title('Traffic Light');
   %draw a rectangle pos=[x y width heigh] and Face Color for Fill and
   %Curvature for smooth corners
   rectangle('Position', [20, 15, 10, 30],'FaceColor' , [0 0 0], 'Curvature', [0.1, 0.1]);
   rectangle('Position', [23, 5, 4, 10],'FaceColor' , [0.5 0.5 0.5]);
   %initial state for all lights
   fill(25+r*cos(a),40+r*sin(a),[0.3, 0.05, 0.05]);
   fill(25+r*cos(a),30+r*sin(a),[0.5, 0.5, 0.1]);
   fill(25+r*cos(a),20+r*sin(a),[0.05, 0.3, 0.05]);
   %light the red
   fill(25+r*cos(a),40+r*sin(a),'r');
   %delay for 1 second
   pause(1);
   %turn off the red 
   fill(25+r*cos(a),40+r*sin(a),[0.3, 0.05, 0.05]);
   %light the yellow
   fill(25+r*cos(a),30+r*sin(a),'y');
   pause(1);
   %turn off the yellow
   fill(25+r*cos(a),30+r*sin(a),[0.5, 0.5, 0.1]);
   %light the green0
   fill(25+r*cos(a),20+r*sin(a),'g');
   pause(1); 
   %turn off the green
   fill(25+r*cos(a),20+r*sin(a),[0.05, 0.3, 0.05]);
end





