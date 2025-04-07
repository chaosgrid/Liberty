#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2068 _public_5c2068

PROC_DECLARE(0x5c2060, internal_5c2060, public_5c2060);
/* CHUNK of public_566380 */
extern "C" NAKED register_t __cdecl internal_5c2060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c2068 : nop
        mov eax, offset public_5fc338
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2060)
        ASM_EXPORT_ENTRY_SINGLE(0x5c2068, public_5c2068)
    }
}

#undef public_5c2068

#pragma init_seg(compiler)
extern "C" void const* const public_5c2068 = __AsmFindLabelExport(&internal_5c2060, 0x5c2068);
