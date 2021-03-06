# GNU Make project makefile autogenerated by Premake

ifndef config
  config=debug_x32
endif

ifndef verbose
  SILENT = @
endif

.PHONY: clean prebuild prelink

ifeq ($(config),debug_x32)
  RESCOMP = windres
  TARGETDIR = .
  TARGET = $(TARGETDIR)/parsec_server
  OBJDIR = obj/x32/Debug
  DEFINES += -DDEBUG -DPARSEC_SERVER
  INCLUDES += -I../../../../src/libraries -I/usr/include -I/usr/local/include -I/opt/include -I../../../../src/libparsec/include -I../../../../src/parsec_server/include
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -g -m32
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS += -lncurses
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib32 -m32
  LINKCMD = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ALL_LDFLAGS) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
	@echo Running postbuild commands
	cp parsec_server ../../../../parsec_root/server/
  endef
all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),debug_x64)
  RESCOMP = windres
  TARGETDIR = .
  TARGET = $(TARGETDIR)/parsec_server
  OBJDIR = obj/x64/Debug
  DEFINES += -DDEBUG -DPARSEC_SERVER
  INCLUDES += -I../../../../src/libraries -I/usr/include -I/usr/local/include -I/opt/include -I../../../../src/libparsec/include -I../../../../src/parsec_server/include
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -g -m64
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS += -lncurses
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib64 -m64
  LINKCMD = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ALL_LDFLAGS) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
	@echo Running postbuild commands
	cp parsec_server ../../../../parsec_root/server/
  endef
all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),release_x32)
  RESCOMP = windres
  TARGETDIR = .
  TARGET = $(TARGETDIR)/parsec_server
  OBJDIR = obj/x32/Release
  DEFINES += -DPARSEC_SERVER
  INCLUDES += -I../../../../src/libraries -I/usr/include -I/usr/local/include -I/opt/include -I../../../../src/libparsec/include -I../../../../src/parsec_server/include
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m32 -O2
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS += -lncurses
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib32 -s -m32
  LINKCMD = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ALL_LDFLAGS) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
	@echo Running postbuild commands
	cp parsec_server ../../../../parsec_root/server/
  endef
all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),release_x64)
  RESCOMP = windres
  TARGETDIR = .
  TARGET = $(TARGETDIR)/parsec_server
  OBJDIR = obj/x64/Release
  DEFINES += -DPARSEC_SERVER
  INCLUDES += -I../../../../src/libraries -I/usr/include -I/usr/local/include -I/opt/include -I../../../../src/libparsec/include -I../../../../src/parsec_server/include
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m64 -O2
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CFLAGS)
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS += -lncurses
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib64 -s -m64
  LINKCMD = $(CXX) -o $(TARGET) $(OBJECTS) $(RESOURCES) $(ALL_LDFLAGS) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
	@echo Running postbuild commands
	cp parsec_server ../../../../parsec_root/server/
  endef
all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:

endif

