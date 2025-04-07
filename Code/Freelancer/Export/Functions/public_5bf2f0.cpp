#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf2f8 _public_5bf2f8
#define public_5bf307 _public_5bf307

PROC_DECLARE(0x5bf2f0, internal_5bf2f0, public_5bf2f0);
/* CHUNK of public_53ac10 */
extern "C" NAKED register_t __cdecl internal_5bf2f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4f4a10
        public_5bf2f8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp dword ptr ds : [public_5c658c]
        public_5bf307 : nop
        mov eax, offset public_5f922c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf2f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf2f8, public_5bf2f8)
        ASM_EXPORT_ENTRY_LAST(0x5bf307, public_5bf307)
    }
}

#undef public_5bf2f8
#undef public_5bf307

#pragma init_seg(compiler)
extern "C" void const* const public_5bf2f8 = __AsmFindLabelExport(&internal_5bf2f0, 0x5bf2f8);
extern "C" void const* const public_5bf307 = __AsmFindLabelExport(&internal_5bf2f0, 0x5bf307);
