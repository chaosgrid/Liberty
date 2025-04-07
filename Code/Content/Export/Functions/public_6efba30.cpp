#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6680);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b80);
CLANG_FORWARD_PROC_SYMBOL(public_6efba30);
CLANG_FORWARD_PROC_SYMBOL(public_6efc860);
CLANG_FORWARD_PROC_SYMBOL(public_6efc8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f31910);
CLANG_FORWARD_PROC_SYMBOL(public_6f319b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f319d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33500);
CLANG_FORWARD_PROC_SYMBOL(public_6f348f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f35890);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f580d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73810);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac910);

#define public_6efba90 _public_6efba90
#define public_6efbac7 _public_6efbac7
#define public_6efbad0 _public_6efbad0
#define public_6efbb10 _public_6efbb10
#define public_6efbb45 _public_6efbb45
#define public_6efbb48 _public_6efbb48
#define public_6efbb4e _public_6efbb4e
#define public_6efbb8e _public_6efbb8e
#define public_6efbb91 _public_6efbb91
#define public_6efbbde _public_6efbbde
#define public_6efbc82 _public_6efbc82
#define public_6efbcb8 _public_6efbcb8
#define public_6efbd06 _public_6efbd06
#define public_6efbd13 _public_6efbd13
#define public_6efbd30 _public_6efbd30
#define public_6efbd57 _public_6efbd57
#define public_6efbdb0 _public_6efbdb0
#define public_6efbe30 _public_6efbe30
#define public_6efbe65 _public_6efbe65
#define public_6efbe68 _public_6efbe68
#define public_6efbe6d _public_6efbe6d
#define public_6efbe80 _public_6efbe80
#define public_6efbe85 _public_6efbe85
#define public_6efbe88 _public_6efbe88
#define public_6efbf06 _public_6efbf06
#define public_6efbf21 _public_6efbf21
#define public_6efbf58 _public_6efbf58
#define public_6efc02b _public_6efc02b
#define public_6efc0a0 _public_6efc0a0
#define public_6efc0c4 _public_6efc0c4
#define public_6efc18e _public_6efc18e
#define public_6efc1d4 _public_6efc1d4
#define public_6efc1d6 _public_6efc1d6
#define public_6efc1f1 _public_6efc1f1

PROC_DECLARE(0x6efba30, internal_6efba30, public_6efba30);
extern "C" NAKED register_t __cdecl internal_6efba30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac910 @0x6efba32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac910
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x680
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        push edi
        xor bl, bl
        call public_6f478c0
        test eax, eax
        mov dword ptr ss : [esp+0x54], eax
        je public_6efc1d4
        lea eax, ss:[esp+0x28]
        lea esi, ss:[ebp+0x44]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], eax
        je public_6efbac7
        lea esp, ss:[esp]
        public_6efba90 : nop
        fld dword ptr ss : [esp+0x10]
        push 0
        fadd dword ptr ds : [eax+0x2C]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jne public_6efba90
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6efbad0
        public_6efbac7 : nop
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6efbb4e
        public_6efbad0 : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6efbb45
        nop 
        public_6efbb10 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnp public_6efbb48
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, eax
        jne public_6efbb10
        public_6efbb45 : nop
        mov ecx, dword ptr ds : [esi+4]
        public_6efbb48 : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ecx
        public_6efbb4e : nop
        cmp edi, dword ptr ss : [ebp+0x48]
        je public_6efc1d4
        mov eax, dword ptr ss : [esp+0x6A4]
        cmp eax, 0xFFFFFFFF
        jne public_6efbb8e
        mov esi, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ds : [edi+0x14]
        call dword ptr ds : [public_6fb3370]
        sub esi, edi
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x10]
        sar eax, 0xF
        add eax, edi
        mov dword ptr ds : [edx+0x1C], eax
        mov edi, edx
        jmp public_6efbb91
        public_6efbb8e : nop
        mov dword ptr ds : [edi+0x1C], eax
        public_6efbb91 : nop
        mov al, byte ptr ss : [esp+0x17]
        xor esi, esi
        push esi
        push esi
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x38], al
        call public_6ef6b80
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], esi
        mov ecx, dword ptr ds : [edi+0x1C]
        add dword ptr ss : [ebp+0x34], ecx
        cmp dword ptr ds : [edi+0x1C], esi
        mov dword ptr ss : [esp+0x698], esi
        mov dword ptr ss : [esp+0x1C], esi
        jle public_6efc18e
        mov eax, dword ptr ss : [esp+0x6B8]
        mov ebx, dword ptr ds : [public_6fb3034]
        and eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x50], eax
        public_6efbbde : nop
        mov esi, dword ptr ss : [esp+0x6A0]
        lea ecx, ss:[esp+0x18C]
        call public_6f33500
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x698], 1
        call public_6eac680
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0x698], 2
        call public_6eac680
        mov dword ptr ss : [esp+0x104], 0
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        mov edi, dword ptr ss : [esp+0x6B0]
        test edi, edi
        mov byte ptr ss : [esp+0x698], 3
        jne public_6efbc82
        mov edx, dword ptr ss : [ebp+0x9C]
        push edx
        lea eax, ss:[esp+0x130]
