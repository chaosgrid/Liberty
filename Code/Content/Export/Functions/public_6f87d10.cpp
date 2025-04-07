#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87d10);

PROC_DECLARE(0x6f87d10, internal_6f87d10, public_6f87d10);
extern "C" NAKED register_t __cdecl internal_6f87d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd3b78]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6fb3118]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi], offset public_6fbc884
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f87d10)
    }
}
