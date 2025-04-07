#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4c9230);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd85b _public_5bd85b
#define public_5bd863 _public_5bd863
#define public_5bd86b _public_5bd86b
#define public_5bd876 _public_5bd876
#define public_5bd884 _public_5bd884

PROC_DECLARE(0x5bd850, internal_5bd850, public_5bd850);
/* CHUNK of public_4c8d40 */
extern "C" NAKED register_t __cdecl internal_5bd850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd85b : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_4c9230
        public_5bd863 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_4c9230
        public_5bd86b : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x28
        jmp public_5154f0
        public_5bd876 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0xF4
        jmp public_4c8630
        public_5bd884 : nop
        mov eax, offset public_5f7cb0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd850)
        ASM_EXPORT_ENTRY_FIRST(0x5bd85b, public_5bd85b)
        ASM_EXPORT_ENTRY(0x5bd863, public_5bd863)
        ASM_EXPORT_ENTRY(0x5bd86b, public_5bd86b)
        ASM_EXPORT_ENTRY(0x5bd876, public_5bd876)
        ASM_EXPORT_ENTRY_LAST(0x5bd884, public_5bd884)
    }
}

#undef public_5bd85b
#undef public_5bd863
#undef public_5bd86b
#undef public_5bd876
#undef public_5bd884

#pragma init_seg(compiler)
extern "C" void const* const public_5bd85b = __AsmFindLabelExport(&internal_5bd850, 0x5bd85b);
extern "C" void const* const public_5bd863 = __AsmFindLabelExport(&internal_5bd850, 0x5bd863);
extern "C" void const* const public_5bd86b = __AsmFindLabelExport(&internal_5bd850, 0x5bd86b);
extern "C" void const* const public_5bd876 = __AsmFindLabelExport(&internal_5bd850, 0x5bd876);
extern "C" void const* const public_5bd884 = __AsmFindLabelExport(&internal_5bd850, 0x5bd884);
