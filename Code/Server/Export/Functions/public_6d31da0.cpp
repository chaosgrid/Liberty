#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31da0);

PROC_DECLARE(0x6d31da0, internal_6d31da0, public_6d31da0);
extern "C" NAKED register_t __cdecl internal_6d31da0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6d68d00
        mov dword ptr ds : [eax+4], 0
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax+8], dx
        mov dword ptr ds : [eax], offset public_6d694ac
        ret 4
        UNREACHABLE_TRAP(0x6d31da0)
    }
}
