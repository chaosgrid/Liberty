#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf8fb _public_5bf8fb
#define public_5bf906 _public_5bf906
#define public_5bf911 _public_5bf911
#define public_5bf91c _public_5bf91c
#define public_5bf927 _public_5bf927

PROC_DECLARE(0x5bf8f0, internal_5bf8f0, public_5bf8f0);
/* CHUNK of public_5038c0 */
extern "C" NAKED register_t __cdecl internal_5bf8f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_502d90
        public_5bf8fb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x38
        jmp public_502d90
        public_5bf906 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_502d90
        public_5bf911 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        jmp public_502d90
        public_5bf91c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf927 : nop
        mov eax, offset public_5f987c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf8f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf8fb, public_5bf8fb)
        ASM_EXPORT_ENTRY(0x5bf906, public_5bf906)
        ASM_EXPORT_ENTRY(0x5bf911, public_5bf911)
        ASM_EXPORT_ENTRY(0x5bf91c, public_5bf91c)
        ASM_EXPORT_ENTRY_LAST(0x5bf927, public_5bf927)
    }
}

#undef public_5bf8fb
#undef public_5bf906
#undef public_5bf911
#undef public_5bf91c
#undef public_5bf927

#pragma init_seg(compiler)
extern "C" void const* const public_5bf8fb = __AsmFindLabelExport(&internal_5bf8f0, 0x5bf8fb);
extern "C" void const* const public_5bf906 = __AsmFindLabelExport(&internal_5bf8f0, 0x5bf906);
extern "C" void const* const public_5bf911 = __AsmFindLabelExport(&internal_5bf8f0, 0x5bf911);
extern "C" void const* const public_5bf91c = __AsmFindLabelExport(&internal_5bf8f0, 0x5bf91c);
extern "C" void const* const public_5bf927 = __AsmFindLabelExport(&internal_5bf8f0, 0x5bf927);
