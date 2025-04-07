#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6eb20b5 _public_6eb20b5
#define public_6eb215f _public_6eb215f
#define public_6eb216d _public_6eb216d
#define public_6eb2182 _public_6eb2182
#define public_6eb2193 _public_6eb2193
#define public_6eb21da _public_6eb21da
#define public_6eb21fb _public_6eb21fb
#define public_6eb2212 _public_6eb2212
#define public_6eb2214 _public_6eb2214
#define public_6eb2278 _public_6eb2278
#define public_6eb2288 _public_6eb2288
#define public_6eb22a0 _public_6eb22a0
#define public_6eb22a5 _public_6eb22a5

PROC_DECLARE(0x6eb2090, internal_6eb2090, public_6eb2090);
extern "C" NAKED register_t __cdecl internal_6eb2090()
{
    __asm
    {
        mov eax, 0x2024
        call public_6ed0c70
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        xor eax, eax
        cmp ecx, eax
        push esi
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6eb21fb
        push ebp
        push edi
        mov dword ptr ss : [esp+0x18], eax
        public_6eb20b5 : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [ebx+8]
        add esi, edx
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[esi+8]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x28], 1
        je public_6eb2182
        push eax
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_6ed1000]
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jl public_6eb216d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, 1
        push edi
        sete cl
        push eax
        mov byte ptr ds : [esi+0x28], cl
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jl public_6eb215f
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6eb215f
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push 0
        push eax
        push ebp
        call dword ptr ds : [ecx+0x70]
        public_6eb215f : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ebp
        call dword ptr ds : [ecx+0x38]
        jmp public_6eb2182
        public_6eb216d : nop
        mov edi, dword ptr ds : [esi]
        mov esi, offset public_6ed411c
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        sete byte ptr ss : [esp+0x13]
        public_6eb2182 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0xFFFFFFFF
        je public_6eb2193
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x40]
        public_6eb2193 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6eb21da
        mov edx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [ebx+0x14]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6ed40fc @0x6eb21ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40fc
        push eax
        call public_6eb22b0
        push eax
        push 0x23F
/*FIXUP push offset public_6ed40bc @0x6eb21bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40bc
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6eb21c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_6eb21da : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        inc eax
        add edx, 0x2C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edx
        jb public_6eb20b5
        pop edi
        pop ebp
        public_6eb21fb : nop
        fld dword ptr ds : [ebx+0x2C]
        fcomp dword ptr ds : [public_6ed1270]
        fnstsw ax
        test ah, 5
        jp public_6eb2212
        mov eax, 1
        jmp public_6eb2214
        public_6eb2212 : nop
        xor eax, eax
        public_6eb2214 : nop
        test al, al
        mov byte ptr ds : [ebx+0x64], al
        mov byte ptr ds : [ebx+0x65], 0
        jne public_6eb22a5
        push 0
        call public_6ed0b60
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [edx+8]
        add esp, 4
        test ecx, ecx
        je public_6eb22a5
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0xC]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_6eb22a5
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_6ed0ba0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ds : [ebx+0x65], cl
        jl public_6eb2278
        cmp eax, 0xE
        jle public_6eb2288
        public_6eb2278 : nop
        push eax
        call public_6ed0ba0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_6eb22a0
        public_6eb2288 : nop
        mov al, byte ptr ds : [ebx+0x65]
        test al, al
        jne public_6eb22a0
        mov eax, 1
        pop esi
        mov byte ptr ds : [ebx+0x64], al
        pop ebx
        add esp, 0x2024
        ret 
        public_6eb22a0 : nop
        xor eax, eax
        mov byte ptr ds : [ebx+0x64], al
        public_6eb22a5 : nop
        pop esi
        pop ebx
        add esp, 0x2024
        ret 
        UNREACHABLE_TRAP(0x6eb2090)
    }
}

#undef public_6eb20b5
#undef public_6eb215f
#undef public_6eb216d
#undef public_6eb2182
#undef public_6eb2193
#undef public_6eb21da
#undef public_6eb21fb
#undef public_6eb2212
#undef public_6eb2214
#undef public_6eb2278
#undef public_6eb2288
#undef public_6eb22a0
#undef public_6eb22a5
