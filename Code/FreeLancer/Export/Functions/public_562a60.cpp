#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_562a60);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_579870);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57be30);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1dd4);

#define public_562c38 _public_562c38
#define public_562c45 _public_562c45
#define public_562d7d _public_562d7d
#define public_562e14 _public_562e14
#define public_562e77 _public_562e77
#define public_562ea7 _public_562ea7
#define public_562ec3 _public_562ec3
#define public_562f05 _public_562f05
#define public_562f0c _public_562f0c

PROC_DECLARE(0x562a60, internal_562a60, public_562a60);
extern "C" NAKED register_t __cdecl internal_562a60()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c1dd4 @0x562a68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1dd4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2038
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov edx, dword ptr ds : [public_6148c8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x205C]
        mov eax, dword ptr ds : [edi+4]
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi]
        push edx
        mov esi, ecx
        fxch 
        mov ecx, eax
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x2C]
/*FIXUP push offset public_5e20cc @0x562aaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e20cc
        push eax
        mov dword ptr ss : [esp+0x20], 0x3C449BA6
        mov dword ptr ss : [esp+0x24], 0x3C449BA6
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x38], ecx
        call public_402180
        mov ecx, dword ptr ds : [edi+0x1C]
        add esp, 0xC
        push ecx
        push ecx
        mov ebp, dword ptr ss : [esp+0x2060]
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebx
        lea edx, ss:[esp+0x44]
        push edx
        push ebx
/*FIXUP push offset public_5d4e48 @0x562af7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e48
/*FIXUP push offset public_5cb0d0 @0x562afc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
/*FIXUP push offset public_5d4e20 @0x562b01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e20
        push eax
        mov ecx, ebp
        call public_5a0fb0
        push ebx
        push 1
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        push 0x35
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6148c8]
        push eax
        lea ecx, ss:[esp+0x4C]
/*FIXUP push offset public_5e20bc @0x562b29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e20bc
        push ecx
        call public_402180
        push ebx
        push ebp
/*FIXUP push offset public_5cf24c @0x562b36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
        push eax
        call public_59db20
        mov dl, byte ptr ss : [esp+0x3F]
        add esp, 0x1C
        push ebx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ss : [esp+0x1C], dl
        call public_42a7e0
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ds : [edi+0x18]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x2058], ebx
        call public_57da40
        mov ecx, dword ptr ds : [esi+4]
        add esp, 8
        call public_57b370
        mov ebx, dword ptr ds : [public_5c62b8]
        push 0x5724
        lea ecx, ss:[esp+0x28]
        call ebx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        mov byte ptr ss : [esp+0x2054], 1
        call public_57b470
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x2050], 0
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        call public_57b3e0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2050], 0xFFFFFFFF
        call public_46ba90
        fld dword ptr ds : [edi+0xC]
        fld dword ptr ds : [public_5e207c]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0x20]
        fadd dword ptr ds : [edi]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ss : [ebp+0xB0]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [ebp+0xAC]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x14]
        push eax
        call public_579c40
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        je public_562c38
        mov ecx, dword ptr ds : [public_5e207c]
        mov edx, dword ptr ds : [public_5e2080]
        push ecx
        push edx
        jmp public_562c45
        public_562c38 : nop
        mov eax, dword ptr ds : [public_5e207c]
        mov ecx, dword ptr ds : [public_5e2084]
        push eax
        push ecx
        public_562c45 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_579cc0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+4]
        push 2
        call public_579a60
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        je public_562f05
        mov edx, dword ptr ds : [public_6148c8]
        push edx
        lea eax, ss:[esp+0x4C]
/*FIXUP push offset public_5e20ac @0x562c88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e20ac
        push eax
        call public_402180
        push 0
        push ebp
/*FIXUP push offset public_5d08ac @0x562c96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08ac
        push eax
        call public_59db20
        mov dword ptr ds : [esi+8], eax
        fld dword ptr ds : [edi+0x10]
        fld dword ptr ds : [public_5e207c]
        add esp, 0x10
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0x20]
        fadd dword ptr ds : [edi]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ss : [ebp+0xB0]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [ebp+0xAC]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_579c40
        mov edx, dword ptr ds : [public_5e207c]
        mov eax, dword ptr ds : [public_5e20a0]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        call public_579cc0
        mov ecx, dword ptr ds : [esi+8]
        push 1
        call public_57bdd0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        call public_57be30
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x2050], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x500]
        add ecx, 0x4FC
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        mov byte ptr ss : [esp+0x205C], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2050], 2
        je public_562d7d
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_562d7d : nop
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2050], ebx
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x2050], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [edi+0x4E0]
        mov eax, dword ptr ss : [ebp+4]
        add edi, 0x4DC
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x2058], 5
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2050], 4
        je public_562e14
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_562e14 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2050], ebx
        call dword ptr ds : [public_5c62bc]
        push ebx
/*FIXUP push offset public_5cef90 @0x562e26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x2050], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [edi+0x4E0]
        mov ebx, dword ptr ss : [ebp+4]
        add edi, 0x4DC
        push 0xC
        mov byte ptr ss : [esp+0x2054], 7
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], ebp
        jne public_562e77
        mov ebx, eax
        public_562e77 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x24], ebx
        test ebx, ebx
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x2050], 8
        je public_562ea7
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ebx], eax
        public_562ea7 : nop
        mov ecx, dword ptr ds : [edi+8]
        inc ecx
        test ebp, ebp
        mov dword ptr ds : [edi+8], ecx
        mov byte ptr ss : [esp+0x2050], 6
        je public_562ec3
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_562ec3 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x2050], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ds : [esi+8]
        push 4
        call public_57bdb0
        mov ecx, dword ptr ds : [esi+8]
        push 1
        call public_579860
        mov ecx, dword ptr ds : [esi+8]
/*FIXUP push offset public_679bb4 @0x562eef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_579870
        mov ecx, dword ptr ds : [esi+8]
        push 2
        call public_579a60
        jmp public_562f0c
        public_562f05 : nop
        mov dword ptr ds : [esi+8], 0
        public_562f0c : nop
        mov eax, dword ptr ds : [public_6148c8]
        mov ecx, dword ptr ss : [esp+0x2048]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [public_6148c8], eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2044
        ret 8
        UNREACHABLE_TRAP(0x562a60)
    }
}

#undef public_562c38
#undef public_562c45
#undef public_562d7d
#undef public_562e14
#undef public_562e77
#undef public_562ea7
#undef public_562ec3
#undef public_562f05
#undef public_562f0c
