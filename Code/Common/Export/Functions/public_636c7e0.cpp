#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_636c7e0);

#define public_636c7f2 _public_636c7f2

PROC_DECLARE(0x636c7e0, internal_636c7e0, public_636c7e0);
/* CHUNK of public_6289910 */
extern "C" NAKED register_t __cdecl internal_636c7e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_658b008]
        test eax, eax
        je public_636c7f2
        push eax
        call public_6343ff0
        add esp, 4
        public_636c7f2 : nop
        mov dword ptr ds : [public_658b008], 0
        ret 
        UNREACHABLE_TRAP(0x636c7e0)
        ASM_EXPORT_ENTRY_SINGLE(0x636c7f2, public_636c7f2)
    }
}

#undef public_636c7f2

#pragma init_seg(compiler)
extern "C" void const* const public_636c7f2 = __AsmFindLabelExport(&internal_636c7e0, 0x636c7f2);
