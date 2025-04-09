#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c570);
CLANG_FORWARD_PROC_SYMBOL(public_43c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b939b _public_5b939b
#define public_5b93a3 _public_5b93a3
#define public_5b93ae _public_5b93ae
#define public_5b93b9 _public_5b93b9

PROC_DECLARE(0x5b9390, internal_5b9390, public_5b9390);
/* CHUNK of public_439d80 */
extern "C" NAKED register_t __cdecl internal_5b9390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b939b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_43c570
        public_5b93a3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_43c7b0
        public_5b93ae : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b93b9 : nop
        mov eax, offset public_5f333c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9390)
        ASM_EXPORT_ENTRY_FIRST(0x5b939b, public_5b939b)
        ASM_EXPORT_ENTRY(0x5b93a3, public_5b93a3)
        ASM_EXPORT_ENTRY(0x5b93ae, public_5b93ae)
        ASM_EXPORT_ENTRY_LAST(0x5b93b9, public_5b93b9)
    }
}

#undef public_5b939b
#undef public_5b93a3
#undef public_5b93ae
#undef public_5b93b9

#pragma init_seg(compiler)
extern "C" void const* const public_5b939b = __AsmFindLabelExport(&internal_5b9390, 0x5b939b);
extern "C" void const* const public_5b93a3 = __AsmFindLabelExport(&internal_5b9390, 0x5b93a3);
extern "C" void const* const public_5b93ae = __AsmFindLabelExport(&internal_5b9390, 0x5b93ae);
extern "C" void const* const public_5b93b9 = __AsmFindLabelExport(&internal_5b9390, 0x5b93b9);
