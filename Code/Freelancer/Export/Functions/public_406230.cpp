#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406230);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4062ef _public_4062ef
#define public_406310 _public_406310
#define public_4063a0 _public_4063a0
#define public_4063c7 _public_4063c7
#define public_4063e5 _public_4063e5
#define public_406428 _public_406428
#define public_40646c _public_40646c
#define public_406496 _public_406496
#define public_4064b4 _public_4064b4
#define public_4064be _public_4064be
#define public_4064cf _public_4064cf
#define public_4064dd _public_4064dd
#define public_4064ea _public_4064ea
#define public_4064f8 _public_4064f8

PROC_DECLARE(0x406230, internal_406230, public_406230);
extern "C" NAKED register_t __cdecl internal_406230()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        mov ebx, dword ptr ss : [esp+0x64]
        push ebp
        push esi
        xor esi, esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        xor edi, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x20], esi
        je public_4062ef
        cmp dword ptr ss : [ebp+0xC], esi
        jne public_4062ef
        add eax, eax
        push eax
        call public_5b7e84
        add esp, 4
        push 1
        push esi
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [ebx]
        push 0x80
        push ebx
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        push 0x80
        push ebx
        call dword ptr ds : [eax+0x58]
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, eax
        shl eax, 4
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x28]
        add esi, esi
        push esi
        call public_5b7e84
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        or eax, 0xFFFFFFFF
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        mov edi, dword ptr ss : [esp+0x10]
        xor esi, esi
        public_4062ef : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x34], esi
        jbe public_4064cf
        mov edi, edi
        public_406310 : nop
        mov edx, dword ptr ds : [ebx]
        push 1
        push esi
        push ebx
        call dword ptr ds : [edx+0x24]
        test eax, eax
        jl public_4064be
        mov eax, dword ptr ds : [ebx]
        push 0x180
        push ebx
        call dword ptr ds : [eax+0x48]
        cmp eax, 0xFFFFFFF8
        je public_4064f8
        mov ecx, dword ptr ds : [ebx]
        push 0x180
        push ebx
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0x100
        push ebx
        call dword ptr ds : [edx+0x58]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0x100
        push ebx
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        push 0x80
        push ebx
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ss : [esp+0x30]
        xor ecx, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x2C], ecx
        jbe public_4064b4
        mov edi, edi
        public_4063a0 : nop
        mov al, byte ptr ss : [ebp+0x1B]
        test al, al
        jne public_4063c7
        mov edx, dword ptr ss : [esp+0x3C]
        movzx eax, word ptr ds : [edx+ecx*2]
        mov edx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edx+eax*4]
        fcomp qword ptr ds : [public_5c7720]
        fnstsw ax
        test ah, 0x41
        jnp public_4064b4
        public_4063c7 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_406496
        lea eax, ds:[ecx*4]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x28], 2
        public_4063e5 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x70]
        movzx eax, word ptr ds : [eax+edx]
        mov si, word ptr ds : [edi+eax*2]
        cmp si, 0xFFFF
        jne public_40646c
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, ecx
        inc ecx
        mov word ptr ds : [edi+eax*2], si
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_61649c]
        test eax, eax
        lea edi, ds:[edx+ecx*4]
        jne public_406428
        call public_5b73e0
        mov dword ptr ds : [public_61649c], eax
        public_406428 : nop
        mov edx, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ax, si
        shl eax, 4
        add ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ecx+eax+0xC], edx
        mov ecx, dword ptr ss : [esp+0x2C]
        public_40646c : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [ebp+0xC]
        mov word ptr ds : [edx+eax*2], si
        mov edx, dword ptr ss : [esp+0x70]
        inc eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x28]
        add edx, 2
        dec eax
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x28], eax
        jne public_4063e5
        public_406496 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x30]
        add edx, 2
        inc ecx
        shr eax, 1
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x2C], ecx
        jb public_4063a0
        public_4064b4 : nop
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [esp+0x34]
        public_4064be : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], esi
        jb public_406310
        public_4064cf : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4064dd
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], eax
        public_4064dd : nop
        test edi, edi
        je public_4064ea
        push edi
        call public_5b7e1d
        add esp, 4
        public_4064ea : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 8
        public_4064f8 : nop
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x28]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x5C
        ret 8
        UNREACHABLE_TRAP(0x406230)
    }
}

#undef public_4062ef
#undef public_406310
#undef public_4063a0
#undef public_4063c7
#undef public_4063e5
#undef public_406428
#undef public_40646c
#undef public_406496
#undef public_4064b4
#undef public_4064be
#undef public_4064cf
#undef public_4064dd
#undef public_4064ea
#undef public_4064f8
