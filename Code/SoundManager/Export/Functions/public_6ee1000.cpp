#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1000);

PROC_DECLARE(0x6ee1000, internal_6ee1000, public_6ee1000);
extern "C" NAKED register_t __cdecl internal_6ee1000()
{
    __asm
    {
        mov edx, ecx
        push esi
        push edi
        lea esi, ds:[edx+4]
        xor eax, eax
        mov edi, esi
        mov ecx, 9
        mov dword ptr ds : [edx], 0
        rep stosd
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [esi], 0x24
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [edx+8], 0x10
        mov dword ptr ds : [edx+0xC], 4
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee1000)
    }
}
