#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd7fb _public_5bd7fb
#define public_5bd804 _public_5bd804
#define public_5bd80f _public_5bd80f
#define public_5bd817 _public_5bd817
#define public_5bd822 _public_5bd822

PROC_DECLARE(0x5bd7f0, internal_5bd7f0, public_5bd7f0);
/* CHUNK of public_4c84a0 */
extern "C" NAKED register_t __cdecl internal_5bd7f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd7fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bd804 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_5154f0
        public_5bd80f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c8630
        public_5bd817 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_59ef20
        public_5bd822 : nop
        mov eax, offset public_5f7c40
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd7f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd7fb, public_5bd7fb)
        ASM_EXPORT_ENTRY(0x5bd804, public_5bd804)
        ASM_EXPORT_ENTRY(0x5bd80f, public_5bd80f)
        ASM_EXPORT_ENTRY(0x5bd817, public_5bd817)
        ASM_EXPORT_ENTRY_LAST(0x5bd822, public_5bd822)
    }
}

#undef public_5bd7fb
#undef public_5bd804
#undef public_5bd80f
#undef public_5bd817
#undef public_5bd822

#pragma init_seg(compiler)
extern "C" void const* const public_5bd7fb = __AsmFindLabelExport(&internal_5bd7f0, 0x5bd7fb);
extern "C" void const* const public_5bd804 = __AsmFindLabelExport(&internal_5bd7f0, 0x5bd804);
extern "C" void const* const public_5bd80f = __AsmFindLabelExport(&internal_5bd7f0, 0x5bd80f);
extern "C" void const* const public_5bd817 = __AsmFindLabelExport(&internal_5bd7f0, 0x5bd817);
extern "C" void const* const public_5bd822 = __AsmFindLabelExport(&internal_5bd7f0, 0x5bd822);