OBJECTS := \
	$(OBJDIR)/con_arg.o \
	$(OBJDIR)/con_tab.o \
	$(OBJDIR)/con_vald.o \
	$(OBJDIR)/debug.o \
	$(OBJDIR)/e_modulemanager.o \
	$(OBJDIR)/e_relist.o \
	$(OBJDIR)/g_emp.o \
	$(OBJDIR)/g_extra.o \
	$(OBJDIR)/g_telep.o \
	$(OBJDIR)/net_pckt_gmsv.o \
	$(OBJDIR)/net_stream.o \
	$(OBJDIR)/net_swap.o \
	$(OBJDIR)/net_util.o \
	$(OBJDIR)/net_wrap.o \
	$(OBJDIR)/obj_clas.o \
	$(OBJDIR)/obj_creg.o \
	$(OBJDIR)/obj_cust.o \
	$(OBJDIR)/obj_odt.o \
	$(OBJDIR)/obj_type.o \
	$(OBJDIR)/sl_path.o \
	$(OBJDIR)/sl_timer.o \
	$(OBJDIR)/sw_path.o \
	$(OBJDIR)/sw_timer.o \
	$(OBJDIR)/sys_date.o \
	$(OBJDIR)/sys_file.o \
	$(OBJDIR)/sys_swap.o \
	$(OBJDIR)/utl_bsp.o \
	$(OBJDIR)/utl_clip.o \
	$(OBJDIR)/utl_clpo.o \
	$(OBJDIR)/utl_cull.o \
	$(OBJDIR)/utl_logfile.o \
	$(OBJDIR)/utl_math.o \
	$(OBJDIR)/utl_math2.o \
	$(OBJDIR)/MasterServer.o \
	$(OBJDIR)/MasterServerItem.o \
	$(OBJDIR)/con_act_sv.o \
	$(OBJDIR)/con_aux_sv.o \
	$(OBJDIR)/con_com_sv.o \
	$(OBJDIR)/con_ext_sv.o \
	$(OBJDIR)/con_info_sv.o \
	$(OBJDIR)/con_int_sv.o \
	$(OBJDIR)/con_list_sv.o \
	$(OBJDIR)/con_load_sv.o \
	$(OBJDIR)/con_main_sv.o \
	$(OBJDIR)/con_std_sv.o \
	$(OBJDIR)/e_colldet_sv.o \
	$(OBJDIR)/e_connmanager.o \
	$(OBJDIR)/e_gameserver.o \
	$(OBJDIR)/e_global_sv.o \
	$(OBJDIR)/e_packethandler.o \
	$(OBJDIR)/e_simnetinput.o \
	$(OBJDIR)/e_simnetoutput.o \
	$(OBJDIR)/e_simplayerinfo.o \
	$(OBJDIR)/e_simulator.o \
	$(OBJDIR)/e_world.o \
	$(OBJDIR)/g_main_sv.o \
	$(OBJDIR)/g_player.o \
	$(OBJDIR)/g_stgate_sv.o \
	$(OBJDIR)/inp_main_sv.o \
	$(OBJDIR)/net_packetdriver.o \
	$(OBJDIR)/net_util_sv.o \
	$(OBJDIR)/nl_udpdriver.o \
	$(OBJDIR)/sl_util_sv.o \
	$(OBJDIR)/sv_main.o \
	$(OBJDIR)/sys_err_sv.o \
	$(OBJDIR)/sys_msg_sv.o \
	$(OBJDIR)/sys_util_sv.o \

RESOURCES := \

CUSTOMFILES := \

SHELLTYPE := msdos
ifeq (,$(ComSpec)$(COMSPEC))
  SHELLTYPE := posix
endif
ifeq (/bin,$(findstring /bin,$(SHELL)))
  SHELLTYPE := posix
endif

$(TARGET): $(GCH) $(OBJECTS) $(LDDEPS) $(RESOURCES) ${CUSTOMFILES}
	@echo Linking server
	$(SILENT) $(LINKCMD)
	$(POSTBUILDCMDS)

