#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419d88 _public_419d88
#define public_419d93 _public_419d93

PROC_DECLARE(0x419d80, internal_419d80, public_419d80);
/* CHUNK of public_407090 */
extern "C" NAKED register_t __cdecl internal_419d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419d88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c24
        public_419d93 : nop
        mov eax, offset public_41eec0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419d80)
        ASM_EXPORT_ENTRY_FIRST(0x419d88, public_419d88)
        ASM_EXPORT_ENTRY_LAST(0x419d93, public_419d93)
    }
}

#undef public_419d88
#undef public_419d93

#pragma init_seg(compiler)
extern "C" void const* const public_419d88 = __AsmFindLabelExport(&internal_419d80, 0x419d88);
extern "C" void const* const public_419d93 = __AsmFindLabelExport(&internal_419d80, 0x419d93);
