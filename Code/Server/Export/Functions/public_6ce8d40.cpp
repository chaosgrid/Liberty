#include "Server-PCH.h"


#define public_6ce8d71 _public_6ce8d71
#define public_6ce8d73 _public_6ce8d73
#define public_6ce8db9 _public_6ce8db9
#define public_6ce8dc1 _public_6ce8dc1
#define public_6ce8dfb _public_6ce8dfb

PROC_DECLARE(0x6ce8d40, internal_6ce8d40, public_6ce8d40);
extern "C" NAKED register_t __cdecl internal_6ce8d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        push 0
        push eax
        mov edi, ecx
        call dword ptr ds : [public_6d64250]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 8
        test eax, eax
        je public_6ce8d71
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8d73
        public_6ce8d71 : nop
        xor eax, eax
        public_6ce8d73 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[eax+0x144]
        call dword ptr ds : [public_6d6424c]
        mov esi, eax
        test esi, esi
        je public_6ce8dfb
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        mov bl, 1
        je public_6ce8dc1
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test bl, ah
        jne public_6ce8db9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x218]
        public_6ce8db9 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x10
        public_6ce8dc1 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64210]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8db9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x218]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x10
        public_6ce8dfb : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ce8d40)
    }
}

#undef public_6ce8d71
#undef public_6ce8d73
#undef public_6ce8db9
#undef public_6ce8dc1
#undef public_6ce8dfb
