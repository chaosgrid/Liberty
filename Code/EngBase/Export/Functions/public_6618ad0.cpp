#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617220);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_661a140);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6618afb _public_6618afb
#define public_6618b15 _public_6618b15
#define public_6618b20 _public_6618b20
#define public_6618b28 _public_6618b28
#define public_6618b32 _public_6618b32
#define public_6618b52 _public_6618b52
#define public_6618b69 _public_6618b69
#define public_6618b76 _public_6618b76
#define public_6618b81 _public_6618b81
#define public_6618b84 _public_6618b84
#define public_6618ba0 _public_6618ba0
#define public_6618bab _public_6618bab
#define public_6618bae _public_6618bae
#define public_6618bc6 _public_6618bc6
#define public_6618bd0 _public_6618bd0
#define public_6618bda _public_6618bda
#define public_6618bdc _public_6618bdc
#define public_6618bf5 _public_6618bf5
#define public_6618c00 _public_6618c00
#define public_6618c0b _public_6618c0b
#define public_6618c0e _public_6618c0e
#define public_6618c28 _public_6618c28
#define public_6618c69 _public_6618c69
#define public_6618c7c _public_6618c7c
#define public_6618c87 _public_6618c87
#define public_6618c8a _public_6618c8a
#define public_6618c95 _public_6618c95
#define public_6618caa _public_6618caa
#define public_6618cd3 _public_6618cd3
#define public_6618ced _public_6618ced
#define public_6618d14 _public_6618d14
#define public_6618d27 _public_6618d27
#define public_6618d34 _public_6618d34
#define public_6618d36 _public_6618d36
#define public_6618d41 _public_6618d41
#define public_6618d5a _public_6618d5a
#define public_6618d72 _public_6618d72
#define public_6618d7f _public_6618d7f
#define public_6618d81 _public_6618d81
#define public_6618d8d _public_6618d8d
#define public_6618db9 _public_6618db9
#define public_6618dd1 _public_6618dd1
#define public_6618de1 _public_6618de1
#define public_6618deb _public_6618deb
#define public_6618e10 _public_6618e10
#define public_6618e23 _public_6618e23
#define public_6618e2e _public_6618e2e
#define public_6618e31 _public_6618e31
#define public_6618e3b _public_6618e3b
#define public_6618e66 _public_6618e66
#define public_6618e79 _public_6618e79
#define public_6618e86 _public_6618e86
#define public_6618e88 _public_6618e88
#define public_6618e8b _public_6618e8b
#define public_6618e8e _public_6618e8e
#define public_6618e92 _public_6618e92
#define public_6618ea4 _public_6618ea4
#define public_6618ec2 _public_6618ec2

