#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f61350);
CLANG_FORWARD_PROC_SYMBOL(public_6f61570);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f61cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafb0b);

#define public_6f61dab _public_6f61dab
#define public_6f61dad _public_6f61dad
#define public_6f61db1 _public_6f61db1
#define public_6f61df3 _public_6f61df3
#define public_6f61df5 _public_6f61df5
#define public_6f61e16 _public_6f61e16
#define public_6f61e61 _public_6f61e61
#define public_6f61e98 _public_6f61e98
#define public_6f61ea0 _public_6f61ea0
#define public_6f61f41 _public_6f61f41
#define public_6f61f55 _public_6f61f55
#define public_6f61f73 _public_6f61f73
#define public_6f61fa8 _public_6f61fa8
#define public_6f61fb2 _public_6f61fb2
#define public_6f61fc5 _public_6f61fc5
#define public_6f61feb _public_6f61feb
#define public_6f61ff3 _public_6f61ff3
#define public_6f61ff5 _public_6f61ff5
#define public_6f620a6 _public_6f620a6
#define public_6f620a8 _public_6f620a8
#define public_6f620cd _public_6f620cd
#define public_6f620f3 _public_6f620f3

PROC_DECLARE(0x6f61cb0, internal_6f61cb0, public_6f61cb0);
extern "C" NAKED register_t __cdecl internal_6f61cb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafb0b @0x6f61cb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafb0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xCCC
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xDC]
        push eax
        lea ecx, ss:[esp+0xD10]
        push ecx
        lea edx, ss:[esp+0xD08]
        push edx
        call public_6f61570
        mov al, byte ptr ss : [esp+0x1F]
        xor edi, edi
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        push 0x800
        mov dword ptr ss : [esp+0xCF4], edi
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 0x10
        mov esi, eax
        push esi
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6ed2700
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6fa8fe0
        lea eax, ds:[esi+0x800]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        call public_6eae300
        fld dword ptr ss : [esp+0xD20]
        fmul qword ptr ds : [public_6fb74e0]
        lea ecx, ds:[esi+eax*8]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], esi
        fstp qword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], edi
        fld dword ptr ss : [esp+0xD14]
        mov byte ptr ss : [esp+0x12], 1
        fadd qword ptr ss : [esp+0x2C]
        mov byte ptr ss : [esp+0x1B], 1
        mov byte ptr ss : [esp+0x1A], 0
        mov byte ptr ss : [esp+0x13], 1
        fstp qword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0xDC]
        jmp public_6f61dad
        public_6f61dab : nop
        xor edi, edi
        public_6f61dad : nop
        xor esi, esi
        mov edi, eax
        public_6f61db1 : nop
        mov ecx, dword ptr ss : [esp+0xD24]
        mov edx, edi
        mov ebp, dword ptr ds : [edx]
        mov eax, ecx
        mov dword ptr ds : [eax], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], edx
        fld dword ptr ds : [ecx+4]
        fcomp qword ptr ss : [esp+0x34]
        mov bl, 1
        fnstsw ax
        test ah, 0x41
        je public_6f61df3
        fld dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xD14]
        fsub qword ptr ss : [esp+0x2C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f61df5
        public_6f61df3 : nop
        xor bl, bl
        public_6f61df5 : nop
        lea eax, ss:[esp+0x12]
        push eax
        mov eax, dword ptr ss : [esp+0xCF4]
        lea edx, ss:[esp+0x1F]
        push edx
        push eax
        push ecx
        call public_6f616e0
        add esp, 0x10
        test al, al
        jne public_6f61e16
        xor bl, bl
        public_6f61e16 : nop
        mov eax, dword ptr ss : [esp+0xCEC]
        lea ecx, ss:[esp+0x1A]
        push ecx
        mov ecx, dword ptr ss : [esp+0xD28]
        lea edx, ss:[esp+0x17]
        push edx
        push eax
        push ecx
        call public_6f616e0
        add esp, 0x10
        test al, al
        je public_6f61e61
        test bl, bl
        je public_6f61e61
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], esi
        call public_6f96770
        public_6f61e61 : nop
        inc esi
        add edi, 0xC
        cmp esi, 0x10
        jb public_6f61db1
        mov ecx, dword ptr ss : [esp+0x14]
        inc ecx
        cmp ecx, 0x10
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, edi
        jb public_6f61dab
        mov esi, dword ptr ss : [esp+0xD28]
        mov ebp, dword ptr ss : [esp+0xD24]
        xor bl, bl
        mov byte ptr ss : [esp+0x12], bl
        jmp public_6f61ea0
        public_6f61e98 : nop
        mov bl, byte ptr ss : [esp+0x12]
        lea esp, ss:[esp]
        public_6f61ea0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6f620f3
        mov edi, dword ptr ss : [esp+0x24]
        sub edi, eax
        sar edi, 3
        test edi, edi
        je public_6f620f3
        test bl, bl
        jne public_6f620f3
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        dec edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], 0
        fmul dword ptr ds : [public_6fb4448]
        sub esp, 8
        fild qword ptr ss : [esp+0x3C]
        fmulp 
        fadd qword ptr ds : [public_6fb74e0]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        add esp, 8
        call public_6fa9130
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx+eax*8]
        mov edi, dword ptr ds : [edx+eax*8+4]
        shl ecx, 4
        add ecx, edi
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ss:[esp+ecx*4+0xDC]
        mov ebx, dword ptr ds : [ecx]
        mov edi, ebp
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ecx
        mov edi, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx+eax*8+8]
        cmp eax, edi
        je public_6f61f55
        lea ecx, ds:[eax-8]
        public_6f61f41 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, edi
        jne public_6f61f41
        public_6f61f55 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0xCF8]
        sub ecx, 8
        test ebx, ebx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f61fb2
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f61fb2
        public_6f61f73 : nop
        fld dword ptr ss : [esp+0xCFC]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f61fa8
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        call dword ptr ds : [public_6fb3550]
        fcomp dword ptr ss : [esp+0xD04]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        je public_6f61e98
        public_6f61fa8 : nop
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6f61f73
        public_6f61fb2 : nop
        mov ebx, dword ptr ss : [esp+0xCF4]
        test ebx, ebx
        je public_6f61feb
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f61feb
        public_6f61fc5 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ebp
        push edx
        call dword ptr ds : [public_6fb34b8]
        fcomp qword ptr ds : [public_6fb70c0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jnp public_6f61feb
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6f61fc5
        public_6f61feb : nop
        mov dword ptr ss : [esp+0x14], 1
        public_6f61ff3 : nop
        xor edi, edi
        public_6f61ff5 : nop
        mov eax, dword ptr ss : [esp+0xD20]
        mov ecx, dword ptr ss : [esp+0xD1C]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call dword ptr ds : [public_6fb3238]
        fld dword ptr ss : [esp+0xD1C]
        fadd dword ptr ds : [eax]
        add esp, 0xC
        inc edi
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0xD14]
        mov ecx, dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0xD18]
        mov edx, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+8]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], edx
        call public_6f5a7e0
        test al, al
        mov ebx, dword ptr ss : [esp+0xD2C]
        je public_6f620cd
        mov eax, dword ptr ds : [ebx+0x48]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0x7FFDFF
        push 0x43480000
        push esi
        push 0x20
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x50], eax
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 0x1C
        test eax, eax
        je public_6f620cd
        cmp edi, 3
        jbe public_6f61ff5
        public_6f620a6 : nop
        xor bl, bl
        public_6f620a8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc ecx
        test bl, bl
        mov byte ptr ss : [esp+0x12], bl
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f61ea0
        mov eax, ecx
        cmp eax, 3
        jb public_6f61ff3
        jmp public_6f61ea0
        public_6f620cd : nop
        cmp edi, 3
        ja public_6f620a6
        push ebx
        push ebp
        push esi
        call public_6f60e10
        add esp, 0xC
        test al, al
        je public_6f620a6
        push ebx
        push ebp
        call public_6f61350
        add esp, 8
        test al, al
        je public_6f620a6
        mov bl, 1
        jmp public_6f620a8
        public_6f620f3 : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xCE0]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xCD8
        ret 
        UNREACHABLE_TRAP(0x6f61cb0)
    }
}

#undef public_6f61dab
#undef public_6f61dad
#undef public_6f61db1
#undef public_6f61df3
#undef public_6f61df5
#undef public_6f61e16
#undef public_6f61e61
#undef public_6f61e98
#undef public_6f61ea0
#undef public_6f61f41
#undef public_6f61f55
#undef public_6f61f73
#undef public_6f61fa8
#undef public_6f61fb2
#undef public_6f61fc5
#undef public_6f61feb
#undef public_6f61ff3
#undef public_6f61ff5
#undef public_6f620a6
#undef public_6f620a8
#undef public_6f620cd
#undef public_6f620f3
