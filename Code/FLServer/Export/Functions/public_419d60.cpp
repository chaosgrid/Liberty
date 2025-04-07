#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419d68 _public_419d68
#define public_419d73 _public_419d73

PROC_DECLARE(0x419d60, internal_419d60, public_419d60);
/* CHUNK of public_406fb0 */
extern "C" NAKED register_t __cdecl internal_419d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419d68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c24
        public_419d73 : nop
        mov eax, offset public_41ee94
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419d60)
        ASM_EXPORT_ENTRY_FIRST(0x419d68, public_419d68)
        ASM_EXPORT_ENTRY_LAST(0x419d73, public_419d73)
    }
}

#undef public_419d68
#undef public_419d73

#pragma init_seg(compiler)
extern "C" void const* const public_419d68 = __AsmFindLabelExport(&internal_419d60, 0x419d68);
extern "C" void const* const public_419d73 = __AsmFindLabelExport(&internal_419d60, 0x419d73);
