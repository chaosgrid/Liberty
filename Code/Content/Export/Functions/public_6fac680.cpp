#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac691 _public_6fac691
#define public_6fac69c _public_6fac69c
#define public_6fac6ad _public_6fac6ad
#define public_6fac6b8 _public_6fac6b8

PROC_DECLARE(0x6fac680, internal_6fac680, public_6fac680);
/* CHUNK of public_6ef9e50 */
extern "C" NAKED register_t __cdecl internal_6fac680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac691 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_6ef38e0
        public_6fac69c : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac6ad : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_6ef6640
        public_6fac6b8 : nop
        mov eax, offset public_6fc135c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac680)
        ASM_EXPORT_ENTRY_FIRST(0x6fac691, public_6fac691)
        ASM_EXPORT_ENTRY(0x6fac69c, public_6fac69c)
        ASM_EXPORT_ENTRY(0x6fac6ad, public_6fac6ad)
        ASM_EXPORT_ENTRY_LAST(0x6fac6b8, public_6fac6b8)
    }
}

#undef public_6fac691
#undef public_6fac69c
#undef public_6fac6ad
#undef public_6fac6b8

#pragma init_seg(compiler)
extern "C" void const* const public_6fac691 = __AsmFindLabelExport(&internal_6fac680, 0x6fac691);
extern "C" void const* const public_6fac69c = __AsmFindLabelExport(&internal_6fac680, 0x6fac69c);
extern "C" void const* const public_6fac6ad = __AsmFindLabelExport(&internal_6fac680, 0x6fac6ad);
extern "C" void const* const public_6fac6b8 = __AsmFindLabelExport(&internal_6fac680, 0x6fac6b8);
