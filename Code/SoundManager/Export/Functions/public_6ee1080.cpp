#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1080);
CLANG_FORWARD_PROC_SYMBOL(public_6ee10a0);

PROC_DECLARE(0x6ee1080, internal_6ee1080, public_6ee1080);
extern "C" NAKED register_t __cdecl internal_6ee1080()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6ee10a0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee1080)
    }
}
