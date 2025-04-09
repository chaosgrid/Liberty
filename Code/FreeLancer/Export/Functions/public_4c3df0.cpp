#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3df0);

PROC_DECLARE(0x4c3df0, internal_4c3df0, public_4c3df0);
extern "C" NAKED register_t __cdecl internal_4c3df0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x64]
        ret 
        UNREACHABLE_TRAP(0x4c3df0)
    }
}
