#include "Content-PCH.h"


#define public_6ece8b1 _public_6ece8b1
#define public_6ece8b8 _public_6ece8b8

PROC_DECLARE(0x6ece860, internal_6ece860, public_6ece860);
extern "C" NAKED register_t __cdecl internal_6ece860()
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
        jne public_6ece8b8
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], eax
        jl public_6ece8b1
        test eax, eax
        je public_6ece8b1
        cmp eax, 0xA
        jg public_6ece8b1
        pop edi
        mov byte ptr ds : [esi+0x14], 1
        pop esi
        ret 4
        public_6ece8b1 : nop
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_6ece8b8 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece860)
    }
}

#undef public_6ece8b1
#undef public_6ece8b8
