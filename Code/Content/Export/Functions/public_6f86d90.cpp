#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86d90);

PROC_DECLARE(0x6f86d90, internal_6f86d90, public_6f86d90);
extern "C" NAKED register_t __cdecl internal_6f86d90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd3bb0]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6fb3118]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi], offset public_6fbc81c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f86d90)
    }
}
