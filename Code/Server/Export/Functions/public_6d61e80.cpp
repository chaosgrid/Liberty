#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1add0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61e8b _public_6d61e8b
#define public_6d61e94 _public_6d61e94
#define public_6d61e9c _public_6d61e9c

PROC_DECLARE(0x6d61e80, internal_6d61e80, public_6d61e80);
/* CHUNK of public_6d18be0 */
extern "C" NAKED register_t __cdecl internal_6d61e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp public_6d0b7e0
        public_6d61e8b : nop
        lea ecx, ss:[ebp-0x4C]
        jmp dword ptr ds : [public_6d64b68]
        public_6d61e94 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6d1add0
        public_6d61e9c : nop
        mov eax, offset public_6d72bd8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61e80)
        ASM_EXPORT_ENTRY_FIRST(0x6d61e8b, public_6d61e8b)
        ASM_EXPORT_ENTRY(0x6d61e94, public_6d61e94)
        ASM_EXPORT_ENTRY_LAST(0x6d61e9c, public_6d61e9c)
    }
}

#undef public_6d61e8b
#undef public_6d61e94
#undef public_6d61e9c

#pragma init_seg(compiler)
extern "C" void const* const public_6d61e8b = __AsmFindLabelExport(&internal_6d61e80, 0x6d61e8b);
extern "C" void const* const public_6d61e94 = __AsmFindLabelExport(&internal_6d61e80, 0x6d61e94);
extern "C" void const* const public_6d61e9c = __AsmFindLabelExport(&internal_6d61e80, 0x6d61e9c);
