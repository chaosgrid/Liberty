#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4200);

PROC_DECLARE(0x4c4200, internal_4c4200, public_4c4200);
extern "C" NAKED register_t __cdecl internal_4c4200()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push 1
        push edx
        mov edx, dword ptr ds : [public_5c6210]
        mov edx, dword ptr ds : [edx]
        push 1
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call dword ptr ds : [eax+0x78]
        ret 
        UNREACHABLE_TRAP(0x4c4200)
    }
}
