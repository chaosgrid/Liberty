#include "Common-PCH.h"

PROC_DECLARE(0x626c590, internal_626c590, public_626c590);
extern "C" NAKED register_t __cdecl internal_626c590()
{
    __asm
    {
        mov ax, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        sub ax, word ptr ds : [ecx]
        neg ax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x626c590)
    }
}
