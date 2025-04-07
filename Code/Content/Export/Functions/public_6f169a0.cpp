#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f169a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f620);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f743e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad92c);

#define public_6f16a87 _public_6f16a87
#define public_6f16abf _public_6f16abf
#define public_6f16ac1 _public_6f16ac1
#define public_6f16b5b _public_6f16b5b
#define public_6f16c14 _public_6f16c14
#define public_6f16c28 _public_6f16c28
#define public_6f16cce _public_6f16cce
#define public_6f16d05 _public_6f16d05
#define public_6f16d25 _public_6f16d25
#define public_6f16d90 _public_6f16d90
#define public_6f16dc2 _public_6f16dc2
#define public_6f16deb _public_6f16deb
#define public_6f16e00 _public_6f16e00
#define public_6f16e0f _public_6f16e0f
#define public_6f16e15 _public_6f16e15
#define public_6f16e35 _public_6f16e35
#define public_6f16e39 _public_6f16e39
#define public_6f16e3e _public_6f16e3e
#define public_6f16e60 _public_6f16e60
#define public_6f16e6e _public_6f16e6e
#define public_6f16e80 _public_6f16e80
#define public_6f16e8f _public_6f16e8f
#define public_6f16e95 _public_6f16e95
#define public_6f16eb5 _public_6f16eb5
#define public_6f16eb9 _public_6f16eb9
#define public_6f16ebe _public_6f16ebe
#define public_6f16ee2 _public_6f16ee2
#define public_6f16ef0 _public_6f16ef0
#define public_6f16f00 _public_6f16f00
#define public_6f16f0f _public_6f16f0f
#define public_6f16f12 _public_6f16f12
#define public_6f16f32 _public_6f16f32
#define public_6f16f36 _public_6f16f36
#define public_6f16f3b _public_6f16f3b
#define public_6f16f3f _public_6f16f3f
#define public_6f16f4e _public_6f16f4e
#define public_6f16f68 _public_6f16f68
#define public_6f16f79 _public_6f16f79
#define public_6f16f7b _public_6f16f7b

