#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3edee _public_6b3edee

PROC_DECLARE(0x6b3ede0, internal_6b3ede0, public_6b3ede0);
/* CHUNK of public_6b3ed00 */
extern "C" NAKED register_t __cdecl internal_6b3ede0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6b3edee
        push eax
        call public_6b6a092
        pop ecx
        public_6b3edee : nop
        ret 
        UNREACHABLE_TRAP(0x6b3ede0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b3edee, public_6b3edee)
    }
}

#undef public_6b3edee

#pragma init_seg(compiler)
extern "C" void const* const public_6b3edee = __AsmFindLabelExport(&internal_6b3ede0, 0x6b3edee);
