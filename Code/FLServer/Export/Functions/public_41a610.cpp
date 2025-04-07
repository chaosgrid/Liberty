#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419224);
CLANG_FORWARD_PROC_SYMBOL(public_41922a);
CLANG_FORWARD_PROC_SYMBOL(public_419230);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a618 _public_41a618
#define public_41a626 _public_41a626
#define public_41a634 _public_41a634

PROC_DECLARE(0x41a610, internal_41a610, public_41a610);
/* CHUNK of public_411d70 */
extern "C" NAKED register_t __cdecl internal_41a610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_419230
        public_41a618 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC4
        jmp public_41922a
        public_41a626 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x144
        jmp public_419224
        public_41a634 : nop
        mov eax, offset public_41f73c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a610)
        ASM_EXPORT_ENTRY_FIRST(0x41a618, public_41a618)
        ASM_EXPORT_ENTRY(0x41a626, public_41a626)
        ASM_EXPORT_ENTRY_LAST(0x41a634, public_41a634)
    }
}

#undef public_41a618
#undef public_41a626
#undef public_41a634

#pragma init_seg(compiler)
extern "C" void const* const public_41a618 = __AsmFindLabelExport(&internal_41a610, 0x41a618);
extern "C" void const* const public_41a626 = __AsmFindLabelExport(&internal_41a610, 0x41a626);
extern "C" void const* const public_41a634 = __AsmFindLabelExport(&internal_41a610, 0x41a634);
