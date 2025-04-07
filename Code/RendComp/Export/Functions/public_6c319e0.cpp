#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c610);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c630);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e60);

#define public_6c319f3 _public_6c319f3
#define public_6c31a02 _public_6c31a02
#define public_6c31a8f _public_6c31a8f
#define public_6c31ad4 _public_6c31ad4
#define public_6c31ade _public_6c31ade
#define public_6c31afd _public_6c31afd
#define public_6c31afe _public_6c31afe
#define public_6c31b49 _public_6c31b49
#define public_6c31b6b _public_6c31b6b
#define public_6c31b97 _public_6c31b97
#define public_6c31baf _public_6c31baf
#define public_6c31c30 _public_6c31c30
#define public_6c31c65 _public_6c31c65
#define public_6c31cdb _public_6c31cdb
#define public_6c31cf6 _public_6c31cf6

PROC_DECLARE(0x6c319e0, internal_6c319e0, public_6c319e0);
extern "C" NAKED register_t __cdecl internal_6c319e0()
{
    __asm
    {
        sub esp, 0x138
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        push esi
        push edi
        jne public_6c31a02
        public_6c319f3 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x138
        ret 0x14
        public_6c31a02 : nop
        mov eax, dword ptr ss : [esp+0x14C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        mov ecx, dword ptr ss : [esp+0x150]
        mov esi, eax
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [edx+0xA0]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x154]
        test ah, 2
        jne public_6c31baf
        mov eax, dword ptr ds : [public_6c37d50]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 7
        mov dword ptr ss : [esp+0x18], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov edi, dword ptr ss : [esp+0x158]
        je public_6c31b49
        test edi, edi
        push 0
        je public_6c31ade
        lea ecx, ss:[esp+0xEC]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d44]
        test eax, eax
        jne public_6c31a8f
        call public_6c34e60
        mov dword ptr ds : [public_6c37d44], eax
        public_6c31a8f : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        push edi
        lea ecx, ss:[esp+0xF0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0xE8]
        push edx
        lea ecx, ss:[esp+0x11C]
        call public_6c2c610
        push 0
        lea ecx, ss:[esp+0x8C]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d44]
        test eax, eax
        jne public_6c31ad4
        call public_6c34e60
        mov dword ptr ds : [public_6c37d44], eax
        public_6c31ad4 : nop
        lea edx, ss:[esp+0x118]
        push edx
        jmp public_6c31afe
        public_6c31ade : nop
        lea ecx, ss:[esp+0x8C]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d44]
        test eax, eax
        jne public_6c31afd
        call public_6c34e60
        mov dword ptr ds : [public_6c37d44], eax
        public_6c31afd : nop
        push ebp
        public_6c31afe : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x90]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x88]
        lea ecx, ss:[esp+0xB8]
        push eax
        call public_6c2c610
        mov eax, dword ptr ds : [public_6c37d50]
        lea edx, ss:[esp+0x58]
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x58]
        mov ecx, 0xC
        push edx
        rep movsd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_6c31baf
        public_6c31b49 : nop
        test edi, edi
        je public_6c31b97
        push 0
        lea ecx, ss:[esp+0x5C]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37d44]
        test eax, eax
        jne public_6c31b6b
        call public_6c34e60
        mov dword ptr ds : [public_6c37d44], eax
        public_6c31b6b : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edi
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0xBC]
        call public_6c2c610
        mov eax, dword ptr ds : [public_6c37d50]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_6c31baf
        public_6c31b97 : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [edx+0x6C]
        mov eax, dword ptr ds : [public_6c37d50]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x74]
        public_6c31baf : nop
        mov ecx, dword ptr ss : [esp+0x154]
        mov edx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edx+0x34]
        or ecx, 0x10C
        mov dword ptr ss : [esp+0x154], ecx
        mov ecx, dword ptr ss : [esp+0x150]
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x34], edx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea edx, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], esi
        movzx edx, word ptr ds : [eax+8]
        movzx esi, word ptr ds : [ecx+0xC]
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[esi+edx*2]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[eax+edx*2+0x10]
        xor edx, edx
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x40], edx
        movzx ebp, word ptr ds : [ecx+0x12]
        cmp ebp, edx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        jbe public_6c31cf6
        mov edi, edi
        public_6c31c30 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        movzx eax, word ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov edi, dword ptr ds : [ecx+0x34]
        mov ecx, dword ptr ds : [ecx+8]
        add eax, edx
        lea esi, ds:[eax+eax*2]
        lea edi, ds:[edi+esi*4+0x10]
        mov esi, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ss : [esp+0x15C]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], 0
        je public_6c31c65
        mov dword ptr ss : [esp+0x3C], esi
        mov esi, eax
        public_6c31c65 : nop
        test esi, esi
        je public_6c31cdb
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_6c319f3
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x154]
        mov ax, word ptr ds : [edi+4]
        push edx
        movzx edx, word ptr ds : [edi+8]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, dword ptr ds : [esi]
        xor edx, edx
        mov dx, word ptr ds : [edi+6]
        sub dx, ax
        movzx eax, ax
        inc edx
        movzx edx, dx
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ds : [edx+4]
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        push esi
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        call dword ptr ds : [eax+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        public_6c31cdb : nop
        movzx eax, word ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x10]
        add esi, eax
        inc edx
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edx
        jb public_6c31c30
        public_6c31cf6 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x138
        ret 0x14
        UNREACHABLE_TRAP(0x6c319e0)
    }
}

#undef public_6c319f3
#undef public_6c31a02
#undef public_6c31a8f
#undef public_6c31ad4
#undef public_6c31ade
#undef public_6c31afd
#undef public_6c31afe
#undef public_6c31b49
#undef public_6c31b6b
#undef public_6c31b97
#undef public_6c31baf
#undef public_6c31c30
#undef public_6c31c65
#undef public_6c31cdb
#undef public_6c31cf6
