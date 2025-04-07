#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d620);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadd81 _public_6fadd81
#define public_6fadd8c _public_6fadd8c
#define public_6fadd97 _public_6fadd97
#define public_6fadd9f _public_6fadd9f

PROC_DECLARE(0x6fadd70, internal_6fadd70, public_6fadd70);
/* CHUNK of public_6f21a60 */
extern "C" NAKED register_t __cdecl internal_6fadd70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fadd81 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6f1d620
        public_6fadd8c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x48
        jmp public_6f15350
        public_6fadd97 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6f15350
        public_6fadd9f : nop
        mov eax, offset public_6fc2cdc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadd70)
        ASM_EXPORT_ENTRY_FIRST(0x6fadd81, public_6fadd81)
        ASM_EXPORT_ENTRY(0x6fadd8c, public_6fadd8c)
        ASM_EXPORT_ENTRY(0x6fadd97, public_6fadd97)
        ASM_EXPORT_ENTRY_LAST(0x6fadd9f, public_6fadd9f)
    }
}

#undef public_6fadd81
#undef public_6fadd8c
#undef public_6fadd97
#undef public_6fadd9f

#pragma init_seg(compiler)
extern "C" void const* const public_6fadd81 = __AsmFindLabelExport(&internal_6fadd70, 0x6fadd81);
extern "C" void const* const public_6fadd8c = __AsmFindLabelExport(&internal_6fadd70, 0x6fadd8c);
extern "C" void const* const public_6fadd97 = __AsmFindLabelExport(&internal_6fadd70, 0x6fadd97);
extern "C" void const* const public_6fadd9f = __AsmFindLabelExport(&internal_6fadd70, 0x6fadd9f);
