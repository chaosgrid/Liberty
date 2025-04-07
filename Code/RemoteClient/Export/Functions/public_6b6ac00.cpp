#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50e20);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6ac11 _public_6b6ac11

PROC_DECLARE(0x6b6ac00, internal_6b6ac00, public_6b6ac00);
/* CHUNK of public_6b50cc0 */
extern "C" NAKED register_t __cdecl internal_6b6ac00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6b50e20
        add esp, 8
        ret 
        public_6b6ac11 : nop
        mov eax, offset public_6b6f2c8
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6ac00)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6ac11, public_6b6ac11)
    }
}

#undef public_6b6ac11

#pragma init_seg(compiler)
extern "C" void const* const public_6b6ac11 = __AsmFindLabelExport(&internal_6b6ac00, 0x6b6ac11);
