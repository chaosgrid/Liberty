#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db246b _public_6db246b
#define public_6db2476 _public_6db2476
#define public_6db2481 _public_6db2481
#define public_6db248c _public_6db248c
#define public_6db2497 _public_6db2497
#define public_6db24a2 _public_6db24a2

PROC_DECLARE(0x6db2460, internal_6db2460, public_6db2460);
/* CHUNK of public_6d85b60 */
extern "C" NAKED register_t __cdecl internal_6db2460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db246b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db2476 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db2481 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db248c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db2497 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db24a2 : nop
        mov eax, offset public_6db6ba0
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2460)
        ASM_EXPORT_ENTRY_FIRST(0x6db246b, public_6db246b)
        ASM_EXPORT_ENTRY(0x6db2476, public_6db2476)
        ASM_EXPORT_ENTRY(0x6db2481, public_6db2481)
        ASM_EXPORT_ENTRY(0x6db248c, public_6db248c)
        ASM_EXPORT_ENTRY(0x6db2497, public_6db2497)
        ASM_EXPORT_ENTRY_LAST(0x6db24a2, public_6db24a2)
    }
}

#undef public_6db246b
#undef public_6db2476
#undef public_6db2481
#undef public_6db248c
#undef public_6db2497
#undef public_6db24a2

#pragma init_seg(compiler)
extern "C" void const* const public_6db246b = __AsmFindLabelExport(&internal_6db2460, 0x6db246b);
extern "C" void const* const public_6db2476 = __AsmFindLabelExport(&internal_6db2460, 0x6db2476);
extern "C" void const* const public_6db2481 = __AsmFindLabelExport(&internal_6db2460, 0x6db2481);
extern "C" void const* const public_6db248c = __AsmFindLabelExport(&internal_6db2460, 0x6db248c);
extern "C" void const* const public_6db2497 = __AsmFindLabelExport(&internal_6db2460, 0x6db2497);
extern "C" void const* const public_6db24a2 = __AsmFindLabelExport(&internal_6db2460, 0x6db24a2);
