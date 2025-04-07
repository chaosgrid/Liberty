#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a07a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393c08);

#define public_62a07cc _public_62a07cc
#define public_62a07cf _public_62a07cf
#define public_62a081f _public_62a081f
#define public_62a08d0 _public_62a08d0
#define public_62a0935 _public_62a0935
#define public_62a0996 _public_62a0996
#define public_62a0998 _public_62a0998
#define public_62a09b3 _public_62a09b3
#define public_62a09b5 _public_62a09b5
#define public_62a09d0 _public_62a09d0
#define public_62a09d2 _public_62a09d2
#define public_62a09ed _public_62a09ed
#define public_62a09ef _public_62a09ef
#define public_62a0a0a _public_62a0a0a
#define public_62a0a0c _public_62a0a0c
#define public_62a0a27 _public_62a0a27
#define public_62a0a29 _public_62a0a29
#define public_62a0a49 _public_62a0a49
#define public_62a0ac9 _public_62a0ac9
#define public_62a0acd _public_62a0acd
#define public_62a0af7 _public_62a0af7
#define public_62a0afd _public_62a0afd
#define public_62a0b53 _public_62a0b53
#define public_62a0b62 _public_62a0b62
#define public_62a0b9a _public_62a0b9a
#define public_62a0b9c _public_62a0b9c
#define public_62a0ba6 _public_62a0ba6
#define public_62a0bb9 _public_62a0bb9

PROC_DECLARE(0x62a07a0, internal_62a07a0, public_62a07a0);
extern "C" NAKED register_t __cdecl internal_62a07a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393c08 @0x62a07a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393c08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x14], 3
        push esi
        push edi
        je public_62a07cc
        mov ebx, dword ptr ss : [ebp+8]
        jmp public_62a07cf
        public_62a07cc : nop
        or ebx, 0xFFFFFFFF
        public_62a07cf : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc26c]
        mov ecx, 0xC
        lea edi, ss:[esp+0x78]
        rep movsd
        xor esi, esi
        cmp eax, esi
        jne public_62a081f
        call public_6391cf0
        mov dword ptr ds : [public_63fc26c], eax
        public_62a081f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x50], edx
        fld dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x4F]
        fadd dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ecx
        mov byte ptr ss : [esp+0x68], dl
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x6C], esi
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], esi
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x74], esi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push esi
        push ebx
        push eax
        mov dword ptr ss : [esp+0xC0], esi
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_62a0a49
        mov edi, edi
        public_62a08d0 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0xF4]
        mov ecx, dword ptr ss : [ebp+4]
        cmp ax, word ptr ds : [ecx+4]
        jne public_62a0a29
        mov edx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push 1
        push esi
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fc26c]
        test eax, eax
        jne public_62a0935
        call public_6391cf0
        mov dword ptr ds : [public_63fc26c], eax
        public_62a0935 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push 1
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x54], edx
        call public_62a0ee0
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x30]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62a0996
        fstp dword ptr ss : [esp+0x30]
        jmp public_62a0998
        public_62a0996 : nop
        fstp st(0)
        public_62a0998 : nop
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x38]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62a09b3
        fstp dword ptr ss : [esp+0x38]
        jmp public_62a09b5
        public_62a09b3 : nop
        fstp st(0)
        public_62a09b5 : nop
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62a09d0
        fstp dword ptr ss : [esp+0x10]
        jmp public_62a09d2
        public_62a09d0 : nop
        fstp st(0)
        public_62a09d2 : nop
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x2C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62a09ed
        fstp dword ptr ss : [esp+0x2C]
        jmp public_62a09ef
        public_62a09ed : nop
        fstp st(0)
        public_62a09ef : nop
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62a0a0a
        fstp dword ptr ss : [esp+0x28]
        jmp public_62a0a0c
        public_62a0a0a : nop
        fstp st(0)
        public_62a0a0c : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x34]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62a0a27
        fstp dword ptr ss : [esp+0x34]
        jmp public_62a0a29
        public_62a0a27 : nop
        fstp st(0)
        public_62a0a29 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_62a08d0
        public_62a0a49 : nop
        fld dword ptr ss : [esp+0x38]
        mov esi, dword ptr ss : [esp+0xBC]
        fadd dword ptr ss : [esp+0x30]
        mov edx, esi
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x64]
        fxch 
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_62a0ac9
        fld st(0)
        jmp public_62a0acd
        public_62a0ac9 : nop
        fld dword ptr ss : [esp+0x10]
        public_62a0acd : nop
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_62a0af7
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_62a0afd
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        jmp public_62a0afd
        public_62a0af7 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_62a0afd : nop
        fmul dword ptr ds : [public_639c13c]
        mov edx, dword ptr ss : [esp+0xB8]
        fld st(0)
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x50]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x54]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x58]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62a0b53
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        public_62a0b53 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ss : [esp+0x70]
        cmp eax, edi
        je public_62a0ba6
        lea ecx, ds:[eax+8]
        public_62a0b62 : nop
        fld dword ptr ds : [ecx-8]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [ecx-4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ds : [ecx+4]
        fcom dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_62a0b9a
        fstp dword ptr ds : [edx]
        jmp public_62a0b9c
        public_62a0b9a : nop
        fstp st(0)
        public_62a0b9c : nop
        add ecx, 0x10
        lea eax, ds:[ecx-8]
        cmp eax, edi
        jne public_62a0b62
        public_62a0ba6 : nop
        mov eax, dword ptr ds : [public_63fc26c]
        test eax, eax
        jne public_62a0bb9
        call public_6391cf0
        mov dword ptr ds : [public_63fc26c], eax
        public_62a0bb9 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+4], ecx
        push eax
        mov dword ptr ds : [esi+8], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0xAC]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 8
        UNREACHABLE_TRAP(0x62a07a0)
    }
}

#undef public_62a07cc
#undef public_62a07cf
#undef public_62a081f
#undef public_62a08d0
#undef public_62a0935
#undef public_62a0996
#undef public_62a0998
#undef public_62a09b3
#undef public_62a09b5
#undef public_62a09d0
#undef public_62a09d2
#undef public_62a09ed
#undef public_62a09ef
#undef public_62a0a0a
#undef public_62a0a0c
#undef public_62a0a27
#undef public_62a0a29
#undef public_62a0a49
#undef public_62a0ac9
#undef public_62a0acd
#undef public_62a0af7
#undef public_62a0afd
#undef public_62a0b53
#undef public_62a0b62
#undef public_62a0b9a
#undef public_62a0b9c
#undef public_62a0ba6
#undef public_62a0bb9