PROC_DECLARE(0x6618ad0, internal_6618ad0, public_6618ad0);
extern "C" NAKED register_t __cdecl internal_6618ad0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x10], ebx
        call public_661a140
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+8]
        mov edi, esi
        cmp edx, eax
        mov dword ptr ss : [esp+0xC], edi
        jne public_6618b15
        mov eax, dword ptr ds : [esi+8]
        public_6618afb : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6618ba0
        mov dword ptr ds : [ecx+4], eax
        jmp public_6618bae
        public_6618b15 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6618b20
        mov eax, edx
        jmp public_6618afb
        public_6618b20 : nop
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x2D], 0
        jne public_6618b32
        public_6618b28 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x2D], 0
        je public_6618b28
        public_6618b32 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edi, ecx
        cmp ecx, esi
        mov dword ptr ss : [esp+0xC], edi
        je public_6618afb
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6618b52
        mov dword ptr ds : [eax+4], ecx
        jmp public_6618b69
        public_6618b52 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6618b69 : nop
        mov ebx, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [ebx+4], esi
        jne public_6618b76
        mov dword ptr ds : [ebx+4], ecx
        jmp public_6618b84
        public_6618b76 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6618b81
        mov dword ptr ds : [edx], ecx
        jmp public_6618b84
        public_6618b81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6618b84 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ebx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x2C], dl
        jmp public_6618c0e
        public_6618ba0 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6618bab
        mov dword ptr ds : [ecx], eax
        jmp public_6618bae
        public_6618bab : nop
        mov dword ptr ds : [ecx+8], eax
        public_6618bae : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [edi], esi
        jne public_6618bdc
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        jne public_6618bc6
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi], ecx
        jmp public_6618bdc
        public_6618bc6 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x2D], 0
        jne public_6618bda
        public_6618bd0 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        cmp byte ptr ds : [ecx+0x2D], 0
        je public_6618bd0
        public_6618bda : nop
        mov dword ptr ds : [edi], edx
        public_6618bdc : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [edi+8], esi
        jne public_6618c0e
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        jne public_6618bf5
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+8], ecx
        jmp public_6618c0e
        public_6618bf5 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x2D], 0
        jne public_6618c0b
        public_6618c00 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp byte ptr ds : [ecx+0x2D], 0
        je public_6618c00
        public_6618c0b : nop
        mov dword ptr ds : [edi+8], edx
        public_6618c0e : nop
        mov edx, dword ptr ss : [esp+0xC]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618e92
        mov ecx, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6618e8e
        public_6618c28 : nop
        cmp byte ptr ds : [eax+0x2C], 1
        jne public_6618e8e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6618ced
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6618c95
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618c69
        mov dword ptr ds : [esi+4], ecx
        public_6618c69 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618c7c
        mov dword ptr ds : [esi+4], edx
        jmp public_6618c8a
        public_6618c7c : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6618c87
        mov dword ptr ds : [esi], edx
        jmp public_6618c8a
        public_6618c87 : nop
        mov dword ptr ds : [esi+8], edx
        public_6618c8a : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6618c95 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618caa
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], 1
        je public_6618d5a
        public_6618caa : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618d8d
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618cd3
        mov dword ptr ds : [esi+4], ecx
        public_6618cd3 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618d72
        mov dword ptr ds : [esi+4], edx
        jmp public_6618d81
        public_6618ced : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6618d41
        mov byte ptr ds : [ecx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618d14
        mov dword ptr ds : [esi+4], ecx
        public_6618d14 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618d27
        mov dword ptr ds : [esi+4], edx
        jmp public_6618d36
        public_6618d27 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618d34
        mov dword ptr ds : [esi+8], edx
        jmp public_6618d36
        public_6618d34 : nop
        mov dword ptr ds : [esi], edx
        public_6618d36 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6618d41 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618deb
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618deb
        public_6618d5a : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6618c28
        jmp public_6618e8e
        public_6618d72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618d7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6618d81
        public_6618d7f : nop
        mov dword ptr ds : [esi], edx
        public_6618d81 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6618d8d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618db9
        mov dword ptr ds : [esi+4], ecx
        public_6618db9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618dd1
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618e8b
        public_6618dd1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6618de1
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618e8b
        public_6618de1 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618e8b
        public_6618deb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], 1
        jne public_6618e3b
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618e10
        mov dword ptr ds : [esi+4], ecx
        public_6618e10 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618e23
        mov dword ptr ds : [esi+4], edx
        jmp public_6618e31
        public_6618e23 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6618e2e
        mov dword ptr ds : [esi], edx
        jmp public_6618e31
        public_6618e2e : nop
        mov dword ptr ds : [esi+8], edx
        public_6618e31 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6618e3b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6618e66
        mov dword ptr ds : [esi+4], ecx
        public_6618e66 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618e79
        mov dword ptr ds : [esi+4], edx
        jmp public_6618e88
        public_6618e79 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618e86
        mov dword ptr ds : [esi+8], edx
        jmp public_6618e88
        public_6618e86 : nop
        mov dword ptr ds : [esi], edx
        public_6618e88 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6618e8b : nop
        mov dword ptr ds : [ecx+4], edx
        public_6618e8e : nop
        mov byte ptr ds : [eax+0x2C], 1
        public_6618e92 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+0x24]
        mov esi, dword ptr ds : [edx+0x1C]
        lea edi, ds:[edx+0x1C]
        test eax, eax
        je public_6618ec2
        push ebp
        public_6618ea4 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        push esi
        mov ecx, edi
        call public_6617220
        push esi
        call public_66281d0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        test eax, eax
        mov esi, ebp
        jne public_6618ea4
        pop ebp
        public_6618ec2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_66281d0
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6618ad0)
    }
}

#undef public_6618afb
#undef public_6618b15
#undef public_6618b20
#undef public_6618b28
#undef public_6618b32
#undef public_6618b52
#undef public_6618b69
#undef public_6618b76
#undef public_6618b81
#undef public_6618b84
#undef public_6618ba0
#undef public_6618bab
#undef public_6618bae
#undef public_6618bc6
#undef public_6618bd0
#undef public_6618bda
#undef public_6618bdc
#undef public_6618bf5
#undef public_6618c00
#undef public_6618c0b
#undef public_6618c0e
#undef public_6618c28
#undef public_6618c69
#undef public_6618c7c
#undef public_6618c87
#undef public_6618c8a
#undef public_6618c95
#undef public_6618caa
#undef public_6618cd3
#undef public_6618ced
#undef public_6618d14
#undef public_6618d27
#undef public_6618d34
#undef public_6618d36
#undef public_6618d41
#undef public_6618d5a
#undef public_6618d72
#undef public_6618d7f
#undef public_6618d81
#undef public_6618d8d
#undef public_6618db9
#undef public_6618dd1
#undef public_6618de1
#undef public_6618deb
#undef public_6618e10
#undef public_6618e23
#undef public_6618e2e
#undef public_6618e31
#undef public_6618e3b
#undef public_6618e66
#undef public_6618e79
#undef public_6618e86
#undef public_6618e88
#undef public_6618e8b
#undef public_6618e8e
#undef public_6618e92
#undef public_6618ea4
#undef public_6618ec2
