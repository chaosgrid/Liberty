#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344a00);
CLANG_FORWARD_PROC_SYMBOL(public_6344aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6344ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6344ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63979eb _public_63979eb
#define public_63979f3 _public_63979f3
#define public_63979fe _public_63979fe
#define public_6397a09 _public_6397a09
#define public_6397a11 _public_6397a11
#define public_6397a1c _public_6397a1c
#define public_6397a27 _public_6397a27
#define public_6397a2f _public_6397a2f
#define public_6397a3a _public_6397a3a

PROC_DECLARE(0x63979e0, internal_63979e0, public_63979e0);
/* CHUNK of public_6344710 */
extern "C" NAKED register_t __cdecl internal_63979e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_63449d0
        public_63979eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6344aa0
        public_63979f3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6344a00
        public_63979fe : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397a09 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6344ad0
        public_6397a11 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397a1c : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397a27 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6344ae0
        public_6397a2f : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397a3a : nop
        mov eax, offset public_63b1c30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63979e0)
        ASM_EXPORT_ENTRY_FIRST(0x63979eb, public_63979eb)
        ASM_EXPORT_ENTRY(0x63979f3, public_63979f3)
        ASM_EXPORT_ENTRY(0x63979fe, public_63979fe)
        ASM_EXPORT_ENTRY(0x6397a09, public_6397a09)
        ASM_EXPORT_ENTRY(0x6397a11, public_6397a11)
        ASM_EXPORT_ENTRY(0x6397a1c, public_6397a1c)
        ASM_EXPORT_ENTRY(0x6397a27, public_6397a27)
        ASM_EXPORT_ENTRY(0x6397a2f, public_6397a2f)
        ASM_EXPORT_ENTRY_LAST(0x6397a3a, public_6397a3a)
    }
}

#undef public_63979eb
#undef public_63979f3
#undef public_63979fe
#undef public_6397a09
#undef public_6397a11
#undef public_6397a1c
#undef public_6397a27
#undef public_6397a2f
#undef public_6397a3a

#pragma init_seg(compiler)
extern "C" void const* const public_63979eb = __AsmFindLabelExport(&internal_63979e0, 0x63979eb);
extern "C" void const* const public_63979f3 = __AsmFindLabelExport(&internal_63979e0, 0x63979f3);
extern "C" void const* const public_63979fe = __AsmFindLabelExport(&internal_63979e0, 0x63979fe);
extern "C" void const* const public_6397a09 = __AsmFindLabelExport(&internal_63979e0, 0x6397a09);
extern "C" void const* const public_6397a11 = __AsmFindLabelExport(&internal_63979e0, 0x6397a11);
extern "C" void const* const public_6397a1c = __AsmFindLabelExport(&internal_63979e0, 0x6397a1c);
extern "C" void const* const public_6397a27 = __AsmFindLabelExport(&internal_63979e0, 0x6397a27);
extern "C" void const* const public_6397a2f = __AsmFindLabelExport(&internal_63979e0, 0x6397a2f);
extern "C" void const* const public_6397a3a = __AsmFindLabelExport(&internal_63979e0, 0x6397a3a);
