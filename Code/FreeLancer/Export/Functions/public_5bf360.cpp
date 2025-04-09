#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf368 _public_5bf368
#define public_5bf373 _public_5bf373
#define public_5bf37f _public_5bf37f

PROC_DECLARE(0x5bf360, internal_5bf360, public_5bf360);
/* CHUNK of public_4f53a0 */
extern "C" NAKED register_t __cdecl internal_5bf360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5154f0
        public_5bf368 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_4de730
        public_5bf373 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_5c7090]
        public_5bf37f : nop
        mov eax, offset public_5f92a8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf360)
        ASM_EXPORT_ENTRY_FIRST(0x5bf368, public_5bf368)
        ASM_EXPORT_ENTRY(0x5bf373, public_5bf373)
        ASM_EXPORT_ENTRY_LAST(0x5bf37f, public_5bf37f)
    }
}

#undef public_5bf368
#undef public_5bf373
#undef public_5bf37f

#pragma init_seg(compiler)
extern "C" void const* const public_5bf368 = __AsmFindLabelExport(&internal_5bf360, 0x5bf368);
extern "C" void const* const public_5bf373 = __AsmFindLabelExport(&internal_5bf360, 0x5bf373);
extern "C" void const* const public_5bf37f = __AsmFindLabelExport(&internal_5bf360, 0x5bf37f);
