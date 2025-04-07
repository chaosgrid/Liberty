#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21c00);

PROC_DECLARE(0x6f22d00, internal_6f22d00, public_6f22d00);
extern "C" NAKED register_t __cdecl internal_6f22d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f21c00
        mov dword ptr ds : [esi], offset public_6f5a1d8
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f22d00)
    }
}
