#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d06ea0);

#define public_6d06ecb _public_6d06ecb

PROC_DECLARE(0x6d06ea0, internal_6d06ea0, public_6d06ea0);
extern "C" NAKED register_t __cdecl internal_6d06ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        pop esi
        jne public_6d06ecb
        mov ecx, dword ptr ds : [public_6d64658]
        mov dword ptr ds : [ecx], offset _public_6d06c30
        public_6d06ecb : nop
        ret 4
        UNREACHABLE_TRAP(0x6d06ea0)
    }
}

#undef public_6d06ecb
