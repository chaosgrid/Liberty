#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6289730);
CLANG_FORWARD_PROC_SYMBOL(public_6289760);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63935b1 _public_63935b1
#define public_63935b9 _public_63935b9
#define public_63935c4 _public_63935c4
#define public_63935cf _public_63935cf
#define public_63935da _public_63935da

PROC_DECLARE(0x63935a0, internal_63935a0, public_63935a0);
/* CHUNK of public_62905a0 */
extern "C" NAKED register_t __cdecl internal_63935a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63935b1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6289730
        public_63935b9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6289760
        public_63935c4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_634bca0
        public_63935cf : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6269110
        public_63935da : nop
        mov eax, offset public_63ac728
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63935a0)
        ASM_EXPORT_ENTRY_FIRST(0x63935b1, public_63935b1)
        ASM_EXPORT_ENTRY(0x63935b9, public_63935b9)
        ASM_EXPORT_ENTRY(0x63935c4, public_63935c4)
        ASM_EXPORT_ENTRY(0x63935cf, public_63935cf)
        ASM_EXPORT_ENTRY_LAST(0x63935da, public_63935da)
    }
}

#undef public_63935b1
#undef public_63935b9
#undef public_63935c4
#undef public_63935cf
#undef public_63935da

#pragma init_seg(compiler)
extern "C" void const* const public_63935b1 = __AsmFindLabelExport(&internal_63935a0, 0x63935b1);
extern "C" void const* const public_63935b9 = __AsmFindLabelExport(&internal_63935a0, 0x63935b9);
extern "C" void const* const public_63935c4 = __AsmFindLabelExport(&internal_63935a0, 0x63935c4);
extern "C" void const* const public_63935cf = __AsmFindLabelExport(&internal_63935a0, 0x63935cf);
extern "C" void const* const public_63935da = __AsmFindLabelExport(&internal_63935a0, 0x63935da);
