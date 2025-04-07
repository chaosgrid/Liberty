#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1ff0, internal_6ee1ff0, public_6ee1ff0);
extern "C" NAKED register_t __cdecl internal_6ee1ff0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ax, word ptr ds : [ecx+0x98]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+4], ax
        mov dx, word ptr ds : [ecx+0x9C]
        mov word ptr ds : [esi], dx
        mov eax, dword ptr ds : [ecx+0xA0]
        shr eax, 3
        mov word ptr ds : [esi+6], ax
        movzx eax, ax
        xor edx, edx
        div dword ptr ds : [ecx+0x9C]
        mov word ptr ds : [esi+2], ax
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee1ff0)
    }
}
