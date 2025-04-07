#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7980);

#define public_6fa79a1 _public_6fa79a1
#define public_6fa7a52 _public_6fa7a52
#define public_6fa7a72 _public_6fa7a72
#define public_6fa7ac0 _public_6fa7ac0
#define public_6fa7acb _public_6fa7acb
#define public_6fa7acd _public_6fa7acd
#define public_6fa7af0 _public_6fa7af0
#define public_6fa7afb _public_6fa7afb
#define public_6fa7b11 _public_6fa7b11
#define public_6fa7b28 _public_6fa7b28
#define public_6fa7b33 _public_6fa7b33
#define public_6fa7b35 _public_6fa7b35
#define public_6fa7b58 _public_6fa7b58
#define public_6fa7b63 _public_6fa7b63
#define public_6fa7b65 _public_6fa7b65
#define public_6fa7b70 _public_6fa7b70
#define public_6fa7b88 _public_6fa7b88
#define public_6fa7b9a _public_6fa7b9a
#define public_6fa7b9e _public_6fa7b9e
#define public_6fa7bb0 _public_6fa7bb0
#define public_6fa7bde _public_6fa7bde
#define public_6fa7c00 _public_6fa7c00
#define public_6fa7c2d _public_6fa7c2d
#define public_6fa7c4a _public_6fa7c4a
#define public_6fa7c4d _public_6fa7c4d
#define public_6fa7c5f _public_6fa7c5f
#define public_6fa7c80 _public_6fa7c80
#define public_6fa7cb4 _public_6fa7cb4
#define public_6fa7ce9 _public_6fa7ce9
#define public_6fa7d07 _public_6fa7d07
#define public_6fa7d2b _public_6fa7d2b
#define public_6fa7d47 _public_6fa7d47
#define public_6fa7d55 _public_6fa7d55
#define public_6fa7d74 _public_6fa7d74
#define public_6fa7dac _public_6fa7dac
#define public_6fa7dcd _public_6fa7dcd
#define public_6fa7dd9 _public_6fa7dd9
#define public_6fa7df8 _public_6fa7df8
#define public_6fa7dfa _public_6fa7dfa
#define public_6fa7dfd _public_6fa7dfd
#define public_6fa7e25 _public_6fa7e25

PROC_DECLARE(0x6fa7980, internal_6fa7980, public_6fa7980);
extern "C" NAKED register_t __cdecl internal_6fa7980()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov ebx, ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6fa7bb0
        push ebp
        push edi
        public_6fa79a1 : nop
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6fa79a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7a72
        mov edi, dword ptr ds : [public_6fb3054]
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
/*FIXUP push offset public_6fbd6b8 @0x6fa79cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6b8
        mov ecx, esi
        mov dword ptr ds : [ebx+4], eax
        call edi
        mov ebp, dword ptr ds : [public_6fb3364]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_6fa7a52
        mov ecx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_6fb35c4]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp eax, 3
        jne public_6fa7b9e
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [public_6fb35c0]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_6fb4438]
        add esp, 8
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_6fa7b9e
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_6fb4438]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_6fa7b9e
        mov byte ptr ds : [ebx+0x11], 1
        jmp public_6fa7b9e
/*FIXUP public_6fa7a52 : nop
        push offset public_6fbd6ac @0x6fa7a52*/
  FIXUP public_6fa7a52 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6ac
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_6fa7b9e
        mov byte ptr ds : [ebx+0x12], 1
        jmp public_6fa7b9e
