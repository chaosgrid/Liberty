#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0ee0);
CLANG_FORWARD_PROC_SYMBOL(public_62abde0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63940b8);

#define public_62abe33 _public_62abe33
#define public_62abee8 _public_62abee8
#define public_62abf43 _public_62abf43
#define public_62abfa4 _public_62abfa4
#define public_62abfa6 _public_62abfa6
#define public_62abfc1 _public_62abfc1
#define public_62abfc3 _public_62abfc3
#define public_62abfde _public_62abfde
#define public_62abfe0 _public_62abfe0
#define public_62abffb _public_62abffb
#define public_62abffd _public_62abffd
#define public_62ac018 _public_62ac018
#define public_62ac01a _public_62ac01a
#define public_62ac035 _public_62ac035
#define public_62ac037 _public_62ac037
#define public_62ac057 _public_62ac057
#define public_62ac0dd _public_62ac0dd
#define public_62ac0e4 _public_62ac0e4
#define public_62ac114 _public_62ac114
#define public_62ac11a _public_62ac11a
#define public_62ac176 _public_62ac176
#define public_62ac185 _public_62ac185
#define public_62ac1bd _public_62ac1bd
#define public_62ac1bf _public_62ac1bf
#define public_62ac1c9 _public_62ac1c9
#define public_62ac1dc _public_62ac1dc

PROC_DECLARE(0x62abde0, internal_62abde0, public_62abde0);
extern "C" NAKED register_t __cdecl internal_62abde0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63940b8 @0x62abde8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63940b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6399040]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax]
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_63fc2e4]
        xor esi, esi
        cmp eax, esi
        jne public_62abe33
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62abe33 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+8]
        lea edi, ss:[esp+0x40]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x40], edx
        fld dword ptr ss : [esp+0x34]
        mov dl, byte ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        mov byte ptr ss : [esp+0x68], dl
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x6C], esi
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x70], esi
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], esi
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push esi
        push ebp
        push eax
        mov dword ptr ss : [esp+0x90], esi
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_62ac057
        public_62abee8 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0xF4]
        cmp ax, word ptr ds : [public_63a4aa6]
        jne public_62ac037
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x30]
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
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62abf43
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62abf43 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x58]
        push eax
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push 1
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x70], edx
        call public_62a0ee0
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62abfa4
        fstp dword ptr ss : [esp+0x18]
        jmp public_62abfa6
        public_62abfa4 : nop
        fstp st(0)
        public_62abfa6 : nop
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62abfc1
        fstp dword ptr ss : [esp+0x14]
        jmp public_62abfc3
        public_62abfc1 : nop
        fstp st(0)
        public_62abfc3 : nop
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62abfde
        fstp dword ptr ss : [esp+0x20]
        jmp public_62abfe0
        public_62abfde : nop
        fstp st(0)
        public_62abfe0 : nop
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62abffb
        fstp dword ptr ss : [esp+0x1C]
        jmp public_62abffd
        public_62abffb : nop
        fstp st(0)
        public_62abffd : nop
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62ac018
        fstp dword ptr ss : [esp+0x28]
        jmp public_62ac01a
        public_62ac018 : nop
        fstp st(0)
        public_62ac01a : nop
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_62ac035
        fstp dword ptr ss : [esp+0x24]
        jmp public_62ac037
        public_62ac035 : nop
        fstp st(0)
        public_62ac037 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_62abee8
        public_62ac057 : nop
        fld dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x18]
        mov edx, esi
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x54]
        fxch 
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x8C]
        fcom dword ptr ss : [esp+0x8C]
        fnstsw ax
        test ah, 0x41
        jne public_62ac0dd
        fld st(0)
        jmp public_62ac0e4
        public_62ac0dd : nop
        fld dword ptr ss : [esp+0x8C]
        public_62ac0e4 : nop
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_62ac114
        fcom dword ptr ss : [esp+0x8C]
        fnstsw ax
        test ah, 0x41
        je public_62ac11a
        fstp st(0)
        fld dword ptr ss : [esp+0x8C]
        jmp public_62ac11a
        public_62ac114 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        public_62ac11a : nop
        fmul dword ptr ds : [public_639c13c]
        mov edx, dword ptr ss : [esp+0x88]
        fld st(0)
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x48]
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
        fadd dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x8C]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62ac176
        mov ecx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [edx], ecx
        public_62ac176 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ss : [esp+0x70]
        cmp ecx, edi
        je public_62ac1c9
        add ecx, 8
        public_62ac185 : nop
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
        jne public_62ac1bd
        fstp dword ptr ds : [edx]
        jmp public_62ac1bf
        public_62ac1bd : nop
        fstp st(0)
        public_62ac1bf : nop
        add ecx, 0x10
        lea eax, ds:[ecx-8]
        cmp eax, edi
        jne public_62ac185
        public_62ac1c9 : nop
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62ac1dc
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62ac1dc : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+4], ecx
        push eax
        mov dword ptr ds : [esi+8], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x7C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x62abde0)
    }
}

#undef public_62abe33
#undef public_62abee8
#undef public_62abf43
#undef public_62abfa4
#undef public_62abfa6
#undef public_62abfc1
#undef public_62abfc3
#undef public_62abfde
#undef public_62abfe0
#undef public_62abffb
#undef public_62abffd
#undef public_62ac018
#undef public_62ac01a
#undef public_62ac035
#undef public_62ac037
#undef public_62ac057
#undef public_62ac0dd
#undef public_62ac0e4
#undef public_62ac114
#undef public_62ac11a
#undef public_62ac176
#undef public_62ac185
#undef public_62ac1bd
#undef public_62ac1bf
#undef public_62ac1c9
#undef public_62ac1dc
