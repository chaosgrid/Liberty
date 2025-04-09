#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be671 _public_5be671

PROC_DECLARE(0x5be660, internal_5be660, public_5be660);
/* CHUNK of public_4df750 */
extern "C" NAKED register_t __cdecl internal_5be660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5be671 : nop
        mov eax, offset public_5f88a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be660)
        ASM_EXPORT_ENTRY_SINGLE(0x5be671, public_5be671)
    }
}

#undef public_5be671

#pragma init_seg(compiler)
extern "C" void const* const public_5be671 = __AsmFindLabelExport(&internal_5be660, 0x5be671);
