#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba2b1 _public_5ba2b1
#define public_5ba2ba _public_5ba2ba

PROC_DECLARE(0x5ba2a0, internal_5ba2a0, public_5ba2a0);
/* CHUNK of public_45aad0 */
extern "C" NAKED register_t __cdecl internal_5ba2a0()
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
        public_5ba2b1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5ba2ba : nop
        mov eax, offset public_5f4690
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba2a0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba2b1, public_5ba2b1)
        ASM_EXPORT_ENTRY_LAST(0x5ba2ba, public_5ba2ba)
    }
}

#undef public_5ba2b1
#undef public_5ba2ba

#pragma init_seg(compiler)
extern "C" void const* const public_5ba2b1 = __AsmFindLabelExport(&internal_5ba2a0, 0x5ba2b1);
extern "C" void const* const public_5ba2ba = __AsmFindLabelExport(&internal_5ba2a0, 0x5ba2ba);
