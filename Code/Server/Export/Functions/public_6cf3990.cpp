#include "Server-PCH.h"


#define public_6cf39d9 _public_6cf39d9
#define public_6cf3a0d _public_6cf3a0d
#define public_6cf3a0f _public_6cf3a0f
#define public_6cf3a2c _public_6cf3a2c
#define public_6cf3a2e _public_6cf3a2e
#define public_6cf3a3a _public_6cf3a3a
#define public_6cf3a47 _public_6cf3a47

PROC_DECLARE(0x6cf3990, internal_6cf3990, public_6cf3990);
extern "C" NAKED register_t __cdecl internal_6cf3990()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi-0x60]
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x88]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf39d9
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [public_6d64018]
        add esp, 4
        test eax, eax
        je public_6cf3a47
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cf3a47
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        ret 4
        public_6cf39d9 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call dword ptr ds : [public_6d64018]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf3a47
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cf3a47
        mov eax, dword ptr ds : [edi-0x60]
        test eax, eax
        je public_6cf3a0d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xF
        cmp cl, 0xF
        jne public_6cf3a0d
        mov ecx, eax
        jmp public_6cf3a0f
        public_6cf3a0d : nop
        xor ecx, ecx
        public_6cf3a0f : nop
        mov edx, dword ptr ds : [esi+0xB0]
        cmp edx, dword ptr ds : [ecx+0xE4]
        jne public_6cf3a3a
        test eax, eax
        je public_6cf3a2c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xF
        cmp cl, 0xF
        je public_6cf3a2e
        public_6cf3a2c : nop
        xor eax, eax
        public_6cf3a2e : nop
        mov ecx, eax
        call dword ptr ds : [public_6d64458]
        test al, al
        jne public_6cf3a47
        public_6cf3a3a : nop
        mov byte ptr ds : [edi+0x24], 1
        mov edx, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [edi+0x28], edx
        public_6cf3a47 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf3990)
    }
}

#undef public_6cf39d9
#undef public_6cf3a0d
#undef public_6cf3a0f
#undef public_6cf3a2c
#undef public_6cf3a2e
#undef public_6cf3a3a
#undef public_6cf3a47
