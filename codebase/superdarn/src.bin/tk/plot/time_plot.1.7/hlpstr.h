/* hlpstr.h
   ========
   Author: R.J.Barnes
*/

/*
 $License$
*/


char *hlpstr[]={
"time_plot - Generate a time series plot of data.\n",
"time_plot --help\n",
"time_plot [options] fitname [inxname]\n",
"time_plot -new [options] [fitacfname] [inxname]\n",
"time_plot -cfit [options] cfitname\n",
"time_plot -csd [options] csdname\n",
"time_plot -smr [options] smrname\n",
"time_plot -ps [-xp xoff] [-yp yoff] [options] fitname [inxname]\n",
"time_plot -ps [-xp xoff] [-yp yoff] -new [fitacfname] [inxname]\n",
"time_plot -ps [-xp xoff] [-yp yoff] -cfit cfitname\n",
"time_plot -ps [-xp xoff] [-yp yoff] -csd csdname\n",
"time_plot -ps [-xp xoff] [-yp yoff] -smr smrname\n",
"time_plot -ppm  [options] fitname [inxname]\n",
"time_plot -ppm -new [options] [fitacfname] [inxname]\n",
"time_plot -ppm -cfit [options] cfitname\n",
"time_plot -ppm -csd [options] csdname\n",
"time_plot -ppm -smr [options] smrname\n",
"time_plot -ppmx  [options] fitname [inxname]\n",
"time_plot -ppmx -new [options] [fitacfname] [inxname]\n",
"time_plot -ppmx -cfit [options] cfitname\n",
"time_plot -ppmx -csd [options] csdname\n",
"time_plot -ppmx -smr [options] smrname\n",
"time_plot -xml [options] fitname [inxname]\n",
"time_plot -xml -new [options] [fitacfname] [inxname]\n",
"time_plot -xml -cfit [options] cfitname\n",
"time_plot -xml -csd [options] csdname\n",
"time_plot -xml -smr [options] smrname\n",
"time_plot -x [-display display] [-xoff xoff] [-yoff yoff] [options] fitname [inxname]\n",
"time_plot -x [-display display] [-xoff xoff] [-yoff yoff] -new [options] [fitacfname] [inxname]\n",
"time_plot  -x [-display display] [-xoff xoff] [-yoff yoff] -cfit [options] cfitname\n",
"time_plot -x [-display display] [-xoff xoff] [-yoff yoff] -csd [options] csdname\n",
"time_plot -x [-display display] [-xoff xoff] [-yoff yoff] -smr [options] smrname\n",

"--help\tprint the help message and exit.\n",
"-cf cfname\tread command line options from the file cfname.\n",
"-sd yyyymmdd\tplot starting from the date yyyymmdd.\n",
"-st hr:mn\tplot starting from the time hr:mn.\n",
"-ed yyyymmdd\tstop plotting at the date yyyymmdd.\n",
"-et hr:mn\tstop plotting at the time hr:mn.\n",
"-ex hr:mn\tplot an interval whose extent is hr:mn.\n",
"-name name\ttitle the image name, for those formats that support image naming.\n",
"-wdt width\tset the width of the plot to width.\n",
"-hgt height\tset the height of the plot to height.\n",
"-bgcol rrggbb\tset the background color to rrggbb, specified as the hexadecimal value for the 24-bit red,green and blue component color.\n",
"-grdcol rrggbb\tset the color of grid to rrggbb, specified as the hexadecimal value for the 24-bit red,green and blue component color.\n",
"-txtcol rrggbb\tset the color of text to rrggbb, specified as the hexadecimal value for the 24-bit red,green and blue component color.\n",
"-gscol rrggbb\tset the color of ground scatter to rrggbb, specified as the hexadecimal value for the 24-bit red,green and blue component color.\n",
"-pkey pkeyname\tload the power colorkey from the file pkeyname.\n",
"-vkey vkeyname\tload the velocity colorkey from the file vkeyname.\n",
"-wkey wkeyname\tload the spectral width colorkey from the file wkeyname.\n",
"-fkey vkeyname\tload the frequency colorkey from the file fkeyname.\n",
"-nkey vkeyname\tload the noise colorkey from the file nkeyname.\n",
"-fontname fontname\tplot any labels using the font fontname.\n",
"-fontsize fontsize\tset the font size to fontsize points.\n",
"-tfontname tfontname\tplot the title using the font tfontname.\n",
"-tfontsize tfontsize\tset the title font size to tfontsize points.\n",
"-tmajor hr:mn\tset the interval of the Time axis major tick mark to be hr:mn.\n",
"-tminor hr:mn\tset the interval of the Time axis minor tick mark to be hr:mn.\n",
"-b bmnum\tplot beam number bmnum, a value of -1 plots all beams.\n",
"-c channel\tfor stereo mode data, plot channel channel, if omitted then both channels are plotted.\n",
"-cp cpid\tplot beams that contain the program identifier cpid only.\n",
"-scan scan\tplot beams that have a value for the scan flag of scan.\n",
"-a\tplot all parameters.\n",
"-p\tplot power.\n",
"-v\tplot velocity.\n",
"-w\tplot spectral width.\n",
"-pmin pmin\tset the minimum value of the power scale to <a>pmin.\n",
"-pmax pmax\tset the maximum value of the power scale to <a>pmax.\n",
"-vmin vmin\tset the minimum value of the velocity scale to <a>vmin.\n",
"-vmax vmax\tset the maximum value of the velocity scale to <a>vmax.\n",
"-wmin wmin\tset the minimum value of the spectral width scale to <a>wmin.\n",
"-wmax wmax\tset the maximum value of the spectral width scale to <a>wmax.\n",
"-gs\tcolor ground scatter.\n",
"-gm\tmask out ground scatter.\n",
"-ns\tignore non-scan data (data with a scan flag of -1)..\n",
"-km\tplot in terms of distance in kilometers.\n",
"-frang frang\tforce the distance to the first range to be frang kilometers.\n",
"-erang erang\tforce the distance to the last range to be erang kilometers.\n",
"-rsep rsep\tforce the range separation to be rsep kilometers.\n",
"-lr\tlimit the ranges plotted.\n",
"-srng start\tset the first range to plot to be start.\n",
"-erng end\tset the last range to plot to be end.\n",
"-geo\tplot in terms of geographic latitude.\n",
"-mag\tplot in terms of geomagnetic latitude.\n",
"-latmin latmin\tforce the lower latitude limit to be latmin degrees.\n",
"-latmax latmax\tforce the upper latitude limit to be latmax degrees.\n",
"-ymajor ymajor\tset the interval of the Y-axis major tick mark to be ymajor.\n",
"-yminor yminor\tset the interval of the Y-axis minor tick mark to be yminor.\n",
"-ytick ytick\tset the number Y-axis tick marks ytick.\n",
"-fn expr\tapply the mathematic expression expr to the data before it is plotted.\n",
"fitname\tfilename of the fit format file to plot.\n",
"inxname\tfilename of the index file.\n",
"-new\tfile is in the fitacf format.\n",
"fitacfname\tfilename of the fitacf format file to plot.\n",
"-cfit\tfile is in the cfit format.\n",
"cfitname\tfilename of the cfit format file to plot.\n",
"-csd\tfile is in the csd format.\n",
"csd\tfilename of the csd format file to plot.\n",
"-smr\tfile is in the smr format.\n",
"-fbeam fbeam\tassume that the first beam in a scan in the summary file is  fbeam.\n",
"smr\tfilename of the smr format file to plot.\n",
"-ps\tproduce a PostScript plot as the output.\n",
"-xp xoff\tset the X offset of the PostScript plot to xoff.\n",
"-yp xoff\tset the Y offset of the PostScript plot to yoff.\n",
"-ppm\tproduce a Portable PixMap (PPM) image as the output.\n",
"-ppmx\tproduce an extended Portable PixMap (PPMX) image as the output.\n",
"-xml\tproduce an XML image representation as the output.\n",
"-x\tplot the data on an X-terminal.\n",
"-display display\tconnect to the xterminal named display.\n",
"-xoff xoff\topen the window, xoff pixels from the left edge of the screen.\n",
"-yoff yoff\topen the window ypad pixels from the top edge of the screen.\n",

NULL};
