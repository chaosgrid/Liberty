#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62940a0);
CLANG_FORWARD_PROC_SYMBOL(public_62af2e0);

PROC_DECLARE(0x62940a0, internal_62940a0, public_62940a0);
extern "C" NAKED register_t __cdecl internal_62940a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62af2e0
        mov dword ptr ds : [esi], offset public_639c704
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62940a0)
    }
}
