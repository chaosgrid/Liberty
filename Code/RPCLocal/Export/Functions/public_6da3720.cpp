#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2980);
CLANG_FORWARD_PROC_SYMBOL(public_6da3720);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6da3747 _public_6da3747
#define public_6da375a _public_6da375a
#define public_6da378a _public_6da378a
#define public_6da379d _public_6da379d
#define public_6da37bd _public_6da37bd
#define public_6da37d0 _public_6da37d0
#define public_6da37f2 _public_6da37f2
#define public_6da3805 _public_6da3805
#define public_6da3827 _public_6da3827
#define public_6da383a _public_6da383a
#define public_6da385c _public_6da385c
#define public_6da386f _public_6da386f
#define public_6da3893 _public_6da3893
#define public_6da38a6 _public_6da38a6
#define public_6da38c9 _public_6da38c9
#define public_6da38dc _public_6da38dc
#define public_6da3918 _public_6da3918
#define public_6da392e _public_6da392e
#define public_6da3955 _public_6da3955
#define public_6da396b _public_6da396b
#define public_6da39ef _public_6da39ef
#define public_6da3a02 _public_6da3a02
#define public_6da3a1e _public_6da3a1e
#define public_6da3a31 _public_6da3a31
#define public_6da3a51 _public_6da3a51
#define public_6da3a64 _public_6da3a64
#define public_6da3a84 _public_6da3a84
#define public_6da3a97 _public_6da3a97
#define public_6da3ade _public_6da3ade
#define public_6da3af1 _public_6da3af1
#define public_6da3b19 _public_6da3b19
#define public_6da3b2c _public_6da3b2c
#define public_6da3b3a _public_6da3b3a
#define public_6da3b67 _public_6da3b67
#define public_6da3b7a _public_6da3b7a
#define public_6da3ba0 _public_6da3ba0
#define public_6da3bb2 _public_6da3bb2
#define public_6da3bbc _public_6da3bbc
#define public_6da3bcb _public_6da3bcb
#define public_6da3bd4 _public_6da3bd4
#define public_6da3be0 _public_6da3be0
#define public_6da3bf4 _public_6da3bf4
#define public_6da3bfd _public_6da3bfd
#define public_6da3c10 _public_6da3c10
#define public_6da3c28 _public_6da3c28
#define public_6da3c58 _public_6da3c58
#define public_6da3c70 _public_6da3c70
#define public_6da3c7f _public_6da3c7f
#define public_6da3c90 _public_6da3c90
#define public_6da3c93 _public_6da3c93
#define public_6da3cbd _public_6da3cbd
#define public_6da3cd5 _public_6da3cd5
#define public_6da3cf9 _public_6da3cf9
#define public_6da3d28 _public_6da3d28
#define public_6da3d42 _public_6da3d42
#define public_6da3d51 _public_6da3d51
#define public_6da3d62 _public_6da3d62
#define public_6da3d8d _public_6da3d8d
#define public_6da3dbd _public_6da3dbd
#define public_6da3def _public_6da3def
#define public_6da3e06 _public_6da3e06
#define public_6da3e1e _public_6da3e1e
#define public_6da3e33 _public_6da3e33
#define public_6da3e3f _public_6da3e3f
#define public_6da3e54 _public_6da3e54
#define public_6da3e67 _public_6da3e67
#define public_6da3e75 _public_6da3e75
#define public_6da3e8f _public_6da3e8f
#define public_6da3e96 _public_6da3e96
#define public_6da3ea5 _public_6da3ea5
#define public_6da3eb7 _public_6da3eb7
#define public_6da3ed1 _public_6da3ed1
#define public_6da3f06 _public_6da3f06
#define public_6da3f1c _public_6da3f1c
#define public_6da3f48 _public_6da3f48
#define public_6da3f4f _public_6da3f4f
#define public_6da3f5b _public_6da3f5b
#define public_6da3f81 _public_6da3f81
#define public_6da3f93 _public_6da3f93
#define public_6da3fbc _public_6da3fbc
#define public_6da3fe3 _public_6da3fe3
#define public_6da400a _public_6da400a

