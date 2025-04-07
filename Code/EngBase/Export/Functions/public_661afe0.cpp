#include "EngBase-PCH.h"


#define public_661b013 _public_661b013
#define public_661b032 _public_661b032
#define public_661b05b _public_661b05b
#define public_661b062 _public_661b062

PROC_DECLARE(0x661afe0, internal_661afe0, public_661afe0);
extern "C" NAKED register_t __cdecl internal_661afe0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_662920c]
        push ebx
        push esi
        mov esi, ecx
        mov bl, 1
        fnstsw ax
        test ah, 0x44
        jp public_661b013
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1C], eax
        mov al, bl
        pop esi
        pop ebx
        ret 4
        public_661b013 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 0x44
        jp public_661b032
        mov dword ptr ds : [esi+0x1C], 0
        mov al, bl
        pop esi
        pop ebx
        ret 4
        public_661b032 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_66294e8]
        fnstsw ax
        test ah, 0x44
        jnp public_661b062
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 5
        jp public_661b05b
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_661b05b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1C], ecx
        public_661b062 : nop
        mov al, bl
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x661afe0)
    }
}

#undef public_661b013
#undef public_661b032
#undef public_661b05b
#undef public_661b062
