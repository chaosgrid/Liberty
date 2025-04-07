#include "Server-PCH.h"


#define public_6ce8c84 _public_6ce8c84
#define public_6ce8c9c _public_6ce8c9c
#define public_6ce8c9e _public_6ce8c9e
#define public_6ce8ccb _public_6ce8ccb

PROC_DECLARE(0x6ce8c50, internal_6ce8c50, public_6ce8c50);
extern "C" NAKED register_t __cdecl internal_6ce8c50()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push esi
        mov esi, ecx
        je public_6ce8c84
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6ce8ccb
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x1B0]
        pop esi
        ret 0xC
        public_6ce8c84 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce8c9c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8c9e
        public_6ce8c9c : nop
        xor eax, eax
        public_6ce8c9e : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f4]
        fsub dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8ccb
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x1B0]
        public_6ce8ccb : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ce8c50)
    }
}

#undef public_6ce8c84
#undef public_6ce8c9c
#undef public_6ce8c9e
#undef public_6ce8ccb
