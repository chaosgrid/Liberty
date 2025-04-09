#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a68c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c51c9 _public_5c51c9
#define public_5c51d1 _public_5c51d1
#define public_5c51da _public_5c51da

PROC_DECLARE(0x5c51c0, internal_5c51c0, public_5c51c0);
/* CHUNK of public_5a64f0 */
extern "C" NAKED register_t __cdecl internal_5c51c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7058]
        public_5c51c9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_5a68c0
        public_5c51d1 : nop
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_5c7058]
        public_5c51da : nop
        mov eax, offset public_5ff058
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c51c0)
        ASM_EXPORT_ENTRY_FIRST(0x5c51c9, public_5c51c9)
        ASM_EXPORT_ENTRY(0x5c51d1, public_5c51d1)
        ASM_EXPORT_ENTRY_LAST(0x5c51da, public_5c51da)
    }
}

#undef public_5c51c9
#undef public_5c51d1
#undef public_5c51da

#pragma init_seg(compiler)
extern "C" void const* const public_5c51c9 = __AsmFindLabelExport(&internal_5c51c0, 0x5c51c9);
extern "C" void const* const public_5c51d1 = __AsmFindLabelExport(&internal_5c51c0, 0x5c51d1);
extern "C" void const* const public_5c51da = __AsmFindLabelExport(&internal_5c51c0, 0x5c51da);
