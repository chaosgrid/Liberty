#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4cf6a0);
CLANG_FORWARD_PROC_SYMBOL(public_55a360);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_58b770);
CLANG_FORWARD_PROC_SYMBOL(public_59e980);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_4cf6b1 _public_4cf6b1
#define public_4cf736 _public_4cf736
#define public_4cf872 _public_4cf872
#define public_4cfbf0 _public_4cfbf0
#define public_4cfc15 _public_4cfc15
#define public_4cfc52 _public_4cfc52
#define public_4cfc79 _public_4cfc79
#define public_4cfc89 _public_4cfc89
#define public_4cfc95 _public_4cfc95
#define public_4cfc9f _public_4cfc9f
#define public_4cfca8 _public_4cfca8
#define public_4cfcd1 _public_4cfcd1
#define public_4cfd33 _public_4cfd33
#define public_4cfd5a _public_4cfd5a
#define public_4cfd6a _public_4cfd6a
#define public_4cfd76 _public_4cfd76
#define public_4cfd80 _public_4cfd80
#define public_4cfd89 _public_4cfd89
#define public_4cfdaf _public_4cfdaf

PROC_DECLARE(0x4cf6a0, internal_4cf6a0, public_4cf6a0);
extern "C" NAKED register_t __cdecl internal_4cf6a0()
{
    __asm
    {
        sub esp, 0x128
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov esi, offset public_612438
        public_4cf6b1 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, offset public_67dcf4
        call public_59e980
        add esi, 4
        cmp esi, offset public_612478
        jl public_4cf6b1
        push 1
        push 0
        push 1
        push 0x60D
        push 0x3FD9999A
        push 0x3C75C28F
        push 0x3E89BA5E
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ce91c @0x4cf6ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d7be0 @0x4cf6f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7be0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBE418937
        mov dword ptr ss : [esp+0x40], 0x3D3020C5
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov ebx, dword ptr ds : [public_5c71e8]
        mov dword ptr ss : [ebp+0x410], eax
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        xor edi, edi
        mov byte ptr ds : [eax+0x6C], cl
        mov dword ptr ss : [esp+0x1C], edi
        lea esi, ss:[ebp+0x3B4]
        public_4cf736 : nop
        push edi
/*FIXUP push offset public_5d7bc8 @0x4cf737*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7bc8
        lea edx, ss:[esp+0x40]
        push 0x100
        push edx
        call ebx
        fild dword ptr ss : [esp+0x2C]
        add esp, 0x10
        push 0
        fmul dword ptr ds : [public_5d3ee8]
        push 0
        push 1
        push 0
        fsubr dword ptr ds : [public_5d7bc4]
        push 0x3F666666
        push 0x3C75C28F
        push 0x3D3020C5
        push 0
        fst dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [public_5d7bc0]
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_5d4ddc @0x4cf783*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+0x4C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0xBE010625
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi-0x20], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push edi
/*FIXUP push offset public_5d7ba8 @0x4cf7bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7ba8
        lea eax, ss:[esp+0x40]
        push 0x100
        push eax
        call ebx
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [public_5d7960]
        fadd dword ptr ds : [public_5d1f04]
        mov edx, dword ptr ds : [public_5d795c]
        add esp, 0x10
        push 1
        fstp dword ptr ss : [esp+0x18]
        push 0
        push 0
        push 0
        push ecx
        push 0x3C9374BC
        push edx
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d4ddc @0x4cf800*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBDDB22D1
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], eax
        add eax, 0x2D4
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x24
        call dword ptr ds : [eax+0xA8]
        push 1
        mov ecx, dword ptr ds : [esi]
        call public_58b770
        inc edi
        add esi, 4
        cmp edi, 8
        mov dword ptr ss : [esp+0x1C], edi
        jl public_4cf736
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        lea edi, ss:[ebp+0x374]
        public_4cf872 : nop
        push esi
/*FIXUP push offset public_5d7b94 @0x4cf873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b94
        lea ecx, ss:[esp+0x40]
        push 0x100
        push ecx
        call ebx
        fild dword ptr ss : [esp+0x2C]
        add esp, 0x10
        push 0
        fmul dword ptr ds : [public_5d3ee8]
        push 0
        push 1
        push 0
        fsubr dword ptr ds : [public_5d7b90]
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x30]
        push edx
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        push 0
/*FIXUP push offset public_5ced30 @0x4cf8b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d7b68 @0x4cf8be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b68
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x5C], 0x3BC49BA6
        mov dword ptr ss : [esp+0x60], 0x3BC49BA6
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0xBE2E147B
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        inc esi
        mov dword ptr ds : [edi], eax
        add edi, 4
        cmp esi, 8
        mov dword ptr ss : [esp+0x1C], esi
        jl public_4cf872
        push 0
        push 0
        push 0x623
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x4cf929*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d7b40 @0x4cf930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b40
/*FIXUP push offset public_5d7b28 @0x4cf935*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b28
        mov ecx, ebp
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0x3C656042
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0xBE03126F
        mov dword ptr ss : [esp+0x50], 0x3CC49BA6
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 0
        push 0
        push 0x4FC
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x4cf990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d7930 @0x4cf997*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7930
/*FIXUP push offset public_5d7b14 @0x4cf99c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b14
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x3EC], eax
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0x3C656042
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0xBDC08312
        mov dword ptr ss : [esp+0x50], 0x3CC49BA6
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 0
        push 0
        push 0x4FD
        push 0
        push 0
        push 1
        push 0
        mov dword ptr ss : [ebp+0x3F0], eax
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x4cfa03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d78e4 @0x4cfa0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d78e4
/*FIXUP push offset public_5d7b00 @0x4cfa0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7b00
        mov ecx, ebp
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0x3C656042
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0xBD75C28F
        mov dword ptr ss : [esp+0x50], 0x3CC49BA6
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x3F4], eax
        mov dword ptr ss : [esp+0x20], 0x3C656042
        mov dword ptr ss : [esp+0x24], 0x3C656042
        mov dword ptr ss : [esp+0x28], 0
        push 0
        push 0
        push 0x520
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x4cfa88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d77ac @0x4cfa8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d77ac
/*FIXUP push offset public_5d7aec @0x4cfa94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7aec
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], 0xBCD4FDF4
        mov dword ptr ss : [esp+0x50], 0x3CC49BA6
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        push 0
        push 0
        push 0x624
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x4cfad7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d7ac8 @0x4cfade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7ac8
/*FIXUP push offset public_5d7ab8 @0x4cfae3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7ab8
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x3F8], eax
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0x3C656042
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x4C], 0x3C03126F
        mov dword ptr ss : [esp+0x50], 0x3CC49BA6
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x3FC], eax
        mov esi, dword ptr ds : [eax]
        push 0
        call dword ptr ds : [public_5c60d0]
        mov ecx, dword ptr ss : [ebp+0x3FC]
        movzx eax, al
        push eax
        push 1
        call dword ptr ds : [esi+0xA8]
        push 0
        push 8
        push 5
        push 0
        push 0x3DF1A9FC
        push 0x3C83126F
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5d7aa4 @0x4cfb5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7aa4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], 0xBE88B439
        mov dword ptr ss : [esp+0x44], 0xBE6F9DB2
        mov dword ptr ss : [esp+0x48], 0xBF800000
        call public_5a17e0
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [ebp+0x3D4], eax
        sub esp, 0xC
        mov dword ptr ss : [esp+0x1C], 0xBEA56042
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esp
        mov dword ptr ss : [esp+0x20], 0xBE76C8B4
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], 0xBF800000
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[ebp+0x60]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x14]
        push 1
        mov ecx, ebp
        call public_5a0c30
        mov dword ptr ss : [esp+0x10], 0x1D
        mov dword ptr ss : [esp+0x14], 0x1E
        xor esi, esi
        lea edi, ss:[ebp+0x32C]
        mov edi, edi
        public_4cfbf0 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x10]
        push ecx
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 2
        jb public_4cfbf0
        mov esi, offset public_612438
        lea edx, ss:[ebp+0x330]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x30], edx
        public_4cfc15 : nop
        mov edi, dword ptr ds : [esi]
        mov al, byte ptr ss : [esp+0x2F]
        sub esp, 0x10
        mov ebx, esp
        xor edx, edx
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [ebx], al
        xor eax, eax
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        cmp edi, 0xFFFFFFFD
        mov dword ptr ss : [esp+0x20], esp
        mov dword ptr ss : [esp+0x20], edi
        jbe public_4cfc52
        call dword ptr ds : [public_5c7070]
        xor edx, edx
        public_4cfc52 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edx
        je public_4cfc79
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4cfc79
        cmp cl, 0xFF
        je public_4cfc79
        cmp edi, edx
        jne public_4cfc9f
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_4cfcd1
        public_4cfc79 : nop
        cmp edi, edx
        jne public_4cfc89
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_4cfcd1
        public_4cfc89 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_4cfc95
        cmp eax, edi
        jae public_4cfca8
        public_4cfc95 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        public_4cfc9f : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_5c7074]
        public_4cfca8 : nop
        mov esi, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_4cfcd1 : nop
        call public_55a360
        mov ecx, dword ptr ss : [esp+0x40]
        add esi, 4
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        add esp, 0x10
        cmp esi, offset public_612478
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x30], ecx
        jl public_4cfc15
        mov dl, byte ptr ss : [esp+0x2F]
        sub esp, 0x10
        xor esi, esi
        mov ebx, esp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d7a88
        mov byte ptr ds : [ebx], dl
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        cmp edi, 0xFFFFFFFD
        mov dword ptr ss : [esp+0x20], esp
        mov dword ptr ss : [esp+0x20], edi
        jbe public_4cfd33
        call dword ptr ds : [public_5c7070]
        public_4cfd33 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, esi
        je public_4cfd5a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4cfd5a
        cmp cl, 0xFF
        je public_4cfd5a
        cmp edi, esi
        jne public_4cfd80
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_4cfdaf
        public_4cfd5a : nop
        cmp edi, esi
        jne public_4cfd6a
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_4cfdaf
        public_4cfd6a : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_4cfd76
        cmp eax, edi
        jae public_4cfd89
        public_4cfd76 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        public_4cfd80 : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_5c7074]
        public_4cfd89 : nop
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr ecx, 2
        mov esi, offset public_5d7a88
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x20]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_4cfdaf : nop
        call public_55a360
        mov edx, dword ptr ss : [esp+0x150]
        add esp, 0x10
        mov dword ptr ss : [ebp+0x370], eax
        mov eax, dword ptr ss : [esp+0x13C]
        push edx
        push eax
        mov ecx, ebp
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x128
        ret 8
        UNREACHABLE_TRAP(0x4cf6a0)
    }
}

#undef public_4cf6b1
#undef public_4cf736
#undef public_4cf872
#undef public_4cfbf0
#undef public_4cfc15
#undef public_4cfc52
#undef public_4cfc79
#undef public_4cfc89
#undef public_4cfc95
#undef public_4cfc9f
#undef public_4cfca8
#undef public_4cfcd1
#undef public_4cfd33
#undef public_4cfd5a
#undef public_4cfd6a
#undef public_4cfd76
#undef public_4cfd80
#undef public_4cfd89
#undef public_4cfdaf
