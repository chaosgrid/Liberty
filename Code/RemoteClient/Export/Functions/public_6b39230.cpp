#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d08);

PROC_DECLARE(0x6b39230, internal_6b39230, public_6b39230);
extern "C" NAKED register_t __cdecl internal_6b39230()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b69d08
        mov dword ptr ds : [esi], offset public_6b6bd80
        mov dword ptr ds : [esi+0x68], 0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b39230)
    }
}
