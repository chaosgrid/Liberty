#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208800);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62475a8 _public_62475a8
#define public_62475b0 _public_62475b0
#define public_62475b8 _public_62475b8
#define public_62475c0 _public_62475c0

PROC_DECLARE(0x62475a0, internal_62475a0, public_62475a0);
/* CHUNK of public_6208130 */
extern "C" NAKED register_t __cdecl internal_62475a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6208800
        public_62475a8 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6208800
        public_62475b0 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6208800
        public_62475b8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6208800
        public_62475c0 : nop
        mov eax, offset public_6250394
        jmp public_6246126
        UNREACHABLE_TRAP(0x62475a0)
        ASM_EXPORT_ENTRY_FIRST(0x62475a8, public_62475a8)
        ASM_EXPORT_ENTRY(0x62475b0, public_62475b0)
        ASM_EXPORT_ENTRY(0x62475b8, public_62475b8)
        ASM_EXPORT_ENTRY_LAST(0x62475c0, public_62475c0)
    }
}

#undef public_62475a8
#undef public_62475b0
#undef public_62475b8
#undef public_62475c0

#pragma init_seg(compiler)
extern "C" void const* const public_62475a8 = __AsmFindLabelExport(&internal_62475a0, 0x62475a8);
extern "C" void const* const public_62475b0 = __AsmFindLabelExport(&internal_62475a0, 0x62475b0);
extern "C" void const* const public_62475b8 = __AsmFindLabelExport(&internal_62475a0, 0x62475b8);
extern "C" void const* const public_62475c0 = __AsmFindLabelExport(&internal_62475a0, 0x62475c0);
