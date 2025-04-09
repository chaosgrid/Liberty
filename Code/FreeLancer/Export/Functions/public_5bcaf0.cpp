#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcaf9 _public_5bcaf9
#define public_5bcb02 _public_5bcb02
#define public_5bcb0a _public_5bcb0a

PROC_DECLARE(0x5bcaf0, internal_5bcaf0, public_5bcaf0);
/* CHUNK of public_49f2e0 */
extern "C" NAKED register_t __cdecl internal_5bcaf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bcaf9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcb02 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_45eeb0
        public_5bcb0a : nop
        mov eax, offset public_5f6d50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcaf0)
        ASM_EXPORT_ENTRY_FIRST(0x5bcaf9, public_5bcaf9)
        ASM_EXPORT_ENTRY(0x5bcb02, public_5bcb02)
        ASM_EXPORT_ENTRY_LAST(0x5bcb0a, public_5bcb0a)
    }
}

#undef public_5bcaf9
#undef public_5bcb02
#undef public_5bcb0a

#pragma init_seg(compiler)
extern "C" void const* const public_5bcaf9 = __AsmFindLabelExport(&internal_5bcaf0, 0x5bcaf9);
extern "C" void const* const public_5bcb02 = __AsmFindLabelExport(&internal_5bcaf0, 0x5bcb02);
extern "C" void const* const public_5bcb0a = __AsmFindLabelExport(&internal_5bcaf0, 0x5bcb0a);
