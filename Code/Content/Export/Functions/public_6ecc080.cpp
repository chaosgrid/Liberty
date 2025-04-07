#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f15560);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafd3);

#define public_6ecc11d _public_6ecc11d
#define public_6ecc11f _public_6ecc11f
#define public_6ecc14b _public_6ecc14b
#define public_6ecc17e _public_6ecc17e
#define public_6ecc186 _public_6ecc186
#define public_6ecc18b _public_6ecc18b
#define public_6ecc1bd _public_6ecc1bd
#define public_6ecc1bf _public_6ecc1bf
#define public_6ecc1cb _public_6ecc1cb
#define public_6ecc1cd _public_6ecc1cd
#define public_6ecc1d9 _public_6ecc1d9
#define public_6ecc1de _public_6ecc1de
#define public_6ecc206 _public_6ecc206
#define public_6ecc21a _public_6ecc21a
#define public_6ecc21d _public_6ecc21d
#define public_6ecc221 _public_6ecc221
#define public_6ecc240 _public_6ecc240
#define public_6ecc26b _public_6ecc26b
#define public_6ecc274 _public_6ecc274
#define public_6ecc2a0 _public_6ecc2a0
#define public_6ecc2ae _public_6ecc2ae
#define public_6ecc2c8 _public_6ecc2c8

PROC_DECLARE(0x6ecc080, internal_6ecc080, public_6ecc080);
extern "C" NAKED register_t __cdecl internal_6ecc080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafd3 @0x6ecc088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafd3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecc2c8
        push 0x34
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x34], ebp
        je public_6ecc11d
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x1C], ebp
        lea ecx, ss:[esp+0x13]
        lea ebp, ds:[esi+0x24]
        push ecx
        mov ecx, ebp
        mov byte ptr ds : [esi+0x20], 0
        call public_6ead6a0
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [esi], offset public_6fb5ea8
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x1C], 0x28
        call public_6eb5770
        mov ebx, esi
        xor ebp, ebp
        jmp public_6ecc11f
        public_6ecc11d : nop
        xor ebx, ebx
        public_6ecc11f : nop
        lea eax, ds:[edi+0x14]
/*FIXUP push offset public_6fb57a0 @0x6ecc122*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ecc14b
        lea ecx, ds:[edi+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        call public_6f15560
        mov ebp, eax
        public_6ecc14b : nop
        xor esi, esi
        test ebp, ebp
        je public_6ecc18b
        mov esi, dword ptr ds : [edi+4]
        add ebp, 0x38
        add esi, 0x184
        push ebp
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ecc17e
        mov edx, dword ptr ss : [ebp]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ecc17e
        lea eax, ss:[esp+0x14]
        jmp public_6ecc186
        public_6ecc17e : nop
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x18]
        public_6ecc186 : nop
        mov esi, dword ptr ds : [eax]
        add esi, 0x10
        public_6ecc18b : nop
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+0x10]
        push eax
        call public_6f15b90
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+8]
        call public_6f478c0
        test esi, esi
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [ebx+0xC], ecx
        je public_6ecc1bd
        lea eax, ds:[esi+0x10]
        jmp public_6ecc1bf
        public_6ecc1bd : nop
        xor eax, eax
        public_6ecc1bf : nop
        test esi, esi
        mov dword ptr ds : [ebx+0x10], eax
        je public_6ecc1cb
        mov eax, dword ptr ds : [esi+0x44]
        jmp public_6ecc1cd
        public_6ecc1cb : nop
        xor eax, eax
        public_6ecc1cd : nop
        test esi, esi
        mov dword ptr ds : [ebx+0x14], eax
        je public_6ecc1d9
        mov esi, dword ptr ds : [esi+4]
        jmp public_6ecc1de
        public_6ecc1d9 : nop
        mov esi, 1
        public_6ecc1de : nop
        mov dword ptr ds : [ebx+0x1C], esi
        mov edx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [edi+4]
        add ebp, 0x204
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+8]
        cmp edi, edx
        mov esi, ecx
        mov al, 1
        je public_6ecc221
        public_6ecc206 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [edi+0xC]
        mov esi, edi
        setb al
        test al, al
        je public_6ecc21a
        mov edi, dword ptr ds : [edi]
        jmp public_6ecc21d
        public_6ecc21a : nop
        mov edi, dword ptr ds : [edi+8]
        public_6ecc21d : nop
        cmp edi, edx
        jne public_6ecc206
        public_6ecc221 : nop
        mov dl, byte ptr ss : [ebp+0xC]
        test dl, dl
        je public_6ecc240
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6f7c9e0
        jmp public_6ecc2c8
        public_6ecc240 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], esi
        je public_6ecc274
        cmp esi, dword ptr ds : [ecx]
        jne public_6ecc26b
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x26], 1
        call public_6f7c9e0
        jmp public_6ecc2ae
        public_6ecc26b : nop
        lea ecx, ss:[esp+0x14]
        call public_6f00610
        public_6ecc274 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x1C]
        jae public_6ecc2a0
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x26], 1
        call public_6f7c9e0
        jmp public_6ecc2ae
        public_6ecc2a0 : nop
        lea edx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0x13], 0
        push edx
        lea eax, ss:[esp+0x18]
        public_6ecc2ae : nop
        lea ecx, ss:[esp+0x28]
        push eax
        call public_6fa6e80
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        jne public_6ecc2c8
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_6ecc2c8 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6ecc080)
    }
}

#undef public_6ecc11d
#undef public_6ecc11f
#undef public_6ecc14b
#undef public_6ecc17e
#undef public_6ecc186
#undef public_6ecc18b
#undef public_6ecc1bd
#undef public_6ecc1bf
#undef public_6ecc1cb
#undef public_6ecc1cd
#undef public_6ecc1d9
#undef public_6ecc1de
#undef public_6ecc206
#undef public_6ecc21a
#undef public_6ecc21d
#undef public_6ecc221
#undef public_6ecc240
#undef public_6ecc26b
#undef public_6ecc274
#undef public_6ecc2a0
#undef public_6ecc2ae
#undef public_6ecc2c8