PROC_DECLARE(0x6da3720, internal_6da3720, public_6da3720);
extern "C" NAKED register_t __cdecl internal_6da3720()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, 4
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ss : [ebp+0x10], edx
        mov edi, 0x16
        jbe public_6da3747
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da3747 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da375a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da375a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        push edx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6db3108]
        mov ebx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ebx
        jbe public_6da378a
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da378a : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da379d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da379d : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da37bd
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da37bd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da37d0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da37d0 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da37f2
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da37f2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3805
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3805 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3827
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da3827 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da383a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da383a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da385c
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da385c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da386f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da386f : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        mov cl, byte ptr ss : [ebp+0x40]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da3893
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da3893 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da38a6
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da38a6 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        shl eax, 2
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da38c9
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da38c9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da38dc
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da38dc : nop
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x44]
        shl eax, 2
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        add edx, eax
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x18], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3918
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3918 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da392e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da392e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3955
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3955 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da396b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da396b : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x54]
        mov esi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6d8f510
        fld dword ptr ss : [ebp+0x5C]
        fmul qword ptr ds : [public_6db3fd8]
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        call public_6db20de
        fld dword ptr ss : [ebp+0x60]
        fmul qword ptr ds : [public_6db3fd8]
        mov bl, al
        call public_6db20de
        fld dword ptr ss : [ebp+0x64]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x12], al
        call public_6db20de
        fld dword ptr ss : [ebp+0x58]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x13], al
        call public_6db20de
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6da39ef
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da39ef : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da3a02
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3a02 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3a1e
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3a1e : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da3a31
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3a31 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3a51
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3a51 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da3a64
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3a64 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3a84
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3a84 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da3a97
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3a97 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+0x24]
        inc ecx
        push eax
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6db3110]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        add esp, 4
        fdivr dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6db60f0]
        call public_6db20de
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3ade
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3ade : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6da3af1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3af1 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da3b3a
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3b19
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3b19 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3b2c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3b2c : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6da3b3a : nop
        lea ecx, ss:[ebp+0x70]
        call public_6d913e0
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6da3e3f
        mov edi, dword ptr ss : [ebp+0x10]
        mov cx, word ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp+0x14]
        add edi, 2
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3b67
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3b67 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3b7a
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3b7a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_6da3e75
        nop 
        lea esp, ss:[esp]
        public_6da3ba0 : nop
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+0xE]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x12], bl
        je public_6da3bb2
        mov bl, 1
        public_6da3bb2 : nop
        mov al, byte ptr ds : [esi+0xF]
        test al, al
        je public_6da3bbc
        or bl, 2
        public_6da3bbc : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, 0xFF
        cmp ecx, eax
        jle public_6da3bcb
        or bl, 4
        public_6da3bcb : nop
        cmp word ptr ds : [esi+0xC], ax
        jbe public_6da3bd4
        or bl, 8
        public_6da3bd4 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6da3be0
        or bl, 0x20
        jmp public_6da3bf4
        public_6da3be0 : nop
        push eax
        call public_6da2980
        add esp, 4
        test al, al
        mov byte ptr ss : [esp+0x12], al
        jne public_6da3bf4
        or bl, 0x10
        public_6da3bf4 : nop
        cmp dword ptr ds : [esi+4], 1
        jne public_6da3bfd
        or bl, 0x80
        public_6da3bfd : nop
        fld dword ptr ds : [esi+8]
        fcomp qword ptr ds : [public_6db3c58]
        fnstsw ax
        test ah, 0x44
        jp public_6da3c10
        or bl, 0x40
        public_6da3c10 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x16
        jbe public_6da3c28
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3c28 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e33
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], bl
        inc eax
        test bl, bl
        mov dword ptr ss : [ebp+0x18], eax
        js public_6da3c93
        test bl, 4
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6da3c70
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da3c58
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3c58 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e33
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        jmp public_6da3c90
        public_6da3c70 : nop
        mov cl, byte ptr ds : [esi+4]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da3c7f
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3c7f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e33
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6da3c90 : nop
        mov dword ptr ss : [ebp+0x18], eax
        public_6da3c93 : nop
        test bl, 0x40
        jne public_6da3cd5
        fld dword ptr ds : [esi+8]
        fmul qword ptr ds : [public_6db60f0]
        call public_6db20de
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3cbd
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3cbd : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3e96
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        public_6da3cd5 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [public_6db3108]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, 0x16
        jbe public_6da3cf9
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3cf9 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3e33
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        test bl, 8
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6da3d42
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da3d28
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3d28 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e33
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [esi+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6da3d62
        public_6da3d42 : nop
        mov cl, byte ptr ds : [esi+0xC]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da3d51
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da3d51 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e33
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6da3d62 : nop
        test bl, 0x20
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6da3e1e
        test bl, 0x10
        je public_6da3def
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+0x10]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3d8d
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3d8d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e96
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movzx edx, word ptr ds : [esi+0x10]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3dbd
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3dbd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e96
        movzx eax, word ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        add edx, eax
        mov dword ptr ss : [ebp+0x18], edx
        jmp public_6da3e1e
        public_6da3def : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3e06
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3e06 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e96
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        public_6da3e1e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], edi
        jne public_6da3ba0
        jmp public_6da3e75
        public_6da3e33 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3e3f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da3e54
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3e54 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3e67
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3e67 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [eax], 0
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6da3e75 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ss : [ebp+0x7C]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da3e8f
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3e8f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3ea5
        public_6da3e96 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3ea5 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        mov ebx, dword ptr ss : [ebp+0x78]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6da3f1c
        public_6da3eb7 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3ed1
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3ed1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da3e96
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fld dword ptr ds : [esi+0xC]
        fmul qword ptr ds : [public_6db60f0]
        call public_6db20de
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da3f06
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6da3f06 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3e96
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6da3eb7
        public_6da3f1c : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da400a
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, 4
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6da3f48
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3f48 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da3f5b
        public_6da3f4f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da3f5b : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6da400a
        mov edi, 2
        public_6da3f81 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edi
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6da3f93
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3f93 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3f4f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov bx, word ptr ds : [eax+8]
        mov word ptr ds : [ecx], bx
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6da3fbc
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3fbc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3f4f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx], ebx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6da3fe3
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da3fe3 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6da3f4f
        fld dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x84]
        jne public_6da3f81
        public_6da400a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6da3720)
    }
}

