#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803800);

#define public_6803815 _public_6803815
#define public_680381c _public_680381c
#define public_6803823 _public_6803823
#define public_680382a _public_680382a

PROC_DECLARE(0x6803800, internal_6803800, public_6803800);
extern "C" NAKED register_t __cdecl internal_6803800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        add eax, 7
        cmp eax, 7
        ja public_680382a
/*FIXUP jmp dword ptr ds : [eax*4+public_6803830] @0x680380e*/
  JMPTB cmp eax, 0
  JMPTB je public_6803823
  JMPTB cmp eax, 1
  JMPTB je public_680382a
  JMPTB cmp eax, 2
  JMPTB je public_680382a
  JMPTB cmp eax, 3
  JMPTB je public_6803815
  JMPTB cmp eax, 4
  JMPTB je public_680381c
  JMPTB cmp eax, 5
  JMPTB je public_6803815
  JMPTB cmp eax, 6
  JMPTB je public_680382a
  JMPTB cmp eax, 7
  JMPTB je public_6803815
  JMPTB int 3
        public_6803815 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+4]
        ret 
        public_680381c : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        ret 
        public_6803823 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        ret 
        public_680382a : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6803800)
        ASM_EXPORT_ENTRY_FIRST(0x6803815, public_6803815)
        ASM_EXPORT_ENTRY(0x680381c, public_680381c)
        ASM_EXPORT_ENTRY(0x6803823, public_6803823)
        ASM_EXPORT_ENTRY_LAST(0x680382a, public_680382a)
    }
}

#undef public_6803815
#undef public_680381c
#undef public_6803823
#undef public_680382a

#pragma init_seg(compiler)
extern "C" void const* const public_6803815 = __AsmFindLabelExport(&internal_6803800, 0x6803815);
extern "C" void const* const public_680381c = __AsmFindLabelExport(&internal_6803800, 0x680381c);
extern "C" void const* const public_6803823 = __AsmFindLabelExport(&internal_6803800, 0x6803823);
extern "C" void const* const public_680382a = __AsmFindLabelExport(&internal_6803800, 0x680382a);
