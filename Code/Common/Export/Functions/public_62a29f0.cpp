#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a29f0);
CLANG_FORWARD_PROC_SYMBOL(public_62af2e0);

PROC_DECLARE(0x62a29f0, internal_62a29f0, public_62a29f0);
extern "C" NAKED register_t __cdecl internal_62a29f0()
{
    __asm
    {
        push esi
        push 0x4001
        mov esi, ecx
        call public_62af2e0
        mov dword ptr ds : [esi], offset public_639dc3c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62a29f0)
    }
}
