#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf110);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf670);
CLANG_FORWARD_PROC_SYMBOL(public_6ebfca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1110);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3860);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6ebf6b4 _public_6ebf6b4
#define public_6ebf6cd _public_6ebf6cd
#define public_6ebf6e7 _public_6ebf6e7
#define public_6ebf718 _public_6ebf718
#define public_6ebf725 _public_6ebf725
#define public_6ebf74b _public_6ebf74b
#define public_6ebf77b _public_6ebf77b
#define public_6ebf784 _public_6ebf784
#define public_6ebf7fd _public_6ebf7fd
#define public_6ebf834 _public_6ebf834
#define public_6ebf835 _public_6ebf835
#define public_6ebf89b _public_6ebf89b
#define public_6ebf8d3 _public_6ebf8d3
#define public_6ebf919 _public_6ebf919
#define public_6ebf92d _public_6ebf92d
#define public_6ebf93d _public_6ebf93d
#define public_6ebf947 _public_6ebf947
#define public_6ebf94a _public_6ebf94a
#define public_6ebf958 _public_6ebf958
#define public_6ebf962 _public_6ebf962
#define public_6ebf980 _public_6ebf980
#define public_6ebf9a5 _public_6ebf9a5
#define public_6ebf9dd _public_6ebf9dd
#define public_6ebf9e1 _public_6ebf9e1
#define public_6ebfa75 _public_6ebfa75
#define public_6ebfa95 _public_6ebfa95
#define public_6ebfacc _public_6ebfacc
#define public_6ebfb04 _public_6ebfb04
#define public_6ebfbe7 _public_6ebfbe7
#define public_6ebfc0c _public_6ebfc0c
#define public_6ebfc11 _public_6ebfc11
#define public_6ebfc3e _public_6ebfc3e
#define public_6ebfc4a _public_6ebfc4a
#define public_6ebfc59 _public_6ebfc59
#define public_6ebfc6b _public_6ebfc6b

PROC_DECLARE(0x6ebf670, internal_6ebf670, public_6ebf670);
extern "C" NAKED register_t __cdecl internal_6ebf670()
{
    __asm
    {
        mov eax, 0x449C
        call public_6ed0c70
        mov eax, dword ptr ss : [esp+0x44A0]
        push ebx
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x6C]
        push edx
/*FIXUP push offset public_6ed4a6c @0x6ebf68a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4a6c
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ebf6b4
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x449C
        ret 0xC
        public_6ebf6b4 : nop
        test byte ptr ss : [esp+0x6C], 0x10
        je public_6ebf6cd
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x449C
        ret 0xC
        public_6ebf6cd : nop
        mov al, byte ptr ds : [public_6ed57d0]
        test al, 1
        jne public_6ebf718
        or al, 1
        mov byte ptr ds : [public_6ed57d0], al
        mov esi, offset public_6ed56fc
        mov edi, 0xA
        public_6ebf6e7 : nop
        push 0
        lea ecx, ds:[esi+0xC]
        call public_6ec3860
        mov dword ptr ds : [esi-4], 0xFFFFFFFF
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+8], 0
        add esi, 0x14
        dec edi
        jne public_6ebf6e7
/*FIXUP push offset _public_6ebfca0 @0x6ebf70b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebfca0
        call public_6ed0ccb
        add esp, 4
        public_6ebf718 : nop
        mov ebp, dword ptr ss : [esp+0x44B4]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        public_6ebf725 : nop
        mov al, byte ptr ss : [esp+0x9C]
        test al, al
        jne public_6ebf8d3
        movsx edi, byte ptr ss : [esp+0x9B]
        mov eax, dword ptr ss : [esp+0x10]
        sub edi, 0x30
        cmp edi, eax
        jl public_6ebf74b
        mov dword ptr ss : [esp+0x10], edi
        public_6ebf74b : nop
        mov ecx, dword ptr ss : [esp+0x44B0]
        lea eax, ds:[edi+edi*4]
        lea esi, ds : [eax*4+public_6ed56f8]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        je public_6ebf784
        test eax, eax
        je public_6ebf77b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x44B0]
        mov dword ptr ds : [esi+0x10], 0
        public_6ebf77b : nop
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+4]
/*FIXUP public_6ebf784 : nop
        push offset public_6ed4094 @0x6ebf784*/
  FIXUP public_6ebf784 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6eb15e0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x68], ecx
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        je public_6ebf7fd
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 0
        push 2
        push 0
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+8], eax
        je public_6ebf7fd
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        test eax, eax
        mov dword ptr ds : [esi+0xC], eax
        jne public_6ebf834
        public_6ebf7fd : nop
        push edi
        push ebp
        lea eax, ss:[esp+0x4B4]
