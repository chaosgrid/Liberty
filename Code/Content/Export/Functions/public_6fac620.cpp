#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac62b _public_6fac62b
#define public_6fac637 _public_6fac637
#define public_6fac642 _public_6fac642
#define public_6fac64d _public_6fac64d

PROC_DECLARE(0x6fac620, internal_6fac620, public_6fac620);
/* CHUNK of public_6ef93c0 */
extern "C" NAKED register_t __cdecl internal_6fac620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_6ef38e0
        public_6fac62b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp dword ptr ds : [public_6fb3138]
        public_6fac637 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6ef65a0
        public_6fac642 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fac64d : nop
        mov eax, offset public_6fc129c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac620)
        ASM_EXPORT_ENTRY_FIRST(0x6fac62b, public_6fac62b)
        ASM_EXPORT_ENTRY(0x6fac637, public_6fac637)
        ASM_EXPORT_ENTRY(0x6fac642, public_6fac642)
        ASM_EXPORT_ENTRY_LAST(0x6fac64d, public_6fac64d)
    }
}

#undef public_6fac62b
#undef public_6fac637
#undef public_6fac642
#undef public_6fac64d

#pragma init_seg(compiler)
extern "C" void const* const public_6fac62b = __AsmFindLabelExport(&internal_6fac620, 0x6fac62b);
extern "C" void const* const public_6fac637 = __AsmFindLabelExport(&internal_6fac620, 0x6fac637);
extern "C" void const* const public_6fac642 = __AsmFindLabelExport(&internal_6fac620, 0x6fac642);
extern "C" void const* const public_6fac64d = __AsmFindLabelExport(&internal_6fac620, 0x6fac64d);
