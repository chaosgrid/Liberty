#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f22d30);

PROC_DECLARE(0x6f22d30, internal_6f22d30, public_6f22d30);
extern "C" NAKED register_t __cdecl internal_6f22d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6f21b60
        mov dword ptr ds : [esi], offset public_6f5a1d8
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f22d30)
    }
}
