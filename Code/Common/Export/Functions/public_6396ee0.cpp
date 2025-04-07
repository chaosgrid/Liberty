#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396eeb _public_6396eeb
#define public_6396ef6 _public_6396ef6
#define public_6396f01 _public_6396f01
#define public_6396f0c _public_6396f0c

PROC_DECLARE(0x6396ee0, internal_6396ee0, public_6396ee0);
/* CHUNK of public_6324640 */
extern "C" NAKED register_t __cdecl internal_6396ee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x134]
        jmp public_63221f0
        public_6396eeb : nop
        mov ecx, dword ptr ss : [ebp-0x130]
        jmp public_63221f0
        public_6396ef6 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_63221f0
        public_6396f01 : nop
        lea ecx, ss:[ebp-0x12C]
        jmp public_63221f0
        public_6396f0c : nop
        mov eax, offset public_63b0f1c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396ee0)
        ASM_EXPORT_ENTRY_FIRST(0x6396eeb, public_6396eeb)
        ASM_EXPORT_ENTRY(0x6396ef6, public_6396ef6)
        ASM_EXPORT_ENTRY(0x6396f01, public_6396f01)
        ASM_EXPORT_ENTRY_LAST(0x6396f0c, public_6396f0c)
    }
}

#undef public_6396eeb
#undef public_6396ef6
#undef public_6396f01
#undef public_6396f0c

#pragma init_seg(compiler)
extern "C" void const* const public_6396eeb = __AsmFindLabelExport(&internal_6396ee0, 0x6396eeb);
extern "C" void const* const public_6396ef6 = __AsmFindLabelExport(&internal_6396ee0, 0x6396ef6);
extern "C" void const* const public_6396f01 = __AsmFindLabelExport(&internal_6396ee0, 0x6396f01);
extern "C" void const* const public_6396f0c = __AsmFindLabelExport(&internal_6396ee0, 0x6396f0c);
