#include "Content-PCH.h"


#define public_6ec481a _public_6ec481a

PROC_DECLARE(0x6ec47e0, internal_6ec47e0, public_6ec47e0);
extern "C" NAKED register_t __cdecl internal_6ec47e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec481a
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [esi+0x10], eax
        public_6ec481a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec47e0)
    }
}

#undef public_6ec481a
