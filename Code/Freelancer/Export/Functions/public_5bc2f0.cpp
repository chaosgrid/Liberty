#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc2f8 _public_5bc2f8
#define public_5bc301 _public_5bc301
#define public_5bc30a _public_5bc30a
#define public_5bc312 _public_5bc312
#define public_5bc323 _public_5bc323

PROC_DECLARE(0x5bc2f0, internal_5bc2f0, public_5bc2f0);
/* CHUNK of public_48a4c0 */
extern "C" NAKED register_t __cdecl internal_5bc2f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_444e20
        public_5bc2f8 : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bc301 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62b4]
        public_5bc30a : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_45eeb0
        public_5bc312 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bc323 : nop
        mov eax, offset public_5f6734
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc2f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc2f8, public_5bc2f8)
        ASM_EXPORT_ENTRY(0x5bc301, public_5bc301)
        ASM_EXPORT_ENTRY(0x5bc30a, public_5bc30a)
        ASM_EXPORT_ENTRY(0x5bc312, public_5bc312)
        ASM_EXPORT_ENTRY_LAST(0x5bc323, public_5bc323)
    }
}

#undef public_5bc2f8
#undef public_5bc301
#undef public_5bc30a
#undef public_5bc312
#undef public_5bc323

#pragma init_seg(compiler)
extern "C" void const* const public_5bc2f8 = __AsmFindLabelExport(&internal_5bc2f0, 0x5bc2f8);
extern "C" void const* const public_5bc301 = __AsmFindLabelExport(&internal_5bc2f0, 0x5bc301);
extern "C" void const* const public_5bc30a = __AsmFindLabelExport(&internal_5bc2f0, 0x5bc30a);
extern "C" void const* const public_5bc312 = __AsmFindLabelExport(&internal_5bc2f0, 0x5bc312);
extern "C" void const* const public_5bc323 = __AsmFindLabelExport(&internal_5bc2f0, 0x5bc323);
