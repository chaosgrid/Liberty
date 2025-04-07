#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdabbe _public_6bdabbe

PROC_DECLARE(0x6bdabb0, internal_6bdabb0, public_6bdabb0);
/* CHUNK of public_6bdaad0 */
extern "C" NAKED register_t __cdecl internal_6bdabb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6bdabbe
        push eax
        call public_6c09aaa
        pop ecx
        public_6bdabbe : nop
        ret 
        UNREACHABLE_TRAP(0x6bdabb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6bdabbe, public_6bdabbe)
    }
}

#undef public_6bdabbe

#pragma init_seg(compiler)
extern "C" void const* const public_6bdabbe = __AsmFindLabelExport(&internal_6bdabb0, 0x6bdabbe);