/*FIXUP push offset public_6fb7b2c @0x6efbc50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b2c
        push eax
        call dword ptr ds : [public_6fb3360]
        mov ecx, dword ptr ss : [ebp+0x9C]
        add esp, 0xC
        inc ecx
        mov dword ptr ss : [ebp+0x9C], ecx
        lea ecx, ss:[esp+0x12C]
        push ecx
        lea ecx, ss:[esp+0x198]
        call public_6ed0160
        jmp public_6efbcb8
        public_6efbc82 : nop
        lea edx, ss:[esp+0x98]
        push edx
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x198]
        call public_6ed0160
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        push eax
        lea eax, ss:[esp+0x88]
        push eax
        mov ecx, edi
        call public_6ecfe80
        public_6efbcb8 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[esi+0x24]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1F8], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x240], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x50]
        test eax, eax
        mov dword ptr ss : [esp+0x244], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x21C]
        mov dword ptr ss : [esp+0x248], edx
        rep movsd
        jne public_6efbd06
        mov eax, dword ptr ds : [public_6fb7ae0]
        mov dword ptr ss : [esp+0x290], eax
        jmp public_6efbd13
        public_6efbd06 : nop
        mov ecx, dword ptr ds : [public_6fb7adc]
        mov dword ptr ss : [esp+0x290], ecx
        public_6efbd13 : nop
        mov edx, dword ptr ss : [esp+0x6B4]
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0x1FC], edx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6efbd57
        lea ebx, ds:[ebx]
        public_6efbd30 : nop
        lea eax, ds:[esi+8]
        push eax
        mov eax, dword ptr ss : [esp+0x2AC]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x2B0]
        call public_6f1e390
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x20]
        jne public_6efbd30
        public_6efbd57 : nop
        lea edx, ss:[esp+0x42]
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x6AC]
        test eax, eax
        mov byte ptr ss : [esp+0x698], 4
        jne public_6efbe6d
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x8C]
        lea esi, ds:[eax+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], eax
        je public_6efbe65
        lea esp, ss:[esp]
        public_6efbdb0 : nop
        fld dword ptr ss : [esp+0x18]
        push 0
        fadd dword ptr ds : [eax+0x18]
        lea edx, ss:[esp+0x94]
        push edx
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jne public_6efbdb0
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6efbe65
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x3C], eax
        fild dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x88]
        push eax
        mov ecx, esi
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6efbe65
        lea esp, ss:[esp]
        public_6efbe30 : nop
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jnp public_6efbe68
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f68e30
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        jne public_6efbe30
        public_6efbe65 : nop
        mov ecx, dword ptr ds : [esi+4]
        public_6efbe68 : nop
        lea eax, ds:[ecx+8]
        jmp public_6efbe88
        public_6efbe6d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        jle public_6efbe85
        lea ebx, ds:[ebx]
        public_6efbe80 : nop
        dec ecx
        mov eax, dword ptr ds : [eax]
        jne public_6efbe80
        public_6efbe85 : nop
        add eax, 8
        public_6efbe88 : nop
        lea ecx, ss:[esp+0x68]
        push eax
        call public_6eb6560
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb3030]
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_6f580d0
        add esp, 8
        lea ecx, ss:[esp+0x43]
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_6ead6a0
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x69C], 5
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x60]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jne public_6efbf06
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_6eae440
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x78], eax
        mov byte ptr ss : [esp+0x7C], 1
        jmp public_6efbf21
        public_6efbf06 : nop
        lea edx, ss:[esp+0x17]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1F], 0
        call public_6fa6e80
        public_6efbf21 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        or edi, 0xFFFFFFFF
        push edi
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edx
        call public_6f35890
        mov esi, eax
        add esp, 0xC
        test esi, esi
        jne public_6efbf58
        mov ecx, dword ptr ss : [ebp+0x14]
        push edi
        lea eax, ss:[esp+0x6C]
        push eax
        push ecx
        call public_6f35890
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_6efc1f1
        public_6efbf58 : nop
        lea ecx, ss:[esp+0x9C]
        call public_6eac680
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x698], 6
        call public_6eac680
        mov dword ptr ss : [esp+0xCC], 0
        mov dword ptr ss : [esp+0xD0], edi
        lea ecx, ss:[esp+0x10C]
        mov byte ptr ss : [esp+0x698], 7
        call public_6f31650
        mov eax, dword ptr ss : [ebp+0x14]
        lea edx, ss:[esp+0x9C]
        push edx
        push eax
        call public_6f319b0
        add esp, 8
        push 1
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea ecx, ss:[esp+0x174]
        call public_6f31650
        mov edx, dword ptr ss : [ebp+0x14]
        push eax
        push edx
        call public_6f319d0
        add esp, 0x10
        test al, al
        je public_6efc02b
        mov ecx, dword ptr ss : [esp+0xCC]
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ss:[esp+0x18C]
        push eax
        push ecx
        push edx
        call public_6f34a80
        push 0
        push 0
        lea eax, ss:[esp+0x1A0]
        push esi
        push eax
        call public_6f348f0
        add esp, 0x1C
        lea ecx, ss:[esp+0x18C]
        call public_6f28e10
        lea ecx, ss:[esp+0x18C]
        push ecx
        lea edx, ss:[esp+0xA0]
        push edx
        call public_6f31910
        add esp, 8
        public_6efc02b : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x68C], eax
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x698], 8
        call ebx
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x698], 5
        call ebx
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        jne public_6efc0c4
        lea ecx, ss:[esp+0x1EC]
        call public_6ed2a00
        mov ecx, dword ptr ss : [esp+0x6A8]
        push ecx
        lea ecx, ss:[esp+0x1F0]
        call public_6f93490
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x1F0]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, dword ptr ss : [esp+0x1F0]
        je public_6efc0c4
        lea ecx, ds:[ecx]
        public_6efc0a0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, dword ptr ss : [esp+0x1F0]
        jne public_6efc0a0
        public_6efc0c4 : nop
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x18C]
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6efc860
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x698], 4
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x698], 3
        call public_6eec8d0
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0x698], 0xD
        call ebx
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x698], 1
        call ebx
        lea ecx, ss:[esp+0x2A4]
        mov byte ptr ss : [esp+0x698], 0x10
        call public_6f15350
        lea ecx, ss:[esp+0x288]
        mov byte ptr ss : [esp+0x698], 0xF
        call public_6f28e10
        lea ecx, ss:[esp+0x20C]
        mov byte ptr ss : [esp+0x698], 0xE
        call public_6eec8d0
        lea ecx, ss:[esp+0x18C]
        mov byte ptr ss : [esp+0x698], 0
        call public_6ef4ab0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x1C]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], esi
        jl public_6efbbde
        mov edi, edx
        xor esi, esi
        public_6efc18e : nop
        mov edx, dword ptr ss : [esp+0x6A0]
        mov eax, dword ptr ds : [edi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6f66c80
        mov edx, dword ptr ss : [esp+0x6C4]
        mov ecx, dword ptr ss : [esp+0x60]
        add esp, 0xC
        push esi
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_6f73810
        lea ecx, ss:[esp+0x30]
        mov bl, 1
        mov dword ptr ss : [esp+0x698], 0xFFFFFFFF
        call public_6ef6680
        public_6efc1d4 : nop
        mov al, bl
        public_6efc1d6 : nop
        mov ecx, dword ptr ss : [esp+0x690]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68C
        ret 0x1C
        public_6efc1f1 : nop
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x698], 4
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x698], 3
        call public_6eec8d0
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0x698], 9
        call ebx
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x698], 1
        call ebx
        lea ecx, ss:[esp+0x2A4]
        mov byte ptr ss : [esp+0x698], 0xC
        call public_6f15350
        lea ecx, ss:[esp+0x288]
        mov byte ptr ss : [esp+0x698], 0xB
        call public_6f28e10
        lea ecx, ss:[esp+0x20C]
        mov byte ptr ss : [esp+0x698], 0xA
        call public_6eec8d0
        lea ecx, ss:[esp+0x18C]
        mov byte ptr ss : [esp+0x698], 0
        call public_6ef4ab0
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x69C], edi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6efc8c0
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_6fa8fe0
        add esp, 4
        xor al, al
        jmp public_6efc1d6
        UNREACHABLE_TRAP(0x6efba30)
    }
}

#undef public_6efba90
#undef public_6efbac7
#undef public_6efbad0
#undef public_6efbb10
#undef public_6efbb45
#undef public_6efbb48
#undef public_6efbb4e
#undef public_6efbb8e
#undef public_6efbb91
#undef public_6efbbde
#undef public_6efbc82
#undef public_6efbcb8
#undef public_6efbd06
#undef public_6efbd13
#undef public_6efbd30
#undef public_6efbd57
#undef public_6efbdb0
#undef public_6efbe30
#undef public_6efbe65
#undef public_6efbe68
#undef public_6efbe6d
#undef public_6efbe80
#undef public_6efbe85
#undef public_6efbe88
#undef public_6efbf06
#undef public_6efbf21
#undef public_6efbf58
#undef public_6efc02b
#undef public_6efc0a0
#undef public_6efc0c4
#undef public_6efc18e
#undef public_6efc1d4
#undef public_6efc1d6
#undef public_6efc1f1