$(TARGETDIR):
	@echo Creating $(TARGETDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(TARGETDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(TARGETDIR))
endif

$(OBJDIR):
	@echo Creating $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(OBJDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(OBJDIR))
endif

clean:
	@echo Cleaning server
ifeq (posix,$(SHELLTYPE))
	$(SILENT) rm -f  $(TARGET)
	$(SILENT) rm -rf $(OBJDIR)
else
	$(SILENT) if exist $(subst /,\\,$(TARGET)) del $(subst /,\\,$(TARGET))
	$(SILENT) if exist $(subst /,\\,$(OBJDIR)) rmdir /s /q $(subst /,\\,$(OBJDIR))
endif

prebuild:
	$(PREBUILDCMDS)

prelink:
	$(PRELINKCMDS)

ifneq (,$(PCH))
$(OBJECTS): $(GCH) $(PCH)
$(GCH): $(PCH)
	@echo $(notdir $<)
	$(SILENT) $(CXX) -x c++-header $(ALL_CXXFLAGS) -o "$@" -MF "$(@:%.gch=%.d)" -c "$<"
endif

$(OBJDIR)/con_arg.o: ../../../../src/libparsec/con_arg.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_tab.o: ../../../../src/libparsec/con_tab.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_vald.o: ../../../../src/libparsec/con_vald.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/debug.o: ../../../../src/libparsec/debug.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_modulemanager.o: ../../../../src/libparsec/e_modulemanager.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_relist.o: ../../../../src/libparsec/e_relist.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_emp.o: ../../../../src/libparsec/g_emp.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_extra.o: ../../../../src/libparsec/g_extra.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_telep.o: ../../../../src/libparsec/g_telep.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_pckt_gmsv.o: ../../../../src/libparsec/net_pckt_gmsv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_stream.o: ../../../../src/libparsec/net_stream.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_swap.o: ../../../../src/libparsec/net_swap.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_util.o: ../../../../src/libparsec/net_util.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_wrap.o: ../../../../src/libparsec/net_wrap.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/obj_clas.o: ../../../../src/libparsec/obj_clas.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/obj_creg.o: ../../../../src/libparsec/obj_creg.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/obj_cust.o: ../../../../src/libparsec/obj_cust.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/obj_odt.o: ../../../../src/libparsec/obj_odt.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/obj_type.o: ../../../../src/libparsec/obj_type.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sl_path.o: ../../../../src/libparsec/sl_path.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sl_timer.o: ../../../../src/libparsec/sl_timer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sw_path.o: ../../../../src/libparsec/sw_path.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sw_timer.o: ../../../../src/libparsec/sw_timer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_date.o: ../../../../src/libparsec/sys_date.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_file.o: ../../../../src/libparsec/sys_file.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_swap.o: ../../../../src/libparsec/sys_swap.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_bsp.o: ../../../../src/libparsec/utl_bsp.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_clip.o: ../../../../src/libparsec/utl_clip.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_clpo.o: ../../../../src/libparsec/utl_clpo.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_cull.o: ../../../../src/libparsec/utl_cull.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_logfile.o: ../../../../src/libparsec/utl_logfile.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_math.o: ../../../../src/libparsec/utl_math.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/utl_math2.o: ../../../../src/libparsec/utl_math2.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/MasterServer.o: ../../../../src/parsec_server/MasterServer.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/MasterServerItem.o: ../../../../src/parsec_server/MasterServerItem.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_act_sv.o: ../../../../src/parsec_server/con_act_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_aux_sv.o: ../../../../src/parsec_server/con_aux_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_com_sv.o: ../../../../src/parsec_server/con_com_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_ext_sv.o: ../../../../src/parsec_server/con_ext_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_info_sv.o: ../../../../src/parsec_server/con_info_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_int_sv.o: ../../../../src/parsec_server/con_int_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_list_sv.o: ../../../../src/parsec_server/con_list_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_load_sv.o: ../../../../src/parsec_server/con_load_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_main_sv.o: ../../../../src/parsec_server/con_main_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/con_std_sv.o: ../../../../src/parsec_server/con_std_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_colldet_sv.o: ../../../../src/parsec_server/e_colldet_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_connmanager.o: ../../../../src/parsec_server/e_connmanager.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_gameserver.o: ../../../../src/parsec_server/e_gameserver.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_global_sv.o: ../../../../src/parsec_server/e_global_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_packethandler.o: ../../../../src/parsec_server/e_packethandler.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_simnetinput.o: ../../../../src/parsec_server/e_simnetinput.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_simnetoutput.o: ../../../../src/parsec_server/e_simnetoutput.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_simplayerinfo.o: ../../../../src/parsec_server/e_simplayerinfo.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_simulator.o: ../../../../src/parsec_server/e_simulator.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/e_world.o: ../../../../src/parsec_server/e_world.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_main_sv.o: ../../../../src/parsec_server/g_main_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_player.o: ../../../../src/parsec_server/g_player.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/g_stgate_sv.o: ../../../../src/parsec_server/g_stgate_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/inp_main_sv.o: ../../../../src/parsec_server/inp_main_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_packetdriver.o: ../../../../src/parsec_server/net_packetdriver.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/net_util_sv.o: ../../../../src/parsec_server/net_util_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/nl_udpdriver.o: ../../../../src/parsec_server/nl_udpdriver.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sl_util_sv.o: ../../../../src/parsec_server/sl_util_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sv_main.o: ../../../../src/parsec_server/sv_main.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_err_sv.o: ../../../../src/parsec_server/sys_err_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_msg_sv.o: ../../../../src/parsec_server/sys_msg_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/sys_util_sv.o: ../../../../src/parsec_server/sys_util_sv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"

-include $(OBJECTS:%.o=%.d)
ifneq (,$(PCH))
  -include $(OBJDIR)/$(notdir $(PCH)).d
endif
