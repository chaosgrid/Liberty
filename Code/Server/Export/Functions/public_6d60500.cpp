#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60509 _public_6d60509
#define public_6d60512 _public_6d60512

PROC_DECLARE(0x6d60500, internal_6d60500, public_6d60500);
/* CHUNK of public_6ce7350 */
extern "C" NAKED register_t __cdecl internal_6d60500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60509 : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60512 : nop
        mov eax, offset public_6d70d78
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60500)
        ASM_EXPORT_ENTRY_FIRST(0x6d60509, public_6d60509)
        ASM_EXPORT_ENTRY_LAST(0x6d60512, public_6d60512)
    }
}

#undef public_6d60509
#undef public_6d60512

#pragma init_seg(compiler)
extern "C" void const* const public_6d60509 = __AsmFindLabelExport(&internal_6d60500, 0x6d60509);
extern "C" void const* const public_6d60512 = __AsmFindLabelExport(&internal_6d60500, 0x6d60512);
