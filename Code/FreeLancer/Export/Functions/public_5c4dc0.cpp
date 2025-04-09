#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4dc8 _public_5c4dc8
#define public_5c4dd7 _public_5c4dd7

PROC_DECLARE(0x5c4dc0, internal_5c4dc0, public_5c4dc0);
/* CHUNK of public_59ce50 */
extern "C" NAKED register_t __cdecl internal_5c4dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_57b260
        public_5c4dc8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4A8
        jmp dword ptr ds : [public_5c62c4]
        public_5c4dd7 : nop
        mov eax, offset public_5feb7c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4dc0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4dc8, public_5c4dc8)
        ASM_EXPORT_ENTRY_LAST(0x5c4dd7, public_5c4dd7)
    }
}

#undef public_5c4dc8
#undef public_5c4dd7

#pragma init_seg(compiler)
extern "C" void const* const public_5c4dc8 = __AsmFindLabelExport(&internal_5c4dc0, 0x5c4dc8);
extern "C" void const* const public_5c4dd7 = __AsmFindLabelExport(&internal_5c4dc0, 0x5c4dd7);
