#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4911 _public_5c4911
#define public_5c491c _public_5c491c
#define public_5c4924 _public_5c4924

PROC_DECLARE(0x5c4900, internal_5c4900, public_5c4900);
/* CHUNK of public_590b40 */
extern "C" NAKED register_t __cdecl internal_5c4900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c4911 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_444e20
        public_5c491c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5c4924 : nop
        mov eax, offset public_5fe5f4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4900)
        ASM_EXPORT_ENTRY_FIRST(0x5c4911, public_5c4911)
        ASM_EXPORT_ENTRY(0x5c491c, public_5c491c)
        ASM_EXPORT_ENTRY_LAST(0x5c4924, public_5c4924)
    }
}

#undef public_5c4911
#undef public_5c491c
#undef public_5c4924

#pragma init_seg(compiler)
extern "C" void const* const public_5c4911 = __AsmFindLabelExport(&internal_5c4900, 0x5c4911);
extern "C" void const* const public_5c491c = __AsmFindLabelExport(&internal_5c4900, 0x5c491c);
extern "C" void const* const public_5c4924 = __AsmFindLabelExport(&internal_5c4900, 0x5c4924);
