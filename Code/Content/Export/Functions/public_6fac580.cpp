#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac591 _public_6fac591
#define public_6fac59d _public_6fac59d
#define public_6fac5a8 _public_6fac5a8
#define public_6fac5b3 _public_6fac5b3

PROC_DECLARE(0x6fac580, internal_6fac580, public_6fac580);
/* CHUNK of public_6ef8110 */
extern "C" NAKED register_t __cdecl internal_6fac580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac591 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_6fb3138]
        public_6fac59d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6ef65a0
        public_6fac5a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fac5b3 : nop
        mov eax, offset public_6fc120c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac580)
        ASM_EXPORT_ENTRY_FIRST(0x6fac591, public_6fac591)
        ASM_EXPORT_ENTRY(0x6fac59d, public_6fac59d)
        ASM_EXPORT_ENTRY(0x6fac5a8, public_6fac5a8)
        ASM_EXPORT_ENTRY_LAST(0x6fac5b3, public_6fac5b3)
    }
}

#undef public_6fac591
#undef public_6fac59d
#undef public_6fac5a8
#undef public_6fac5b3

#pragma init_seg(compiler)
extern "C" void const* const public_6fac591 = __AsmFindLabelExport(&internal_6fac580, 0x6fac591);
extern "C" void const* const public_6fac59d = __AsmFindLabelExport(&internal_6fac580, 0x6fac59d);
extern "C" void const* const public_6fac5a8 = __AsmFindLabelExport(&internal_6fac580, 0x6fac5a8);
extern "C" void const* const public_6fac5b3 = __AsmFindLabelExport(&internal_6fac580, 0x6fac5b3);
