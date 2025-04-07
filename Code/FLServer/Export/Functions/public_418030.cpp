#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418090);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

PROC_DECLARE(0x418030, internal_418030, public_418030);
extern "C" NAKED register_t __cdecl internal_418030()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_418996
        mov eax, dword ptr ds : [esi+0x80]
        mov edi, dword ptr ds : [public_41bbe8]
        push 0x10000
        push 0
        push 0x445
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x80]
        push 0x200
        push 0
        push 0x435
        push ecx
        call edi
        call public_40cdc0
        mov edx, dword ptr ds : [public_41bb98]
        mov dword ptr ds : [edx], offset _public_418090
        call public_40ce70
        pop edi
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x418030)
    }
}
