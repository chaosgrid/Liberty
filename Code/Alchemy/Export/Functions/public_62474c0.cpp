#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208910);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62474c8 _public_62474c8
#define public_62474d0 _public_62474d0
#define public_62474d8 _public_62474d8
#define public_62474e0 _public_62474e0

PROC_DECLARE(0x62474c0, internal_62474c0, public_62474c0);
/* CHUNK of public_6207110 */
extern "C" NAKED register_t __cdecl internal_62474c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6208910
        public_62474c8 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6208910
        public_62474d0 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6208910
        public_62474d8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6208910
        public_62474e0 : nop
        mov eax, offset public_625027c
        jmp public_6246126
        UNREACHABLE_TRAP(0x62474c0)
        ASM_EXPORT_ENTRY_FIRST(0x62474c8, public_62474c8)
        ASM_EXPORT_ENTRY(0x62474d0, public_62474d0)
        ASM_EXPORT_ENTRY(0x62474d8, public_62474d8)
        ASM_EXPORT_ENTRY_LAST(0x62474e0, public_62474e0)
    }
}

#undef public_62474c8
#undef public_62474d0
#undef public_62474d8
#undef public_62474e0

#pragma init_seg(compiler)
extern "C" void const* const public_62474c8 = __AsmFindLabelExport(&internal_62474c0, 0x62474c8);
extern "C" void const* const public_62474d0 = __AsmFindLabelExport(&internal_62474c0, 0x62474d0);
extern "C" void const* const public_62474d8 = __AsmFindLabelExport(&internal_62474c0, 0x62474d8);
extern "C" void const* const public_62474e0 = __AsmFindLabelExport(&internal_62474c0, 0x62474e0);
