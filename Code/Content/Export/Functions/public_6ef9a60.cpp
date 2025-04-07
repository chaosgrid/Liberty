#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a60);
CLANG_FORWARD_PROC_SYMBOL(public_6efa020);
CLANG_FORWARD_PROC_SYMBOL(public_6efa4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac668);

#define public_6ef9aa0 _public_6ef9aa0
#define public_6ef9ae6 _public_6ef9ae6
#define public_6ef9b04 _public_6ef9b04
#define public_6ef9b08 _public_6ef9b08
#define public_6ef9b1c _public_6ef9b1c
#define public_6ef9b56 _public_6ef9b56
#define public_6ef9b5a _public_6ef9b5a
#define public_6ef9b65 _public_6ef9b65
#define public_6ef9bb0 _public_6ef9bb0
#define public_6ef9c13 _public_6ef9c13
#define public_6ef9c1f _public_6ef9c1f
#define public_6ef9c4a _public_6ef9c4a
#define public_6ef9c50 _public_6ef9c50
#define public_6ef9c62 _public_6ef9c62
#define public_6ef9cb1 _public_6ef9cb1
#define public_6ef9cca _public_6ef9cca
#define public_6ef9ccc _public_6ef9ccc
#define public_6ef9d36 _public_6ef9d36
#define public_6ef9d46 _public_6ef9d46
#define public_6ef9d5e _public_6ef9d5e
#define public_6ef9d7c _public_6ef9d7c
#define public_6ef9d7e _public_6ef9d7e

PROC_DECLARE(0x6ef9a60, internal_6ef9a60, public_6ef9a60);
extern "C" NAKED register_t __cdecl internal_6ef9a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac668 @0x6ef9a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac668
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x28]
        xor ecx, ecx
        cmp ebx, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_6ef9b65
        lea eax, ds:[ebx+0x50]
        mov dword ptr ss : [esp+0x14], eax
        lea esp, ss:[esp]
        public_6ef9aa0 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov ecx, ebx
        call public_6ef52d0
        test al, al
        je public_6ef9ae6
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ss:[ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x16]
        push ecx
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1E], 1
        call public_6ef54e0
        mov edx, dword ptr ss : [esp+0x18]
        add edx, eax
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0x50
        add eax, 0x50
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6ef9b5a
        public_6ef9ae6 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x28]
        lea edi, ss:[ebp+0x20]
        mov ecx, esi
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6ef9b1c
        mov eax, ebx
        sub eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6ef9b08
        public_6ef9b04 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ef9b08 : nop
        push esi
        lea ecx, ds:[eax+esi]
        call public_6efa4f0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x50
        cmp esi, eax
        jne public_6ef9b04
        public_6ef9b1c : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        add eax, 0xFFFFFFB0
        push eax
        mov ecx, edi
        call public_6efa020
        mov edx, dword ptr ds : [edi+8]
        add edx, 0xFFFFFFB0
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6ef9b56
        mov edi, edx
        sub edi, eax
        mov eax, 0x66666667
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x20], edx
        jne public_6ef9b5a
        public_6ef9b56 : nop
        mov byte ptr ss : [ebp+8], 0
        public_6ef9b5a : nop
        cmp ebx, dword ptr ss : [ebp+0x28]
        jne public_6ef9aa0
        xor ecx, ecx
        public_6ef9b65 : nop
        mov dl, byte ptr ss : [esp+0x4C]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ss : [esp+0x28], dl
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov eax, dword ptr ss : [ebp+0x24]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], ecx
        je public_6ef9c13
        mov edx, dword ptr ss : [ebp+0x28]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        je public_6ef9c13
        cmp edi, ecx
        mov eax, edi
        jge public_6ef9bb0
        xor eax, eax
        public_6ef9bb0 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6ed2700
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+edi*8]
        mov dword ptr ss : [esp+0x38], ecx
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call public_6eae300
        lea ecx, ds:[esi+eax*8]
        mov ebx, esi
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ef9c13 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x28]
        xor edi, edi
        cmp esi, eax
        je public_6ef9c50
        public_6ef9c1f : nop
        mov edx, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edx
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        add esi, 0x50
        inc edi
        cmp esi, eax
        jne public_6ef9c1f
        public_6ef9c4a : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        mov edi, edi
        public_6ef9c50 : nop
        cmp ebx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov edi, ecx
        mov eax, ebx
        je public_6ef9d7c
        public_6ef9c62 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6ef9c62
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef9d7e
        call dword ptr ds : [public_6fb3370]
        mov ebx, dword ptr ss : [esp+0x2C]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        mov ecx, ebx
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ds : [public_6fb444c]
        je public_6ef9ccc
        public_6ef9cb1 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6ef9cca
        add ecx, 8
        cmp ecx, edi
        jne public_6ef9cb1
        jmp public_6ef9ccc
        public_6ef9cca : nop
        mov edi, ecx
        public_6ef9ccc : nop
        mov ecx, dword ptr ss : [esp+0x30]
        fstp st(0)
        cmp edi, ecx
        je public_6ef9d7e
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        add eax, edx
        mov edx, dword ptr ss : [esp+0x50]
        cmp eax, dword ptr ds : [edx]
        jae public_6ef9d7e
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [ebp+0x24]
        lea esi, ds:[eax+eax*4]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        shl esi, 4
        add esi, ebx
        push ecx
        mov ecx, esi
        call public_6ef52d0
        mov ecx, dword ptr ss : [esp+0x48]
        lea edx, ss:[ebp+0x10]
        push edx
        lea eax, ss:[esp+0x17]
        push eax
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1F], 0
        call public_6ef54e0
        test eax, eax
        je public_6ef9d36
        add dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ss : [esp+0x30]
        jmp public_6ef9c4a
        public_6ef9d36 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edi+8]
        cmp eax, ecx
        mov edx, ecx
        je public_6ef9d5e
        lea ecx, ds:[eax-8]
        public_6ef9d46 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ef9d46
        mov ecx, dword ptr ss : [esp+0x30]
        public_6ef9d5e : nop
        push ecx
        add ecx, 0xFFFFFFF8
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x30]
        sub ecx, 8
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6ef9c4a
        public_6ef9d7c : nop
        fstp st(0)
        public_6ef9d7e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x30]
        lea esi, ds:[eax+edx]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6ef9a60)
    }
}

#undef public_6ef9aa0
#undef public_6ef9ae6
#undef public_6ef9b04
#undef public_6ef9b08
#undef public_6ef9b1c
#undef public_6ef9b56
#undef public_6ef9b5a
#undef public_6ef9b65
#undef public_6ef9bb0
#undef public_6ef9c13
#undef public_6ef9c1f
#undef public_6ef9c4a
#undef public_6ef9c50
#undef public_6ef9c62
#undef public_6ef9cb1
#undef public_6ef9cca
#undef public_6ef9ccc
#undef public_6ef9d36
#undef public_6ef9d46
#undef public_6ef9d5e
#undef public_6ef9d7c
#undef public_6ef9d7e
