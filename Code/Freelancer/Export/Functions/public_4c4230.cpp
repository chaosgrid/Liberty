#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4230);

PROC_DECLARE(0x4c4230, internal_4c4230, public_4c4230);
extern "C" NAKED register_t __cdecl internal_4c4230()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [public_5c6210]
        mov edx, dword ptr ds : [edx]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call dword ptr ds : [eax+0x78]
        ret 
        UNREACHABLE_TRAP(0x4c4230)
    }
}
