#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_41901a);

PROC_DECLARE(0x40dd00, internal_40dd00, public_40dd00);
extern "C" NAKED register_t __cdecl internal_40dd00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41901a
        mov dword ptr ds : [esi+0x184], 0
        mov dword ptr ds : [esi], offset public_41d550
        mov eax, dword ptr ds : [public_427870]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov eax, dword ptr ds : [public_41b0a8]
        mov dword ptr ds : [public_427c9c], esi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_427c98], ecx
        mov dword ptr ds : [eax], offset _public_40e160
        mov edx, dword ptr ds : [public_427870]
        push edx
        call dword ptr ds : [public_41b1a4]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40dd00)
    }
}