/*FIXUP push offset public_6ed4a48 @0x6ebf806*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4a48
        push eax
        call public_6eb22b0
        push eax
        push 0xAD
/*FIXUP push offset public_6ed49f0 @0x6ebf817*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebf821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        jmp public_6ebf835
        public_6ebf834 : nop
        inc ebx
        public_6ebf835 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x44B0]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x6C]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6ebf725
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+1]
        cmp ecx, ebx
        je public_6ebf89b
        push eax
        push ebx
        push ebp
        lea edx, ss:[esp+0x4B8]
/*FIXUP push offset public_6ed4980 @0x6ebf870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4980
        push edx
        call public_6eb22b0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        push 0xBD
/*FIXUP push offset public_6ed49f0 @0x6ebf886*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebf890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        public_6ebf89b : nop
        xor edi, edi
        push edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x30], edi
        call public_6ed0b60
        mov ecx, dword ptr ds : [public_6ed5704]
        mov dword ptr ss : [esp+0x20], eax
        mov al, byte ptr ds : [ecx+2]
        and al, 7
        add esp, 4
        cmp al, 1
        mov esi, ecx
        jne public_6ebf919
        cmp byte ptr ds : [ecx+1], al
        jne public_6ebf919
        push edi
        push edi
        push edi
        push edi
        push 8
        jmp public_6ebf962
        public_6ebf8d3 : nop
        push ebp
        lea ecx, ss:[esp+0x4B0]
/*FIXUP push offset public_6ed4944 @0x6ebf8db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4944
        push ecx
        call public_6eb22b0
        mov edx, dword ptr ds : [public_6ed1004]
        push eax
        push 0x9D
/*FIXUP push offset public_6ed49f0 @0x6ebf8f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebf8fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x449C
        ret 0xC
        public_6ebf919 : nop
        mov dl, byte ptr ds : [ecx+0x10]
        cmp dl, 0x10
        jne public_6ebf92d
        push 0
        push 5
        push 5
        push 5
        push 0x10
        jmp public_6ebf962
        public_6ebf92d : nop
        cmp al, 3
        jne public_6ebf93d
        push 0
        push 0
        push 0
        push 8
        push 8
        jmp public_6ebf962
        public_6ebf93d : nop
        cmp al, 1
        jne public_6ebf947
        cmp byte ptr ds : [ecx+7], 0x20
        jmp public_6ebf94a
        public_6ebf947 : nop
        cmp dl, 0x20
        public_6ebf94a : nop
        jne public_6ebf958
        push 8
        push 8
        push 8
        push 8
        push 0x20
        jmp public_6ebf962
        public_6ebf958 : nop
        push 0
        push 8
        push 8
        push 8
        push 0x18
        public_6ebf962 : nop
        lea ecx, ss:[esp+0x30]
        call public_6ed0bc0
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6ebf980
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6ebfa75
        public_6ebf980 : nop
        movsx ecx, word ptr ds : [esi+0xC]
        movsx edx, word ptr ds : [esi+0xE]
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        jne public_6ebf9a5
        mov dword ptr ss : [esp+0x18], 1
        jmp public_6ebf9dd
        public_6ebf9a5 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0xFFFFFFFF
        mov ecx, esi
        call public_6ec1110
        mov ecx, ebx
        sub ebx, eax
        test ebx, ebx
        mov edi, eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x20], edi
        jg public_6ebf9e1
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], 1
        jl public_6ebf9dd
        lea edi, ds:[ecx-1]
        mov dword ptr ss : [esp+0x20], edi
        public_6ebf9dd : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_6ebf9e1 : nop
        push 0
        call public_6ed0b60
        push 0
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_6ebf110
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6ec0d50
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0xB4]
        test eax, eax
        jge public_6ebfa75
        push ebp
        lea edx, ss:[esp+0x4B0]
/*FIXUP push offset public_6ed4914 @0x6ebfa4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4914
        push edx
        call public_6eb22b0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        push 0x104
/*FIXUP push offset public_6ed49f0 @0x6ebfa60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebfa6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6ebfa75 : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x28], ebx
        jle public_6ebfc0c
        lea ecx, ds:[edi+edi*4]
        lea edx, ds : [ecx*4+public_6ed5704]
        mov dword ptr ss : [esp+0x14], edx
        public_6ebfa95 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        je public_6ebfbe7
        cmp byte ptr ds : [esi+1], 1
        ja public_6ebfacc
        movzx ecx, byte ptr ds : [esi+2]
        and ecx, 0xFFFFFFF7
        cmp ecx, 3
        jg public_6ebfacc
        mov al, byte ptr ds : [esi+0x10]
        cmp al, 8
        je public_6ebfb04
        cmp al, 0xF
        je public_6ebfb04
        cmp al, 0x10
        je public_6ebfb04
        cmp al, 0x18
        je public_6ebfb04
        cmp al, 0x20
        je public_6ebfb04
        public_6ebfacc : nop
        push ebp
        lea edx, ss:[esp+0x4B0]
/*FIXUP push offset public_6ed48f4 @0x6ebfad4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48f4
        push edx
        call public_6eb22b0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        push 0x11B
/*FIXUP push offset public_6ed49f0 @0x6ebfaea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebfaf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        jmp public_6ebfbe7
        public_6ebfb04 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [edx+8]
        push 0
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x28], 0
        call public_6ed0b60
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x1B4]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        call public_6ebf2b0
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+4]
        movsx ecx, word ptr ds : [esi+0xC]
        mov ebp, dword ptr ss : [esp+0x28]
        add esp, 0x18
        add eax, 7
        shr eax, 3
        imul eax, ecx
        xor ebx, ebx
        cmp ebp, 1
        setne bl
        mov edx, dword ptr ds : [edi]
        lea ebp, ss:[esp+0x1AC]
        dec ebx
        and ebx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push ebx
        push 0
        push ebp
        lea ebx, ss:[esp+0x1C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push eax
        movsx eax, word ptr ds : [esi+0xE]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebx
        push ecx
        push edi
        call dword ptr ds : [edx+0xD4]
        push ebp
        mov esi, eax
        call public_6ed0c50
        mov ebp, dword ptr ss : [esp+0x44B8]
        add esp, 4
        test esi, esi
        jge public_6ebfbe7
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        lea eax, ss:[esp+0x24B4]
/*FIXUP push offset public_6ed48c8 @0x6ebfbbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48c8
        push eax
        call public_6eb22b0
        push eax
        push 0x125
/*FIXUP push offset public_6ed49f0 @0x6ebfbcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49f0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ebfbd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_6ebfbe7 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        inc ebx
        inc edx
        add ecx, 0x14
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x14], ecx
        jl public_6ebfa95
        public_6ebfc0c : nop
        mov esi, offset public_6ed5708
        public_6ebfc11 : nop
        mov eax, dword ptr ds : [esi-4]
        test eax, eax
        je public_6ebfc6b
        mov eax, dword ptr ds : [esi-0x10]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6ebfc59
        cmp dword ptr ds : [esi-8], edi
        je public_6ebfc4a
        mov ecx, dword ptr ds : [esi-4]
        test ecx, ecx
        je public_6ebfc3e
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi-4], 0
        public_6ebfc3e : nop
        mov edx, dword ptr ds : [esi-8]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6ebfc4a : nop
        mov edx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi-0x10], edi
        public_6ebfc59 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ebfc6b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ebfc6b : nop
        add esi, 0x14
        cmp esi, offset public_6ed57d0
        jl public_6ebfc11
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x44B8]
        xor ecx, ecx
        test eax, eax
        setne cl
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], eax
        pop ebx
        dec ecx
        mov eax, ecx
        add esp, 0x449C
        ret 0xC
        UNREACHABLE_TRAP(0x6ebf670)
    }
}

#undef public_6ebf6b4
#undef public_6ebf6cd
#undef public_6ebf6e7
#undef public_6ebf718
#undef public_6ebf725
#undef public_6ebf74b
#undef public_6ebf77b
#undef public_6ebf784
#undef public_6ebf7fd
#undef public_6ebf834
#undef public_6ebf835
#undef public_6ebf89b
#undef public_6ebf8d3
#undef public_6ebf919
#undef public_6ebf92d
#undef public_6ebf93d
#undef public_6ebf947
#undef public_6ebf94a
#undef public_6ebf958
#undef public_6ebf962
#undef public_6ebf980
#undef public_6ebf9a5
#undef public_6ebf9dd
#undef public_6ebf9e1
#undef public_6ebfa75
#undef public_6ebfa95
#undef public_6ebfacc
#undef public_6ebfb04
#undef public_6ebfbe7
#undef public_6ebfc0c
#undef public_6ebfc11
#undef public_6ebfc3e
#undef public_6ebfc4a
#undef public_6ebfc59
#undef public_6ebfc6b
