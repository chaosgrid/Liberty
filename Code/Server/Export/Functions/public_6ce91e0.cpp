#include "Server-PCH.h"


#define public_6ce9201 _public_6ce9201
#define public_6ce9219 _public_6ce9219
#define public_6ce921b _public_6ce921b
#define public_6ce923f _public_6ce923f

PROC_DECLARE(0x6ce91e0, internal_6ce91e0, public_6ce91e0);
extern "C" NAKED register_t __cdecl internal_6ce91e0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x100
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6d64204]
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [public_6d64200]
        public_6ce9201 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce9219
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce921b
        public_6ce9219 : nop
        xor eax, eax
        public_6ce921b : nop
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[eax+0xE4]
        call ebx
        test eax, eax
        je public_6ce923f
        mov edx, dword ptr ds : [esi]
        push edi
        push 0xBF800000
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x214]
        jmp public_6ce9201
        public_6ce923f : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ce91e0)
    }
}

#undef public_6ce9201
#undef public_6ce9219
#undef public_6ce921b
#undef public_6ce923f
