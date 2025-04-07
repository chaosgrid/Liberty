#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);

PROC_DECLARE(0x6d317a0, internal_6d317a0, public_6d317a0);
extern "C" NAKED register_t __cdecl internal_6d317a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov word ptr ds : [eax], dx
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax+2], dx
        ret 8
        UNREACHABLE_TRAP(0x6d317a0)
    }
}
