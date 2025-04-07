#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1fc0, internal_6ee1fc0, public_6ee1fc0);
extern "C" NAKED register_t __cdecl internal_6ee1fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        movzx edx, word ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x98], edx
        movzx edx, word ptr ds : [eax]
        mov dword ptr ds : [ecx+0x9C], edx
        movzx eax, word ptr ds : [eax+6]
        shl eax, 3
        mov dword ptr ds : [ecx+0xA0], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee1fc0)
    }
}
