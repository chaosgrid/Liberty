#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f3d0, internal_6d8f3d0, public_6d8f3d0);
extern "C" NAKED register_t __cdecl internal_6d8f3d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x40]
        mov byte ptr ds : [public_6dbbd19], 0
        ret 8
        UNREACHABLE_TRAP(0x6d8f3d0)
    }
}
