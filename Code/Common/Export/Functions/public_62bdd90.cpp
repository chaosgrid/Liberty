#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bdda5 _public_62bdda5
#define public_62bddb9 _public_62bddb9
#define public_62bddbf _public_62bddbf
#define public_62bddf9 _public_62bddf9
#define public_62bde16 _public_62bde16
#define public_62bde28 _public_62bde28

PROC_DECLARE(0x62bdd90, internal_62bdd90, public_62bdd90);
extern "C" NAKED register_t __cdecl internal_62bdd90()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        push esi
        mov si, word ptr ss : [esp+0x24]
        je public_62bddbf
        public_62bdda5 : nop
        cmp word ptr ds : [ecx+0xC], si
        jne public_62bddb9
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x44
        jnp public_62bde28
        public_62bddb9 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_62bdda5
        public_62bddbf : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0xC], eax
        mov word ptr ss : [esp+0x10], si
        mov esi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [esi+4]
        mov edx, ecx
        mov eax, ecx
        push 0x1C
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62bddf9
        mov edi, eax
        public_62bddf9 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_62bde16
        mov ecx, 5
        lea esi, ss:[esp+0xC]
        rep movsd
        public_62bde16 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        pop edi
        inc eax
        mov dword ptr ds : [ebx+0x30], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 0xC
        public_62bde28 : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x62bdd90)
    }
}

#undef public_62bdda5
#undef public_62bddb9
#undef public_62bddbf
#undef public_62bddf9
#undef public_62bde16
#undef public_62bde28
