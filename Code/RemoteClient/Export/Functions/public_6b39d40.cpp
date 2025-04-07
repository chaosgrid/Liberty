#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3afd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b330);

PROC_DECLARE(0x6b39d40, internal_6b39d40, public_6b39d40);
extern "C" NAKED register_t __cdecl internal_6b39d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6b3afd0
        mov ecx, eax
        call public_6b3b330
        ret 4
        UNREACHABLE_TRAP(0x6b39d40)
    }
}
