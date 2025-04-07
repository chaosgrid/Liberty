#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ed37d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadde1 _public_6fadde1
#define public_6faddec _public_6faddec
#define public_6faddf7 _public_6faddf7

PROC_DECLARE(0x6faddd0, internal_6faddd0, public_6faddd0);
/* CHUNK of public_6f21c50 */
extern "C" NAKED register_t __cdecl internal_6faddd0()
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
        public_6fadde1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6ed37d0
        public_6faddec : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6f28e10
        public_6faddf7 : nop
        mov eax, offset public_6fc2d34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faddd0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadde1, public_6fadde1)
        ASM_EXPORT_ENTRY(0x6faddec, public_6faddec)
        ASM_EXPORT_ENTRY_LAST(0x6faddf7, public_6faddf7)
    }
}

#undef public_6fadde1
#undef public_6faddec
#undef public_6faddf7

#pragma init_seg(compiler)
extern "C" void const* const public_6fadde1 = __AsmFindLabelExport(&internal_6faddd0, 0x6fadde1);
extern "C" void const* const public_6faddec = __AsmFindLabelExport(&internal_6faddd0, 0x6faddec);
extern "C" void const* const public_6faddf7 = __AsmFindLabelExport(&internal_6faddd0, 0x6faddf7);
