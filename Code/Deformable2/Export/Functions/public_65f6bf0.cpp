#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1030);
CLANG_FORWARD_PROC_SYMBOL(public_65f1660);
CLANG_FORWARD_PROC_SYMBOL(public_65f6ad0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6b00);
CLANG_FORWARD_PROC_SYMBOL(public_65f6b30);
CLANG_FORWARD_PROC_SYMBOL(public_65f6b90);
CLANG_FORWARD_PROC_SYMBOL(public_65f70b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f70d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f7120);
CLANG_FORWARD_PROC_SYMBOL(public_65f7170);
CLANG_FORWARD_PROC_SYMBOL(public_65f71c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f7220);
CLANG_FORWARD_PROC_SYMBOL(public_65f90c0);

#define public_65f6c81 _public_65f6c81
#define public_65f6ca1 _public_65f6ca1
#define public_65f6cdd _public_65f6cdd
#define public_65f6cf2 _public_65f6cf2
#define public_65f6d06 _public_65f6d06
#define public_65f6d2a _public_65f6d2a
#define public_65f6d3f _public_65f6d3f
#define public_65f6d50 _public_65f6d50
#define public_65f6d5f _public_65f6d5f
#define public_65f6d69 _public_65f6d69
#define public_65f6de8 _public_65f6de8
#define public_65f6df7 _public_65f6df7
#define public_65f6e7b _public_65f6e7b
#define public_65f6ea0 _public_65f6ea0
#define public_65f6f09 _public_65f6f09
#define public_65f6f4e _public_65f6f4e
#define public_65f6f77 _public_65f6f77
#define public_65f6fa0 _public_65f6fa0
#define public_65f7033 _public_65f7033
#define public_65f7040 _public_65f7040
#define public_65f705d _public_65f705d
#define public_65f7061 _public_65f7061
#define public_65f7087 _public_65f7087

PROC_DECLARE(0x65f6bf0, internal_65f6bf0, public_65f6bf0);
extern "C" NAKED register_t __cdecl internal_65f6bf0()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        mov ebx, dword ptr ss : [esp+0x118]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+4]
        add esi, 0xC
        push edi
        lea eax, ds:[esi+0x24]
        push eax
        mov ebp, ecx
        lea ecx, ss:[esp+0x28]
        push esi
        push ecx
        call public_65f7120
        add esp, 0xC
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_65f70b0
        lea eax, ss:[esp+0x50]
        push eax
        mov ecx, esi
        call public_65f70d0
        mov edx, dword ptr ss : [esp+0x48]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, 9
        lea edi, ss:[esp+0x80]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x44]
        xor esi, esi
        mov dword ptr ss : [esp+0xAC], eax
        mov dword ptr ss : [ebp+0x40], esi
        mov dword ptr ss : [ebp+0x44], esi
        cmp dword ptr ds : [ebx+8], esi
        mov dword ptr ss : [esp+0xA4], ecx
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0x18], esi
        jle public_65f6d2a
        mov dword ptr ss : [esp+0x14], esi
        xor edi, edi
        public_65f6c81 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+0x34]
        add ecx, edi
        add esi, eax
        mov al, byte ptr ds : [ecx+0x3C]
        test al, 2
        jne public_65f6ca1
        mov dl, byte ptr ss : [esp+0x12C]
        test dl, dl
        je public_65f6d06
        public_65f6ca1 : nop
        and al, 0xFD
        mov byte ptr ds : [ecx+0x3C], al
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_65f6d06
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 1
        test eax, eax
        je public_65f6d06
        mov edx, dword ptr ss : [ebp+0x44]
        mov al, byte ptr ss : [ebp+0x70]
        inc edx
        test al, al
        mov dword ptr ss : [ebp+0x44], edx
        jne public_65f6cdd
        lea esi, ds:[ecx+0x40]
        mov ecx, esi
        call public_65f1660
        xor eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x24], eax
        jmp public_65f6d06
        public_65f6cdd : nop
        lea edx, ss:[esp+0x80]
        push edx
        call public_65f1030
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+8], eax
        je public_65f6d06
        public_65f6cf2 : nop
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x38]
        mov byte ptr ds : [ecx+edx], 1
        mov ecx, dword ptr ds : [esi+8]
        add eax, 2
        cmp ecx, eax
        jne public_65f6cf2
        public_65f6d06 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+8]
        inc eax
        add edx, 0x10
        add edi, 0x70
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_65f6c81
        xor esi, esi
        public_65f6d2a : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, ebx
        and eax, 0xC
        xor edi, edi
        cmp al, 0xC
        jne public_65f6d3f
        mov edi, 0x1C
        jmp public_65f6d5f
        public_65f6d3f : nop
        mov ecx, ebx
        and ecx, 4
        cmp cl, 4
        jne public_65f6d50
        mov edi, 0x10
        jmp public_65f6d5f
        public_65f6d50 : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_65f6d5f
        mov edi, 0xC
        public_65f6d5f : nop
        test bl, 0x10
        je public_65f6d69
        mov esi, 0xC
        public_65f6d69 : nop
        push ebx
        call public_65f7220
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_65f71c0
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp]
        add esi, ecx
        add eax, esi
        add eax, edi
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [ebp+0x64]
        add esp, 8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [public_6603144]
        mov ecx, dword ptr ss : [esp+0x128]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push eax
        push esi
        call public_65f7170
        test al, al
        je public_65f6de8
        mov eax, dword ptr ss : [esp+0x128]
        push ebx
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        push edi
        push eax
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        setge al
        test al, al
        jne public_65f6df7
        public_65f6de8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x110
        ret 0xC
        public_65f6df7 : nop
        mov al, byte ptr ss : [esp+0x12C]
        test al, al
        je public_65f6e7b
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, ebp
        call public_65f90c0
        mov ecx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x128]
        mov eax, dword ptr ds : [public_6603144]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jge public_65f6e7b
        mov edx, dword ptr ds : [public_6601008]
