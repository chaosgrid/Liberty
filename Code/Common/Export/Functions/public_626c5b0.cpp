#include "Common-PCH.h"

PROC_DECLARE(0x626c5b0, internal_626c5b0, public_626c5b0);
extern "C" NAKED register_t __cdecl internal_626c5b0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp ax, word ptr ds : [edx]
        setne cl
        mov al, cl
        ret 4
        UNREACHABLE_TRAP(0x626c5b0)
    }
}
