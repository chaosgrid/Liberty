#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf191 _public_5bf191
#define public_5bf199 _public_5bf199
#define public_5bf1aa _public_5bf1aa

PROC_DECLARE(0x5bf180, internal_5bf180, public_5bf180);
/* CHUNK of public_4f38c0 */
extern "C" NAKED register_t __cdecl internal_5bf180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf191 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_444e20
        public_5bf199 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf1aa : nop
        mov eax, offset public_5f90ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf180)
        ASM_EXPORT_ENTRY_FIRST(0x5bf191, public_5bf191)
        ASM_EXPORT_ENTRY(0x5bf199, public_5bf199)
        ASM_EXPORT_ENTRY_LAST(0x5bf1aa, public_5bf1aa)
    }
}

#undef public_5bf191
#undef public_5bf199
#undef public_5bf1aa

#pragma init_seg(compiler)
extern "C" void const* const public_5bf191 = __AsmFindLabelExport(&internal_5bf180, 0x5bf191);
extern "C" void const* const public_5bf199 = __AsmFindLabelExport(&internal_5bf180, 0x5bf199);
extern "C" void const* const public_5bf1aa = __AsmFindLabelExport(&internal_5bf180, 0x5bf1aa);
