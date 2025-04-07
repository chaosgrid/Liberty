#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfe7c _public_5bfe7c
#define public_5bfe87 _public_5bfe87
#define public_5bfe93 _public_5bfe93
#define public_5bfe9f _public_5bfe9f

PROC_DECLARE(0x5bfe70, internal_5bfe70, public_5bfe70);
/* CHUNK of public_5187d0 */
extern "C" NAKED register_t __cdecl internal_5bfe70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bfe7c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bfe87 : nop
        mov ecx, dword ptr ss : [ebp-0x1584]
        jmp dword ptr ds : [public_5c7090]
        public_5bfe93 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bfe9f : nop
        mov eax, offset public_5f9e20
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfe70)
        ASM_EXPORT_ENTRY_FIRST(0x5bfe7c, public_5bfe7c)
        ASM_EXPORT_ENTRY(0x5bfe87, public_5bfe87)
        ASM_EXPORT_ENTRY(0x5bfe93, public_5bfe93)
        ASM_EXPORT_ENTRY_LAST(0x5bfe9f, public_5bfe9f)
    }
}

#undef public_5bfe7c
#undef public_5bfe87
#undef public_5bfe93
#undef public_5bfe9f

#pragma init_seg(compiler)
extern "C" void const* const public_5bfe7c = __AsmFindLabelExport(&internal_5bfe70, 0x5bfe7c);
extern "C" void const* const public_5bfe87 = __AsmFindLabelExport(&internal_5bfe70, 0x5bfe87);
extern "C" void const* const public_5bfe93 = __AsmFindLabelExport(&internal_5bfe70, 0x5bfe93);
extern "C" void const* const public_5bfe9f = __AsmFindLabelExport(&internal_5bfe70, 0x5bfe9f);
