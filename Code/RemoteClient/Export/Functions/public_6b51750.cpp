#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a430);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b50140);
CLANG_FORWARD_PROC_SYMBOL(public_6b51750);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b51777 _public_6b51777
#define public_6b517a7 _public_6b517a7
#define public_6b517e1 _public_6b517e1
#define public_6b5180e _public_6b5180e
#define public_6b5183b _public_6b5183b
#define public_6b51868 _public_6b51868
#define public_6b5189a _public_6b5189a
#define public_6b518cd _public_6b518cd
#define public_6b518ee _public_6b518ee
#define public_6b518fd _public_6b518fd
#define public_6b51917 _public_6b51917
#define public_6b5194f _public_6b5194f
#define public_6b51963 _public_6b51963
#define public_6b51991 _public_6b51991
#define public_6b519c1 _public_6b519c1
#define public_6b519ec _public_6b519ec
#define public_6b51a13 _public_6b51a13
#define public_6b51a3a _public_6b51a3a
#define public_6b51ab3 _public_6b51ab3
#define public_6b51b1b _public_6b51b1b
#define public_6b51b34 _public_6b51b34
#define public_6b51b4d _public_6b51b4d
#define public_6b51b82 _public_6b51b82
#define public_6b51bc8 _public_6b51bc8
#define public_6b51bfc _public_6b51bfc
#define public_6b51c18 _public_6b51c18
#define public_6b51c31 _public_6b51c31
#define public_6b51c40 _public_6b51c40
#define public_6b51c59 _public_6b51c59
#define public_6b51c67 _public_6b51c67
#define public_6b51c7e _public_6b51c7e
#define public_6b51ca4 _public_6b51ca4
#define public_6b51cbc _public_6b51cbc
#define public_6b51cfe _public_6b51cfe
#define public_6b51d19 _public_6b51d19
#define public_6b51d2d _public_6b51d2d
#define public_6b51d48 _public_6b51d48
#define public_6b51d71 _public_6b51d71
#define public_6b51dad _public_6b51dad
#define public_6b51dec _public_6b51dec
#define public_6b51e20 _public_6b51e20
#define public_6b51e31 _public_6b51e31
#define public_6b51e78 _public_6b51e78
#define public_6b51e84 _public_6b51e84
#define public_6b51e8b _public_6b51e8b
#define public_6b51e9b _public_6b51e9b
#define public_6b51eaf _public_6b51eaf
#define public_6b51ec6 _public_6b51ec6
#define public_6b51ef0 _public_6b51ef0
#define public_6b51f08 _public_6b51f08
#define public_6b51f42 _public_6b51f42
#define public_6b51f7c _public_6b51f7c
#define public_6b51fb8 _public_6b51fb8
#define public_6b51fdf _public_6b51fdf
#define public_6b52010 _public_6b52010
#define public_6b52038 _public_6b52038
#define public_6b5205e _public_6b5205e
#define public_6b5207e _public_6b5207e
#define public_6b520bb _public_6b520bb
#define public_6b520ed _public_6b520ed
#define public_6b52118 _public_6b52118
#define public_6b5211a _public_6b5211a
#define public_6b52124 _public_6b52124

