#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4f1c _public_5c4f1c
#define public_5c4f27 _public_5c4f27
#define public_5c4f33 _public_5c4f33
#define public_5c4f3f _public_5c4f3f

PROC_DECLARE(0x5c4f10, internal_5c4f10, public_5c4f10);
/* CHUNK of public_59fd10 */
extern "C" NAKED register_t __cdecl internal_5c4f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1674]
        jmp dword ptr ds : [public_5c6048]
        public_5c4f1c : nop
        lea ecx, ss:[ebp-0x1674]
        jmp public_40edf0
        public_5c4f27 : nop
        mov ecx, dword ptr ss : [ebp-0x16A8]
        jmp dword ptr ds : [public_5c7090]
        public_5c4f33 : nop
        lea ecx, ss:[ebp-0x1674]
        jmp dword ptr ds : [public_5c7090]
        public_5c4f3f : nop
        mov eax, offset public_5fed04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4f10)
        ASM_EXPORT_ENTRY_FIRST(0x5c4f1c, public_5c4f1c)
        ASM_EXPORT_ENTRY(0x5c4f27, public_5c4f27)
        ASM_EXPORT_ENTRY(0x5c4f33, public_5c4f33)
        ASM_EXPORT_ENTRY_LAST(0x5c4f3f, public_5c4f3f)
    }
}

#undef public_5c4f1c
#undef public_5c4f27
#undef public_5c4f33
#undef public_5c4f3f

#pragma init_seg(compiler)
extern "C" void const* const public_5c4f1c = __AsmFindLabelExport(&internal_5c4f10, 0x5c4f1c);
extern "C" void const* const public_5c4f27 = __AsmFindLabelExport(&internal_5c4f10, 0x5c4f27);
extern "C" void const* const public_5c4f33 = __AsmFindLabelExport(&internal_5c4f10, 0x5c4f33);
extern "C" void const* const public_5c4f3f = __AsmFindLabelExport(&internal_5c4f10, 0x5c4f3f);
