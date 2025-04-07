#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed70);

PROC_DECLARE(0x6d1ed70, internal_6d1ed70, public_6d1ed70);
extern "C" NAKED register_t __cdecl internal_6d1ed70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x22FC]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x22FC]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+4]
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1ed70)
    }
}
