#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5339e0);

#define public_533a10 _public_533a10
#define public_533a42 _public_533a42
#define public_533a44 _public_533a44
#define public_533a55 _public_533a55
#define public_533a83 _public_533a83
#define public_533a85 _public_533a85
#define public_533a93 _public_533a93
#define public_533ac8 _public_533ac8
#define public_533aca _public_533aca
#define public_533af9 _public_533af9
#define public_533b22 _public_533b22
#define public_533b2d _public_533b2d
#define public_533b4e _public_533b4e
#define public_533b50 _public_533b50
#define public_533b63 _public_533b63
#define public_533b70 _public_533b70
#define public_533b93 _public_533b93
#define public_533b95 _public_533b95
#define public_533bc7 _public_533bc7
#define public_533bc9 _public_533bc9

PROC_DECLARE(0x5339e0, internal_5339e0, public_5339e0);
extern "C" NAKED register_t __cdecl internal_5339e0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_533b70
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+8], eax
        je public_533b70
        push ebx
        mov ebx, dword ptr ds : [public_5c6574]
        nop 
        public_533a10 : nop
        mov ax, word ptr ds : [esi+8]
        mov ecx, dword ptr ds : [public_5c65ac]
        cmp ax, word ptr ds : [ecx]
        jne public_533a55
        test edi, edi
        je public_533a42
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533a42
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_533a42
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_533a44
        public_533a42 : nop
        xor ecx, ecx
        public_533a44 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x98]
        jmp public_533b63
        public_533a55 : nop
        mov ecx, dword ptr ds : [public_5c6958]
        cmp ax, word ptr ds : [ecx]
        jne public_533a93
        test edi, edi
        je public_533a83
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533a83
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533a83
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_533a85
        public_533a83 : nop
        xor eax, eax
        public_533a85 : nop
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ds : [eax+0x198]
        jmp public_533b63
        public_533a93 : nop
        push eax
        call dword ptr ds : [public_5c6954]
        add esp, 4
        test al, al
        je public_533b2d
        test edi, edi
        je public_533ac8
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533ac8
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533ac8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533aca
        public_533ac8 : nop
        xor eax, eax
        public_533aca : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        lea ecx, ds:[eax+0xE4]
        push edx
        call ebx
        mov ecx, eax
        test ecx, ecx
        je public_533b63
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+0x10], 0x13
        jne public_533af9
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call dword ptr ds : [public_5c6950]
        jmp public_533b63
        public_533af9 : nop
        cmp dword ptr ds : [ecx+0x14], 0x10000
        jne public_533b22
        cmp dword ptr ds : [ecx+0x28], 1
        jbe public_533b22
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_533b22
        push 1
        call dword ptr ds : [public_5c694c]
        jmp public_533b63
        public_533b22 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x40]
        jmp public_533b63
        public_533b2d : nop
        test edi, edi
        je public_533b4e
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533b4e
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_533b4e
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_533b50
        public_533b4e : nop
        xor ecx, ecx
        public_533b50 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        call dword ptr ds : [edx+0xE8]
        public_533b63 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0xC]
        jne public_533a10
        pop ebx
        public_533b70 : nop
        test edi, edi
        je public_533b93
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533b93
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_533b93
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_533b95
        public_533b93 : nop
        xor ecx, ecx
        public_533b95 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        call dword ptr ds : [eax+0xFC]
        test edi, edi
        je public_533bc7
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_533bc7
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533bc7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533bc9
        public_533bc7 : nop
        xor eax, eax
        public_533bc9 : nop
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6948]
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5339e0)
    }
}

#undef public_533a10
#undef public_533a42
#undef public_533a44
#undef public_533a55
#undef public_533a83
#undef public_533a85
#undef public_533a93
#undef public_533ac8
#undef public_533aca
#undef public_533af9
#undef public_533b22
#undef public_533b2d
#undef public_533b4e
#undef public_533b50
#undef public_533b63
#undef public_533b70
#undef public_533b93
#undef public_533b95
#undef public_533bc7
#undef public_533bc9
