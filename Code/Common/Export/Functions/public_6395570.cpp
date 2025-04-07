#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395578 _public_6395578
#define public_6395583 _public_6395583
#define public_639558e _public_639558e
#define public_639559c _public_639559c
#define public_63955a7 _public_63955a7

PROC_DECLARE(0x6395570, internal_6395570, public_6395570);
/* CHUNK of public_62f1460 */
extern "C" NAKED register_t __cdecl internal_6395570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395578 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_62fb1a0
        public_6395583 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_62a68e0
        public_639558e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6269110
        public_639559c : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63955a7 : nop
        mov eax, offset public_63af07c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395570)
        ASM_EXPORT_ENTRY_FIRST(0x6395578, public_6395578)
        ASM_EXPORT_ENTRY(0x6395583, public_6395583)
        ASM_EXPORT_ENTRY(0x639558e, public_639558e)
        ASM_EXPORT_ENTRY(0x639559c, public_639559c)
        ASM_EXPORT_ENTRY_LAST(0x63955a7, public_63955a7)
    }
}

#undef public_6395578
#undef public_6395583
#undef public_639558e
#undef public_639559c
#undef public_63955a7

#pragma init_seg(compiler)
extern "C" void const* const public_6395578 = __AsmFindLabelExport(&internal_6395570, 0x6395578);
extern "C" void const* const public_6395583 = __AsmFindLabelExport(&internal_6395570, 0x6395583);
extern "C" void const* const public_639558e = __AsmFindLabelExport(&internal_6395570, 0x639558e);
extern "C" void const* const public_639559c = __AsmFindLabelExport(&internal_6395570, 0x639559c);
extern "C" void const* const public_63955a7 = __AsmFindLabelExport(&internal_6395570, 0x63955a7);