PROC_DECLARE(0x6f169a0, internal_6f169a0, public_6f169a0);
extern "C" NAKED register_t __cdecl internal_6f169a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad92c @0x6f169a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad92c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x514
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push edi
        push eax
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x54], eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f16f79
        mov ecx, dword ptr ds : [esi+8]
        call public_6f478c0
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f16f79
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        call public_6eac5b0
        or eax, 0xFFFFFFFF
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xD4], eax
        mov dword ptr ss : [esp+0xD8], ebx
        mov dword ptr ss : [esp+0xDC], ebx
        mov byte ptr ss : [esp+0xE0], 1
        mov dword ptr ss : [esp+0xE4], eax
        mov dword ptr ss : [esp+0x128], ebx
        mov dword ptr ss : [esp+0x12C], ebx
        mov byte ptr ss : [esp+0xE8], bl
        call public_6efc7a0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f478c0
        mov ebp, dword ptr ss : [esp+0x534]
        mov edi, eax
        lea eax, ss:[ebp+0x3EC]
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x4C], edi
        sub ecx, eax
        public_6f16a87 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx+eax], dl
        inc eax
        cmp dl, bl
        jne public_6f16a87
        lea eax, ss:[esp+0xE8]
        push eax
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+0x44C]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], edx
        je public_6f16abf
        mov eax, dword ptr ds : [edi+0x48]
        jmp public_6f16ac1
        public_6f16abf : nop
        xor eax, eax
        public_6f16ac1 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x68], eax
        lea ecx, ss:[ebp+0x440]
        mov eax, ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        je public_6f16b5b
        fld dword ptr ss : [ebp+0x3E4]
        lea esi, ss:[ebp+0x3E4]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f16b5b
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x48]
        lea edx, ss:[esp+0x13]
        push edx
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov byte ptr ss : [esp+0x23], 1
        call dword ptr ds : [public_6fb3488]
        mov al, byte ptr ss : [esp+0x23]
        add esp, 0x10
        cmp al, bl
        jne public_6f16b5b
        mov eax, dword ptr ds : [edi+0x48]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        mov dword ptr ss : [esp+0x2C], eax
        push esi
        lea eax, ss:[ebp+0x41C]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov dword ptr ss : [esp+0x2C], 3
        call dword ptr ds : [public_6fb3484]
        add esp, 0x18
        public_6f16b5b : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [ebp+0x454]
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [ebp+0x458]
        lea esi, ss:[ebp+0x41C]
        mov ecx, 9
        lea edi, ss:[esp+0x78]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x460]
        lea esi, ss:[ebp+0x478]
        mov dword ptr ss : [esp+0x9C], eax
        mov al, byte ptr ss : [ebp+0x4C4]
        mov dword ptr ss : [esp+0xDC], ecx
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0xE0], al
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xD4], edx
        mov edx, dword ptr ss : [ebp+0x464]
        mov dword ptr ss : [esp+0xA0], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xA8], eax
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0xD8], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xAC], ecx
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0xA4], edx
        mov dword ptr ss : [esp+0xD0], eax
        jle public_6f16c28
        mov edx, esi
        lea edi, ss:[esp+0xA0]
        lea eax, ss:[esp+0xB0]
        sub edx, edi
        public_6f16c14 : nop
        mov edi, dword ptr ds : [edx+eax]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0xD0]
        inc ecx
        add eax, 4
        cmp ecx, edi
        jl public_6f16c14
        public_6f16c28 : nop
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[ebp+0x4AC]
        push eax
        lea ecx, ss:[esp+0xDC]
        push ecx
        mov dword ptr ss : [esp+0x538], ebx
        call dword ptr ds : [public_6fb34d8]
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x52C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        lea edi, ss:[ebp+0x45C]
        lea edx, ss:[esp+0xD4]
        push edi
        push edx
        call dword ptr ds : [public_6fb3434]
        mov eax, dword ptr ds : [esi]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6f16cce
        test dword ptr ss : [ebp+0x464], 0x3FFFFFFF
        jne public_6f16d25
        public_6f16cce : nop
        push edi
        call public_6f50650
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_6f16d25
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f4f7c0
        test dword ptr ds : [esi], 0x3FFFFFFF
        jne public_6f16d05
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0xA0]
        push ecx
        push edx
        mov ecx, edi
        call public_6f4f430
        public_6f16d05 : nop
        test dword ptr ss : [ebp+0x464], 0x3FFFFFFF
        jne public_6f16d25
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0xD8]
        push eax
        push ecx
        mov ecx, edi
        call public_6f4f620
        public_6f16d25 : nop
        lea edx, ss:[esp+0x60]
        push edx
        push ebp
        call dword ptr ds : [public_6fb34d4]
        add esp, 8
        cmp eax, ebx
        jne public_6f16f79
        lea ecx, ss:[esp+0x130]
        call dword ptr ds : [public_6fb3098]
        push ebx
