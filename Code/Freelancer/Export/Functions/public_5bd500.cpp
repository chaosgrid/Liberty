#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd50b _public_5bd50b
#define public_5bd513 _public_5bd513
#define public_5bd51b _public_5bd51b
#define public_5bd526 _public_5bd526
#define public_5bd531 _public_5bd531
#define public_5bd53f _public_5bd53f

PROC_DECLARE(0x5bd500, internal_5bd500, public_5bd500);
/* CHUNK of public_4be420 */
extern "C" NAKED register_t __cdecl internal_5bd500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd50b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5bd513 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5a1af0
        public_5bd51b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_444e20
        public_5bd526 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_444e50
        public_5bd531 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xF4
        jmp public_444ee0
        public_5bd53f : nop
        mov eax, offset public_5f78e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd500)
        ASM_EXPORT_ENTRY_FIRST(0x5bd50b, public_5bd50b)
        ASM_EXPORT_ENTRY(0x5bd513, public_5bd513)
        ASM_EXPORT_ENTRY(0x5bd51b, public_5bd51b)
        ASM_EXPORT_ENTRY(0x5bd526, public_5bd526)
        ASM_EXPORT_ENTRY(0x5bd531, public_5bd531)
        ASM_EXPORT_ENTRY_LAST(0x5bd53f, public_5bd53f)
    }
}

#undef public_5bd50b
#undef public_5bd513
#undef public_5bd51b
#undef public_5bd526
#undef public_5bd531
#undef public_5bd53f

#pragma init_seg(compiler)
extern "C" void const* const public_5bd50b = __AsmFindLabelExport(&internal_5bd500, 0x5bd50b);
extern "C" void const* const public_5bd513 = __AsmFindLabelExport(&internal_5bd500, 0x5bd513);
extern "C" void const* const public_5bd51b = __AsmFindLabelExport(&internal_5bd500, 0x5bd51b);
extern "C" void const* const public_5bd526 = __AsmFindLabelExport(&internal_5bd500, 0x5bd526);
extern "C" void const* const public_5bd531 = __AsmFindLabelExport(&internal_5bd500, 0x5bd531);
extern "C" void const* const public_5bd53f = __AsmFindLabelExport(&internal_5bd500, 0x5bd53f);
