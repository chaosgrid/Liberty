#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63659 _public_6d63659
#define public_6d63662 _public_6d63662

PROC_DECLARE(0x6d63650, internal_6d63650, public_6d63650);
/* CHUNK of public_6d4fd20 */
extern "C" NAKED register_t __cdecl internal_6d63650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_6d643f0]
        public_6d63659 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d643f0]
        public_6d63662 : nop
        mov eax, offset public_6d758b8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63650)
        ASM_EXPORT_ENTRY_FIRST(0x6d63659, public_6d63659)
        ASM_EXPORT_ENTRY_LAST(0x6d63662, public_6d63662)
    }
}

#undef public_6d63659
#undef public_6d63662

#pragma init_seg(compiler)
extern "C" void const* const public_6d63659 = __AsmFindLabelExport(&internal_6d63650, 0x6d63659);
extern "C" void const* const public_6d63662 = __AsmFindLabelExport(&internal_6d63650, 0x6d63662);
