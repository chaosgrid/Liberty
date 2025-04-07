#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85230);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2558 _public_6db2558
#define public_6db2563 _public_6db2563
#define public_6db2572 _public_6db2572
#define public_6db2581 _public_6db2581
#define public_6db258f _public_6db258f
#define public_6db259e _public_6db259e
#define public_6db25ad _public_6db25ad
#define public_6db25bb _public_6db25bb

PROC_DECLARE(0x6db2550, internal_6db2550, public_6db2550);
/* CHUNK of public_6d89890 */
extern "C" NAKED register_t __cdecl internal_6db2550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6d85230
        public_6db2558 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db2563 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db2572 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db2581 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x264
        jmp public_6d91340
        public_6db258f : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db259e : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db25ad : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x264
        jmp public_6d91340
        public_6db25bb : nop
        mov eax, offset public_6db6d44
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2550)
        ASM_EXPORT_ENTRY_FIRST(0x6db2558, public_6db2558)
        ASM_EXPORT_ENTRY(0x6db2563, public_6db2563)
        ASM_EXPORT_ENTRY(0x6db2572, public_6db2572)
        ASM_EXPORT_ENTRY(0x6db2581, public_6db2581)
        ASM_EXPORT_ENTRY(0x6db258f, public_6db258f)
        ASM_EXPORT_ENTRY(0x6db259e, public_6db259e)
        ASM_EXPORT_ENTRY(0x6db25ad, public_6db25ad)
        ASM_EXPORT_ENTRY_LAST(0x6db25bb, public_6db25bb)
    }
}

#undef public_6db2558
#undef public_6db2563
#undef public_6db2572
#undef public_6db2581
#undef public_6db258f
#undef public_6db259e
#undef public_6db25ad
#undef public_6db25bb

#pragma init_seg(compiler)
extern "C" void const* const public_6db2558 = __AsmFindLabelExport(&internal_6db2550, 0x6db2558);
extern "C" void const* const public_6db2563 = __AsmFindLabelExport(&internal_6db2550, 0x6db2563);
extern "C" void const* const public_6db2572 = __AsmFindLabelExport(&internal_6db2550, 0x6db2572);
extern "C" void const* const public_6db2581 = __AsmFindLabelExport(&internal_6db2550, 0x6db2581);
extern "C" void const* const public_6db258f = __AsmFindLabelExport(&internal_6db2550, 0x6db258f);
extern "C" void const* const public_6db259e = __AsmFindLabelExport(&internal_6db2550, 0x6db259e);
extern "C" void const* const public_6db25ad = __AsmFindLabelExport(&internal_6db2550, 0x6db25ad);
extern "C" void const* const public_6db25bb = __AsmFindLabelExport(&internal_6db2550, 0x6db25bb);