/*FIXUP public_6fa7a72 : nop
        push offset public_6fbd6a0 @0x6fa7a72*/
  FIXUP public_6fa7a72 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6a0
        call edi
        test al, al
        je public_6fa7bde
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi], ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+4], eax
        call dword ptr ds : [public_6fb3020]
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi+0x10]
        add edi, 8
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa7acb
        nop 
        lea esp, ss:[esp]
        public_6fa7ac0 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6fa7acd
        add ecx, 4
        cmp ecx, edx
        jne public_6fa7ac0
        public_6fa7acb : nop
        mov ecx, edx
        public_6fa7acd : nop
        cmp ecx, edx
        jne public_6fa7afb
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        mov ecx, edi
        call public_6eb5770
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6fa7afb
        mov edx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6fa7af0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6fa7afb
        add eax, 4
        cmp eax, ecx
        jne public_6fa7af0
        public_6fa7afb : nop
        mov ebp, 2
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6fa7b9a
        public_6fa7b11 : nop
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa7b33
        public_6fa7b28 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6fa7b35
        add ecx, 4
        cmp ecx, edx
        jne public_6fa7b28
        public_6fa7b33 : nop
        mov ecx, edx
        public_6fa7b35 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6fa7b70
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        call public_6eb5770
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6fa7b63
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa7b58 : nop
        cmp dword ptr ds : [eax], edx
        je public_6fa7b65
        add eax, 4
        cmp eax, ecx
        jne public_6fa7b58
        public_6fa7b63 : nop
        mov eax, ecx
        public_6fa7b65 : nop
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6fa7b88
        public_6fa7b70 : nop
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x40], 0
        call public_6fa6e80
        public_6fa7b88 : nop
        inc ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6fa7b11
        public_6fa7b9a : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6fa7b9e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6fa79a1
        pop edi
        pop ebp
        public_6fa7bb0 : nop
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_6fa7dfd
        mov al, byte ptr ds : [ebx+0x21]
        test al, al
        jne public_6fa7df8
        mov eax, dword ptr ss : [esp+0x34]
        cmp dword ptr ds : [eax], 0
        jne public_6fa7df8
        mov eax, 1
        jmp public_6fa7dfa
/*FIXUP public_6fa7bde : nop
        push offset public_6fbd698 @0x6fa7bde*/
  FIXUP public_6fa7bde : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd698
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7c5f
        xor ebp, ebp
        push ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6fa7b9e
        lea ebx, ds:[ebx]
        public_6fa7c00 : nop
        mov eax, ebp
        push eax
        mov ecx, esi
        inc ebp
        call dword ptr ds : [public_6fb3048]
        mov edi, eax
/*FIXUP push offset public_6fb83fc @0x6fa7c0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb83fc
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6fa7c2d
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax+0x30]
        or ecx, 0x10
        jmp public_6fa7c4a
/*FIXUP public_6fa7c2d : nop
        push offset public_6fbd690 @0x6fa7c2d*/
  FIXUP public_6fa7c2d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd690
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6fa7c4d
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax+0x30]
        or ecx, 1
        public_6fa7c4a : nop
        mov dword ptr ds : [eax+0x30], ecx
        public_6fa7c4d : nop
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6fa7c00
        jmp public_6fa7b9e
/*FIXUP public_6fa7c5f : nop
        push offset public_6fbd67c @0x6fa7c5f*/
  FIXUP public_6fa7c5f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd67c
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7c80
        push 0
        call dword ptr ds : [public_6fb3040]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov byte ptr ds : [ecx+0x34], al
        jmp public_6fa7b9e
/*FIXUP public_6fa7c80 : nop
        push offset public_6fb44fc @0x6fa7c80*/
  FIXUP public_6fa7c80 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        call edi
        test al, al
        jne public_6fa7b9e
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fbd674 @0x6fa7c95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd674
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7cb4
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x18], eax
        jmp public_6fa7b9e
/*FIXUP public_6fa7cb4 : nop
        push offset public_6fbd668 @0x6fa7cb4*/
  FIXUP public_6fa7cb4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd668
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7ce9
        push 0
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6fa7b9e
        mov dword ptr ds : [ebx+0x1C], 0x3F800000
        jmp public_6fa7b9e
/*FIXUP public_6fa7ce9 : nop
        push offset public_6fb44e4 @0x6fa7ce9*/
  FIXUP public_6fa7ce9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44e4
        call edi
        test al, al
        mov ecx, esi
        je public_6fa7d74
        xor edi, edi
        push edi
        mov byte ptr ds : [ebx+0x12], 0
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6fa7d55
/*FIXUP public_6fa7d07 : nop
        push offset public_6fbb7d0 @0x6fa7d07*/
  FIXUP public_6fa7d07 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7d0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov ebp, dword ptr ds : [public_6fb3294]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6fa7d2b
        mov byte ptr ds : [ebx+0x13], 1
        jmp public_6fa7d47
