#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c970);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d0c993 _public_6d0c993
#define public_6d0c9a0 _public_6d0c9a0
#define public_6d0c9a2 _public_6d0c9a2
#define public_6d0c9bf _public_6d0c9bf
#define public_6d0c9c1 _public_6d0c9c1
#define public_6d0c9ec _public_6d0c9ec
#define public_6d0c9ee _public_6d0c9ee
#define public_6d0ca48 _public_6d0ca48
#define public_6d0ca96 _public_6d0ca96
#define public_6d0caca _public_6d0caca
#define public_6d0caeb _public_6d0caeb
#define public_6d0caed _public_6d0caed
#define public_6d0cb24 _public_6d0cb24
#define public_6d0cb26 _public_6d0cb26
#define public_6d0cb35 _public_6d0cb35
#define public_6d0cb51 _public_6d0cb51
#define public_6d0cb53 _public_6d0cb53
#define public_6d0cb8e _public_6d0cb8e
#define public_6d0cba2 _public_6d0cba2
#define public_6d0cbbf _public_6d0cbbf
#define public_6d0cbe9 _public_6d0cbe9

PROC_DECLARE(0x6d0c970, internal_6d0c970, public_6d0c970);
extern "C" NAKED register_t __cdecl internal_6d0c970()
{
    __asm
    {
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [ebp+0x90]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+8], ecx
        jne public_6d0cbe9
        mov edi, dword ptr ss : [esp+0x38]
        push ebx
        push esi
        xor ebx, ebx
        public_6d0c993 : nop
        test ebx, ebx
        jne public_6d0c9a0
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+0x38]
        jmp public_6d0c9a2
        public_6d0c9a0 : nop
        mov ebx, dword ptr ds : [ebx]
        public_6d0c9a2 : nop
        test ebx, ebx
        je public_6d0ca48
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d0c9bf
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0c9c1
        public_6d0c9bf : nop
        xor eax, eax
        public_6d0c9c1 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6d0c993
        test ecx, ecx
        je public_6d0c9ec
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_6d0c9ec
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d0c9ec
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_6d0c9ee
        public_6d0c9ec : nop
        xor ecx, ecx
        public_6d0c9ee : nop
        call dword ptr ds : [public_6d6422c]
        mov esi, eax
        test esi, esi
        je public_6d0c993
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x14]
        lea edx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 3
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [eax]
        jmp public_6d0c993
        public_6d0ca48 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x20]
        push eax
        push 0x11
        call public_6d43650
        mov eax, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_6d0caca
        public_6d0ca96 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x48], eax
        call public_6cf6e60
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0xC]
        jne public_6d0ca96
        public_6d0caca : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp+0x90], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        pop esi
        pop ebx
        je public_6d0caeb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0caed
        public_6d0caeb : nop
        xor eax, eax
        public_6d0caed : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6d0cba2
        call dword ptr ds : [public_6d641c0]
        test al, al
        lea eax, ss:[ebp+0xC]
        je public_6d0cb35
        test eax, eax
        je public_6d0cb24
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0cb24
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6d0cb26
        public_6d0cb24 : nop
        xor eax, eax
        public_6d0cb26 : nop
        pop edi
        mov byte ptr ds : [eax+0x214], 0
        pop ebp
        add esp, 0x28
        ret 8
        public_6d0cb35 : nop
        test eax, eax
        je public_6d0cb51
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0cb51
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d0cb53
        public_6d0cb51 : nop
        xor eax, eax
        public_6d0cb53 : nop
        push 0
        mov ecx, eax
        call dword ptr ds : [public_6d645a0]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x154]
        test al, 0x40
        jne public_6d0cb8e
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x154]
        test ah, 8
        jne public_6d0cb8e
        mov ecx, dword ptr ds : [public_6d67cc4]
        pop edi
        mov dword ptr ss : [ebp+0x94], ecx
        pop ebp
        add esp, 0x28
        ret 8
        public_6d0cb8e : nop
        mov edx, dword ptr ds : [public_6d67cc0]
        pop edi
        mov dword ptr ss : [ebp+0x94], edx
        pop ebp
        add esp, 0x28
        ret 8
        public_6d0cba2 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x154]
        test al, 0x40
        jne public_6d0cbbf
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x154]
        test ah, 8
        je public_6d0cbe9
        public_6d0cbbf : nop
        mov al, 1
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x10], al
        mov eax, dword ptr ss : [ebp]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0x194]
        public_6d0cbe9 : nop
        pop edi
        pop ebp
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6d0c970)
    }
}

#undef public_6d0c993
#undef public_6d0c9a0
#undef public_6d0c9a2
#undef public_6d0c9bf
#undef public_6d0c9c1
#undef public_6d0c9ec
#undef public_6d0c9ee
#undef public_6d0ca48
#undef public_6d0ca96
#undef public_6d0caca
#undef public_6d0caeb
#undef public_6d0caed
#undef public_6d0cb24
#undef public_6d0cb26
#undef public_6d0cb35
#undef public_6d0cb51
#undef public_6d0cb53
#undef public_6d0cb8e
#undef public_6d0cba2
#undef public_6d0cbbf
#undef public_6d0cbe9
