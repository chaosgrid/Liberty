#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803930);
CLANG_FORWARD_PROC_SYMBOL(public_6803950);
CLANG_FORWARD_PROC_SYMBOL(public_68039d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803a20);
CLANG_FORWARD_PROC_SYMBOL(public_6803a60);

#define public_6803965 _public_6803965
#define public_6803974 _public_6803974
#define public_6803983 _public_6803983
#define public_6803992 _public_6803992
#define public_680399e _public_680399e

PROC_DECLARE(0x6803950, internal_6803950, public_6803950);
extern "C" NAKED register_t __cdecl internal_6803950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        add eax, 9
        cmp eax, 9
        ja public_680399e
/*FIXUP jmp dword ptr ds : [eax*4+public_68039a4] @0x680395e*/
  JMPTB cmp eax, 0
  JMPTB je public_6803992
  JMPTB cmp eax, 1
  JMPTB je public_6803983
  JMPTB cmp eax, 2
  JMPTB je public_6803983
  JMPTB cmp eax, 3
  JMPTB je public_680399e
  JMPTB cmp eax, 4
  JMPTB je public_680399e
  JMPTB cmp eax, 5
  JMPTB je public_6803992
  JMPTB cmp eax, 6
  JMPTB je public_6803974
  JMPTB cmp eax, 7
  JMPTB je public_6803965
  JMPTB cmp eax, 8
  JMPTB je public_680399e
  JMPTB cmp eax, 9
  JMPTB je public_6803965
  JMPTB int 3
        public_6803965 : nop
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_6803930
        add esp, 4
        xor eax, eax
        ret 
        public_6803974 : nop
        mov ecx, dword ptr ds : [ecx+8]
        push ecx
        call public_6803a60
        add esp, 4
        xor eax, eax
        ret 
        public_6803983 : nop
        mov edx, dword ptr ds : [ecx+8]
        push edx
        call public_6803a20
        add esp, 4
        xor eax, eax
        ret 
        public_6803992 : nop
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_68039d0
        add esp, 4
        public_680399e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6803950)
        ASM_EXPORT_ENTRY_FIRST(0x6803965, public_6803965)
        ASM_EXPORT_ENTRY(0x6803974, public_6803974)
        ASM_EXPORT_ENTRY(0x6803983, public_6803983)
        ASM_EXPORT_ENTRY(0x6803992, public_6803992)
        ASM_EXPORT_ENTRY_LAST(0x680399e, public_680399e)
    }
}

#undef public_6803965
#undef public_6803974
#undef public_6803983
#undef public_6803992
#undef public_680399e

#pragma init_seg(compiler)
extern "C" void const* const public_6803965 = __AsmFindLabelExport(&internal_6803950, 0x6803965);
extern "C" void const* const public_6803974 = __AsmFindLabelExport(&internal_6803950, 0x6803974);
extern "C" void const* const public_6803983 = __AsmFindLabelExport(&internal_6803950, 0x6803983);
extern "C" void const* const public_6803992 = __AsmFindLabelExport(&internal_6803950, 0x6803992);
extern "C" void const* const public_680399e = __AsmFindLabelExport(&internal_6803950, 0x680399e);
