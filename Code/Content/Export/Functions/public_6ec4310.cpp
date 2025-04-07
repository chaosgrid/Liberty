#include "Content-PCH.h"

PROC_DECLARE(0x6ec4310, internal_6ec4310, public_6ec4310);
extern "C" NAKED register_t __cdecl internal_6ec4310()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        push 0
        mov ecx, edi
        call ebx
        mov ebp, dword ptr ds : [public_6fb3000]
        push eax
        call ebp
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call ebx
        push eax
        call ebp
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec4310)
    }
}