/*FIXUP push offset public_660275c @0x65f6e3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660275c
        push 0x134
/*FIXUP push offset public_6602710 @0x65f6e49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602710
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f6e53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6603144]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x110
        ret 0xC
        public_65f6e7b : nop
        mov eax, dword ptr ss : [ebp+0x24]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], ecx
        jbe public_65f7087
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 8
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        nop 
        lea esp, ss:[esp]
        public_65f6ea0 : nop
        mov edx, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ss : [ebp+0x38]
        add eax, ecx
        lea edi, ds:[edx+ecx*8]
        cmp byte ptr ds : [eax], 0
        je public_65f7061
        mov edx, dword ptr ss : [esp+0x124]
        mov byte ptr ds : [eax], 0
        inc dword ptr ss : [ebp+0x40]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+4]
        imul ecx, 0x70
        mov esi, dword ptr ss : [ebp+0x28]
        mov ebx, dword ptr ds : [edi]
        lea ecx, ds:[ecx+edx+0x40]
        add esi, dword ptr ss : [esp+0x1C]
        cmp ebx, 1
        mov dword ptr ss : [esp+0x10], ecx
        jne public_65f6f09
        push esi
        push ecx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_65f6b30
        mov ecx, dword ptr ss : [esp+0x1C]
        add esi, 0xC
        push esi
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_65f6b90
        add esp, 0x18
        jmp public_65f7033
        public_65f6f09 : nop
        mov eax, dword ptr ds : [eax+4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_65f6ad0
        add esp, 0xC
        dec ebx
        dec ebx
        je public_65f6f77
        dec ebx
        je public_65f6f4e
        dec ebx
        jne public_65f6fa0
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x124]
        imul eax, 0x70
        push edx
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[eax+edx+0x40]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_65f6b00
        add esp, 0xC
        public_65f6f4e : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x124]
        imul eax, 0x70
        push edx
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[eax+edx+0x40]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_65f6b00
        add esp, 0xC
        public_65f6f77 : nop
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        imul eax, 0x70
        mov ecx, dword ptr ss : [esp+0x124]
        push edx
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[eax+edx+0x40]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_65f6b00
        add esp, 0xC
        public_65f6fa0 : nop
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_65f6b30
        add esi, 0xC
        push esi
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_65f6b90
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x50]
        add esp, 0x18
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6601328]
        fsubr dword ptr ds : [public_6601354]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        public_65f7033 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx-4]
        mov edx, dword ptr ds : [ecx]
        cmp eax, edx
        je public_65f705d
        public_65f7040 : nop
        mov edi, dword ptr ds : [eax]
        imul edi, dword ptr ss : [esp+0x40]
        add edi, dword ptr ss : [esp+0x3C]
        add eax, 4
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x24]
        rep movsd
        jne public_65f7040
        public_65f705d : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_65f7061 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0x24]
        inc ecx
        add esi, 0x18
        add edx, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x18], edx
        jb public_65f6ea0
        public_65f7087 : nop
        mov ecx, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_6603144]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x110
        ret 0xC
        UNREACHABLE_TRAP(0x65f6bf0)
    }
}

#undef public_65f6c81
#undef public_65f6ca1
#undef public_65f6cdd
#undef public_65f6cf2
#undef public_65f6d06
#undef public_65f6d2a
#undef public_65f6d3f
#undef public_65f6d50
#undef public_65f6d5f
#undef public_65f6d69
#undef public_65f6de8
#undef public_65f6df7
#undef public_65f6e7b
#undef public_65f6ea0
#undef public_65f6f09
#undef public_65f6f4e
#undef public_65f6f77
#undef public_65f6fa0
#undef public_65f7033
#undef public_65f7040
#undef public_65f705d
#undef public_65f7061
#undef public_65f7087