#undef public_6da3747
#undef public_6da375a
#undef public_6da378a
#undef public_6da379d
#undef public_6da37bd
#undef public_6da37d0
#undef public_6da37f2
#undef public_6da3805
#undef public_6da3827
#undef public_6da383a
#undef public_6da385c
#undef public_6da386f
#undef public_6da3893
#undef public_6da38a6
#undef public_6da38c9
#undef public_6da38dc
#undef public_6da3918
#undef public_6da392e
#undef public_6da3955
#undef public_6da396b
#undef public_6da39ef
#undef public_6da3a02
#undef public_6da3a1e
#undef public_6da3a31
#undef public_6da3a51
#undef public_6da3a64
#undef public_6da3a84
#undef public_6da3a97
#undef public_6da3ade
#undef public_6da3af1
#undef public_6da3b19
#undef public_6da3b2c
#undef public_6da3b3a
#undef public_6da3b67
#undef public_6da3b7a
#undef public_6da3ba0
#undef public_6da3bb2
#undef public_6da3bbc
#undef public_6da3bcb
#undef public_6da3bd4
#undef public_6da3be0
#undef public_6da3bf4
#undef public_6da3bfd
#undef public_6da3c10
#undef public_6da3c28
#undef public_6da3c58
#undef public_6da3c70
#undef public_6da3c7f
#undef public_6da3c90
#undef public_6da3c93
#undef public_6da3cbd
#undef public_6da3cd5
#undef public_6da3cf9
#undef public_6da3d28
#undef public_6da3d42
#undef public_6da3d51
#undef public_6da3d62
#undef public_6da3d8d
#undef public_6da3dbd
#undef public_6da3def
#undef public_6da3e06
#undef public_6da3e1e
#undef public_6da3e33
#undef public_6da3e3f
#undef public_6da3e54
#undef public_6da3e67
#undef public_6da3e75
#undef public_6da3e8f
#undef public_6da3e96
#undef public_6da3ea5
#undef public_6da3eb7
#undef public_6da3ed1
#undef public_6da3f06
#undef public_6da3f1c
#undef public_6da3f48
#undef public_6da3f4f
#undef public_6da3f5b
#undef public_6da3f81
#undef public_6da3f93
#undef public_6da3fbc
#undef public_6da3fe3
#undef public_6da400a