PROC_DECLARE(0x6b51750, internal_6b51750, public_6b51750);
extern "C" NAKED register_t __cdecl internal_6b51750()
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
        mov edi, 0x17
        jbe public_6b51777
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51777 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x20], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b517a7
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b517a7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dword ptr ss : [ebp+0x24], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b517e1
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b517e1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x28], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b5180e
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b5180e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x2C], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b5183b
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b5183b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x34], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51868
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51868 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x38], ebx
        mov dword ptr ss : [ebp+0x3C], ebx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b5189a
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b5189a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x40], eax
        jbe public_6b5194f
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea eax, ds:[edx+eax*4]
        cmp eax, ecx
        jbe public_6b518cd
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b518cd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov ecx, dword ptr ss : [ebp+0x40]
        shl ecx, 2
        push ecx
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x44], eax
        jne public_6b518fd
        public_6b518ee : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b518fd : nop
        mov edx, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        shl edx, 2
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b51917
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51917 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x44]
        shl eax, 2
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        add edx, eax
        mov dword ptr ss : [ebp+0x18], edx
        mov esi, 4
        mov edi, 0x17
        public_6b5194f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51963
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51963 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51991
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51991 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov esi, dword ptr ss : [ebp+0x18]
        push esi
        lea ecx, ss:[ebp+0x4C]
        call public_6b3a160
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b519c1
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b519c1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov byte ptr ss : [esp+0x13], dl
        mov edx, dword ptr ss : [ebp+0x10]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b519ec
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b519ec : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov bl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51a13
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51a13 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b51a3a
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51a3a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x14], eax
        movsx eax, bl
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6b6c1e8]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ss : [ebp+0x5C]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ss : [ebp+0x60]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ss : [ebp+0x64]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ss : [ebp+0x58]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51ab3
        mov dword ptr ss : [ebp+0x1C], edi
        public_6b51ab3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov bl, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x24]
        inc eax
        push ecx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6b6b020]
        xor edx, edx
        mov dl, bl
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6b6e398]
        fmulp 
        call public_6b6a3f8
        mov dword ptr ss : [ebp+0x68], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b51b34
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51b1b
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51b1b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6b51b34 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51b4d
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51b4d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x24], ecx
        jbe public_6b51eaf
        mov esi, 2
        xor edi, edi
        public_6b51b82 : nop
        push 0x18
        call public_6b6a134
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        je public_6b51e9b
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [ebx+0xC], di
        mov byte ptr ds : [ebx+0xE], 0
        mov byte ptr ds : [ebx+0xF], 0
        mov word ptr ds : [ebx+0x10], di
        mov dword ptr ds : [ebx+0x14], edi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51bc8
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51bc8 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov al, dl
        shr al, 1
        mov cl, dl
        and al, 1
        and cl, 1
        test dl, dl
        mov byte ptr ss : [esp+0x13], dl
        mov byte ptr ds : [ebx+0xF], al
        mov byte ptr ds : [ebx+0xE], cl
        jns public_6b51bfc
        mov dword ptr ds : [ebx+4], 1
        jmp public_6b51c59
        public_6b51bfc : nop
        test dl, 4
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6b51c31
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51c18
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51c18 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6b51c59
        public_6b51c31 : nop
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51c40
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51c40 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        mov dword ptr ds : [ebx+4], eax
        public_6b51c59 : nop
        test dl, 0x40
        je public_6b51c67
        mov dword ptr ds : [ebx+8], 0x3F800000
        jmp public_6b51ca4
        public_6b51c67 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51c7e
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51c7e : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        mov dword ptr ss : [esp+0x20], ecx
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_6b6e398]
        fstp dword ptr ds : [ebx+8]
        public_6b51ca4 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51cbc
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51cbc : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dl, byte ptr ss : [esp+0x17]
        add esp, 4
        test dl, 8
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        je public_6b51d19
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6b51cfe
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51cfe : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC], cx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6b51d48
        public_6b51d19 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b51d2d
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51d2d : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        mov word ptr ds : [ebx+0xC], ax
        public_6b51d48 : nop
        test dl, 0x20
        jne public_6b51e84
        mov ecx, dword ptr ss : [ebp+0x14]
        test dl, 0x10
        mov edx, dword ptr ss : [ebp+0x10]
        je public_6b51e20
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51d71
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51d71 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        cmp ax, di
        mov word ptr ds : [ebx+0x10], ax
        je public_6b51e8b
        mov edx, dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        mov cx, ax
        mov eax, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, eax
        jbe public_6b51dad
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51dad : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        movzx edx, word ptr ds : [ebx+0x10]
        push edx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x14], eax
        je public_6b518ee
        movzx eax, word ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51dec
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51dec : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        movzx eax, word ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [ebx+0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        jmp public_6b51e8b
        public_6b51e20 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51e31
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51e31 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        push edx
        call public_6b50140
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_6b51e8b
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        mov eax, ecx
        mov word ptr ds : [ebx+0x10], ax
        movzx eax, ax
        push eax
        call public_6b6a134
        add esp, 4
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, eax
        public_6b51e78 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6b51e78
        jmp public_6b51e8b
        public_6b51e84 : nop
        mov word ptr ds : [ebx+0x10], di
        mov dword ptr ds : [ebx+0x14], edi
        public_6b51e8b : nop
        push ebx
        lea ecx, ss:[ebp+0x70]
        call public_6b3a820
        xor edi, edi
        mov esi, 2
        public_6b51e9b : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp ax, word ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        jb public_6b51b82
        public_6b51eaf : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51ec6
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51ec6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jbe public_6b51fb8
        lea esp, ss:[esp]
        public_6b51ef0 : nop
        mov esi, dword ptr ss : [ebp+0x78]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b51f08
        mov edi, eax
        public_6b51f08 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6b3a430
        mov esi, dword ptr ss : [ebp+0x7C]
        add esp, 8
        inc esi
        mov dword ptr ss : [ebp+0x7C], esi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51f42
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51f42 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        mov ecx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ds : [ecx+4]
        mov word ptr ds : [edx+8], ax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51f7c
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51f7c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        mov ecx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ds : [ecx+4]
        inc ebx
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ebx, eax
        fmul qword ptr ds : [public_6b6e398]
        fstp dword ptr ds : [edx+0xC]
        jb public_6b51ef0
        public_6b51fb8 : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b52118
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6b51fdf
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b51fdf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6b5211a
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jbe public_6b52118
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov dword ptr ss : [esp+0x1C], ebx
        nop 
        public_6b52010 : nop
        mov eax, dword ptr ds : [public_6b6b02c]
        mov cx, word ptr ds : [eax]
        mov esi, dword ptr ss : [ebp+0x84]
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov word ptr ss : [esp+0x18], cx
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b52038
        mov edi, eax
        public_6b52038 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b5205e
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_6b5205e : nop
        inc dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x17
        jbe public_6b5207e
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b5207e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov si, word ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov ecx, dword ptr ds : [ecx+4]
        mov word ptr ds : [ecx+8], si
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0x14]
        mov ecx, 4
        add edi, ecx
        mov eax, edi
        cmp eax, esi
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b520bb
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b520bb : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x84]
        mov esi, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], edi
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        add esi, ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6b520ed
        mov dword ptr ss : [ebp+0x1C], edx
        public_6b520ed : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b52124
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x84]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [esp+0x24]
        inc ebx
        cmp ebx, eax
        jb public_6b52010
        public_6b52118 : nop
        xor eax, eax
        public_6b5211a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6b52124 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6b51750)
    }
}

