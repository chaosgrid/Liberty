#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed40);

PROC_DECLARE(0x6d1ed40, internal_6d1ed40, public_6d1ed40);
extern "C" NAKED register_t __cdecl internal_6d1ed40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x22FC]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x22FC]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax]
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1ed40)
    }
}