/*FIXUP public_6fa7d2b : nop
        push offset public_6fbb7dc @0x6fa7d2b*/
  FIXUP public_6fa7d2b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7dc
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6fa7d47
        mov byte ptr ds : [ebx+0x12], 1
        public_6fa7d47 : nop
        inc edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6fa7d07
        public_6fa7d55 : nop
        mov al, byte ptr ds : [ebx+0x13]
        test al, al
        jne public_6fa7b9e
        mov al, byte ptr ds : [ebx+0x12]
        test al, al
        jne public_6fa7b9e
        mov byte ptr ds : [ebx+0x12], 1
        jmp public_6fa7b9e
/*FIXUP public_6fa7d74 : nop
        push offset public_6fbd658 @0x6fa7d74*/
  FIXUP public_6fa7d74 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd658
        call edi
        test al, al
        je public_6fa7dd9
        mov ebp, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fbce94 @0x6fa7d85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce94
        push 0
        mov ecx, esi
        call ebp
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6fa7dac
        mov dword ptr ds : [ebx+0x14], 2
        jmp public_6fa7b9e
/*FIXUP public_6fa7dac : nop
        push offset public_6fbce88 @0x6fa7dac*/
  FIXUP public_6fa7dac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce88
        push 0
        mov ecx, esi
        call ebp
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6fa7dcd
        mov dword ptr ds : [ebx+0x14], 4
        jmp public_6fa7b9e
        public_6fa7dcd : nop
        mov dword ptr ds : [ebx+0x14], 1
        jmp public_6fa7b9e
        public_6fa7dd9 : nop
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        je public_6fa7b9e
        mov edx, dword ptr ds : [ebx+8]
        push ebx
        push edx
        push esi
        lea ecx, ds:[ebx+0x18]
        call public_6ef9000
        jmp public_6fa7b9e
        public_6fa7df8 : nop
        xor eax, eax
        public_6fa7dfa : nop
        mov byte ptr ds : [ebx+0x10], al
        public_6fa7dfd : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6fa7e25
        mov ecx, dword ptr ss : [esp+0x34]
        cmp dword ptr ds : [ecx], 0
        jne public_6fa7e25
        mov al, byte ptr ds : [ebx+0x12]
        test al, al
        jne public_6fa7e25
        mov al, byte ptr ds : [ebx+0x13]
        test al, al
        jne public_6fa7e25
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 0xC
        public_6fa7e25 : nop
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6fa7980)
    }
}

#undef public_6fa79a1
#undef public_6fa7a52
#undef public_6fa7a72
#undef public_6fa7ac0
#undef public_6fa7acb
#undef public_6fa7acd
#undef public_6fa7af0
#undef public_6fa7afb
#undef public_6fa7b11
#undef public_6fa7b28
#undef public_6fa7b33
#undef public_6fa7b35
#undef public_6fa7b58
#undef public_6fa7b63
#undef public_6fa7b65
#undef public_6fa7b70
#undef public_6fa7b88
#undef public_6fa7b9a
#undef public_6fa7b9e
#undef public_6fa7bb0
#undef public_6fa7bde
#undef public_6fa7c00
#undef public_6fa7c2d
#undef public_6fa7c4a
#undef public_6fa7c4d
#undef public_6fa7c5f
#undef public_6fa7c80
#undef public_6fa7cb4
#undef public_6fa7ce9
#undef public_6fa7d07
#undef public_6fa7d2b
#undef public_6fa7d47
#undef public_6fa7d55
#undef public_6fa7d74
#undef public_6fa7dac
#undef public_6fa7dcd
#undef public_6fa7dd9
#undef public_6fa7df8
#undef public_6fa7dfa
#undef public_6fa7dfd
#undef public_6fa7e25