#undef public_6b51777
#undef public_6b517a7
#undef public_6b517e1
#undef public_6b5180e
#undef public_6b5183b
#undef public_6b51868
#undef public_6b5189a
#undef public_6b518cd
#undef public_6b518ee
#undef public_6b518fd
#undef public_6b51917
#undef public_6b5194f
#undef public_6b51963
#undef public_6b51991
#undef public_6b519c1
#undef public_6b519ec
#undef public_6b51a13
#undef public_6b51a3a
#undef public_6b51ab3
#undef public_6b51b1b
#undef public_6b51b34
#undef public_6b51b4d
#undef public_6b51b82
#undef public_6b51bc8
#undef public_6b51bfc
#undef public_6b51c18
#undef public_6b51c31
#undef public_6b51c40
#undef public_6b51c59
#undef public_6b51c67
#undef public_6b51c7e
#undef public_6b51ca4
#undef public_6b51cbc
#undef public_6b51cfe
#undef public_6b51d19
#undef public_6b51d2d
#undef public_6b51d48
#undef public_6b51d71
#undef public_6b51dad
#undef public_6b51dec
#undef public_6b51e20
#undef public_6b51e31
#undef public_6b51e78
#undef public_6b51e84
#undef public_6b51e8b
#undef public_6b51e9b
#undef public_6b51eaf
#undef public_6b51ec6
#undef public_6b51ef0
#undef public_6b51f08
#undef public_6b51f42
#undef public_6b51f7c
#undef public_6b51fb8
#undef public_6b51fdf
#undef public_6b52010
#undef public_6b52038
#undef public_6b5205e
#undef public_6b5207e
#undef public_6b520bb
#undef public_6b520ed
#undef public_6b52118
#undef public_6b5211a
#undef public_6b52124
