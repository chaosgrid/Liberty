#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47259);
CLANG_FORWARD_PROC_SYMBOL(public_6d47406);
CLANG_FORWARD_PROC_SYMBOL(public_6d47533);
CLANG_FORWARD_PROC_SYMBOL(public_6d47554);

PROC_DECLARE(0x6d47554, internal_6d47554, public_6d47554);
extern "C" NAKED register_t __cdecl internal_6d47554()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x1C
        push 1
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x17C], eax
        and byte ptr ds : [eax+8], 0
        add esp, 0xC
        mov dword ptr ds : [eax], offset _public_6d47406
        mov dword ptr ds : [eax+4], offset _public_6d47533
        call public_6d47259
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d47554)
    }
}
