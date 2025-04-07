#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf97c _public_6faf97c
#define public_6faf984 _public_6faf984

PROC_DECLARE(0x6faf970, internal_6faf970, public_6faf970);
/* CHUNK of public_6f5d560 */
extern "C" NAKED register_t __cdecl internal_6faf970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp dword ptr ds : [public_6fb3228]
        public_6faf97c : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_6eec8d0
        public_6faf984 : nop
        mov eax, offset public_6fc4990
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf970)
        ASM_EXPORT_ENTRY_FIRST(0x6faf97c, public_6faf97c)
        ASM_EXPORT_ENTRY_LAST(0x6faf984, public_6faf984)
    }
}

#undef public_6faf97c
#undef public_6faf984

#pragma init_seg(compiler)
extern "C" void const* const public_6faf97c = __AsmFindLabelExport(&internal_6faf970, 0x6faf97c);
extern "C" void const* const public_6faf984 = __AsmFindLabelExport(&internal_6faf970, 0x6faf984);