/*FIXUP push offset public_6fb8ad8 @0x6f16d4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8ad8
        call dword ptr ds : [public_6fb30b4]
        mov dword ptr ss : [esp+0x144], eax
        mov al, byte ptr ss : [ebp+0x3E0]
        add esp, 8
        cmp al, bl
        mov dword ptr ss : [esp+0x144], ebx
        mov dword ptr ss : [esp+0x140], ebx
        je public_6f16d90
        lea esi, ss:[ebp+8]
        mov ecx, 0xF6
        lea edi, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x148], 1
        rep movsd
        public_6f16d90 : nop
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x130]
        push eax
        push ecx
        call dword ptr ds : [public_6fb363c]
        mov eax, dword ptr ss : [ebp+0x470]
        mov dword ptr ss : [ebp+4], 1
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_6f16deb
        mov edx, dword ptr ss : [esp+0x1C]
        lea edi, ds:[edx+0xEC]
        public_6f16dc2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, edi
        call public_6f003e0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x470]
        jne public_6f16dc2
        public_6f16deb : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x150]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f16e6e
        nop 
        lea esp, ss:[esp]
        public_6f16e00 : nop
        lea esi, ds:[edi+0xC]
        cmp esi, ebx
        jne public_6f16e0f
        mov eax, dword ptr ss : [ebp+0x3E8]
        jmp public_6f16e3e
        public_6f16e0f : nop
        lea eax, ss:[ebp+0x3EC]
        public_6f16e15 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f16e39
        cmp cl, bl
        je public_6f16e35
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f16e39
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6f16e15
        public_6f16e35 : nop
        xor eax, eax
        jmp public_6f16e3e
        public_6f16e39 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f16e3e : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        je public_6f16e60
        mov eax, dword ptr ds : [edi+0x3C]
        mov edx, dword ptr ss : [ebp]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x40]
        push eax
        push ecx
        push 1
        push edx
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6f16e60 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ecx+0x150]
        jne public_6f16e00
        public_6f16e6e : nop
        mov eax, dword ptr ds : [ecx+0x15C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f16ef0
        mov edi, edi
        public_6f16e80 : nop
        lea esi, ds:[edi+0xC]
        cmp esi, ebx
        jne public_6f16e8f
        mov eax, dword ptr ss : [ebp+0x3E8]
        jmp public_6f16ebe
        public_6f16e8f : nop
        lea eax, ss:[ebp+0x3EC]
        public_6f16e95 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f16eb9
        cmp cl, bl
        je public_6f16eb5
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f16eb9
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6f16e95
        public_6f16eb5 : nop
        xor eax, eax
        jmp public_6f16ebe
        public_6f16eb9 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f16ebe : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        je public_6f16ee2
        lea eax, ss:[esp+0x54]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x5C], 2
        mov byte ptr ss : [esp+0x60], bl
        call dword ptr ds : [public_6fb33c0]
        add esp, 8
        public_6f16ee2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ecx+0x15C]
        jne public_6f16e80
        public_6f16ef0 : nop
        mov ecx, dword ptr ds : [ecx+0x144]
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6f16f68
        public_6f16f00 : nop
        lea esi, ss:[ebp+0x3EC]
        cmp esi, ebx
        jne public_6f16f0f
        mov eax, dword ptr ds : [edi+8]
        jmp public_6f16f3f
        public_6f16f0f : nop
        lea eax, ds:[edi+0xC]
        public_6f16f12 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f16f36
        cmp cl, bl
        je public_6f16f32
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f16f36
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6f16f12
        public_6f16f32 : nop
        xor eax, eax
        jmp public_6f16f3b
        public_6f16f36 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f16f3b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6f16f3f : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        jne public_6f16f4e
        mov edi, dword ptr ds : [edi]
        cmp edi, ecx
        jne public_6f16f00
        public_6f16f4e : nop
        cmp edi, ecx
        je public_6f16f68
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        push 1
        push eax
        push edx
        call dword ptr ds : [public_6fb34cc]
        add esp, 0xC
        public_6f16f68 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x4C]
        push eax
        call public_6f743e0
        mov al, 1
        jmp public_6f16f7b
        public_6f16f79 : nop
        xor al, al
        public_6f16f7b : nop
        mov ecx, dword ptr ss : [esp+0x524]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x520
        ret 4
        UNREACHABLE_TRAP(0x6f169a0)
    }
}

#undef public_6f16a87
#undef public_6f16abf
#undef public_6f16ac1
#undef public_6f16b5b
#undef public_6f16c14
#undef public_6f16c28
#undef public_6f16cce
#undef public_6f16d05
#undef public_6f16d25
#undef public_6f16d90
#undef public_6f16dc2
#undef public_6f16deb
#undef public_6f16e00
#undef public_6f16e0f
#undef public_6f16e15
#undef public_6f16e35
#undef public_6f16e39
#undef public_6f16e3e
#undef public_6f16e60
#undef public_6f16e6e
#undef public_6f16e80
#undef public_6f16e8f
#undef public_6f16e95
#undef public_6f16eb5
#undef public_6f16eb9
#undef public_6f16ebe
#undef public_6f16ee2
#undef public_6f16ef0
#undef public_6f16f00
#undef public_6f16f0f
#undef public_6f16f12
#undef public_6f16f32
#undef public_6f16f36
#undef public_6f16f3b
#undef public_6f16f3f
#undef public_6f16f4e
#undef public_6f16f68
#undef public_6f16f79
#undef public_6f16f7b
