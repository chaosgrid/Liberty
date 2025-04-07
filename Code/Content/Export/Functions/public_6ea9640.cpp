#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7d20);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9640);
CLANG_FORWARD_PROC_SYMBOL(public_6eac1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6eac6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac990);
CLANG_FORWARD_PROC_SYMBOL(public_6eacef0);
CLANG_FORWARD_PROC_SYMBOL(public_6eacf80);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead830);
CLANG_FORWARD_PROC_SYMBOL(public_6ead9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eade20);
CLANG_FORWARD_PROC_SYMBOL(public_6eadeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed4470);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9adc);

#define public_6ea9798 _public_6ea9798
#define public_6ea97cb _public_6ea97cb
#define public_6ea97ff _public_6ea97ff
#define public_6ea9833 _public_6ea9833
#define public_6ea986b _public_6ea986b
#define public_6ea98a3 _public_6ea98a3
#define public_6ea98db _public_6ea98db
#define public_6ea99c8 _public_6ea99c8
#define public_6ea99d0 _public_6ea99d0
#define public_6ea99e5 _public_6ea99e5
#define public_6ea9a48 _public_6ea9a48
#define public_6ea9a50 _public_6ea9a50
#define public_6ea9a7b _public_6ea9a7b
#define public_6ea9a86 _public_6ea9a86
#define public_6ea9a9e _public_6ea9a9e
#define public_6ea9ab0 _public_6ea9ab0
#define public_6ea9ae0 _public_6ea9ae0
#define public_6ea9b09 _public_6ea9b09
#define public_6ea9b27 _public_6ea9b27
#define public_6ea9bed _public_6ea9bed
#define public_6ea9c0c _public_6ea9c0c
#define public_6ea9c82 _public_6ea9c82
#define public_6ea9c9c _public_6ea9c9c
#define public_6ea9ca0 _public_6ea9ca0
#define public_6ea9cb4 _public_6ea9cb4
#define public_6ea9cef _public_6ea9cef
#define public_6ea9e10 _public_6ea9e10
#define public_6ea9e2d _public_6ea9e2d
#define public_6ea9e3f _public_6ea9e3f
#define public_6ea9e46 _public_6ea9e46
#define public_6ea9e66 _public_6ea9e66

PROC_DECLARE(0x6ea9640, internal_6ea9640, public_6ea9640);
extern "C" NAKED register_t __cdecl internal_6ea9640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9adc @0x6ea9642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9adc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x434
        mov eax, dword ptr ds : [public_6fce2f8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, eax
        inc eax
        mov dword ptr ds : [public_6fce2f8], eax
        mov ebp, ecx
        lea eax, ss:[esp+0x27]
        push eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x7C], edi
        call public_6ead6a0
        lea ecx, ss:[esp+0x26]
        push ecx
        xor ebx, ebx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x450], ebx
        call public_6ead6a0
        mov edx, dword ptr ss : [esp+0x458]
        mov esi, dword ptr ss : [esp+0x454]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x38], edx
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, offset public_6fcee5c
        mov dword ptr ss : [esp+0x454], 1
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x70], edi
        mov dword ptr ss : [esp+0x74], ebp
        call public_6eadeb0
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6fa6e80
        lea ecx, ss:[esp+0x3C0]
        call public_6eac680
        lea ecx, ss:[esp+0x3D8]
        mov byte ptr ss : [esp+0x44C], 2
        call public_6eac680
        lea ecx, ss:[esp+0x198]
        mov byte ptr ss : [esp+0x44C], 3
        call public_6eac990
        mov cl, byte ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x40]
        mov byte ptr ss : [esp+0x19D], cl
        push 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x450], 4
        mov dword ptr ss : [esp+0x19C], edx
        mov dword ptr ss : [esp+0x3F4], eax
        mov byte ptr ss : [esp+0x1A2], bl
        mov byte ptr ss : [esp+0x1AC], bl
        mov byte ptr ss : [esp+0x1A0], 1
        call public_6ed4470
        cmp eax, ebx
        je public_6ea9798
        cmp byte ptr ds : [eax], bl
        je public_6ea9798
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x2B0], eax
        mov eax, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+eax*4+0x330], ebx
        inc dword ptr ss : [esp+0x3B0]
        public_6ea9798 : nop
        push ebx
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea97cb
        cmp byte ptr ds : [eax], bl
        je public_6ea97cb
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], ebx
        inc dword ptr ss : [esp+0x3B0]
        public_6ea97cb : nop
        push 2
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea97ff
        cmp byte ptr ds : [eax], bl
        je public_6ea97ff
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], ebx
        inc dword ptr ss : [esp+0x3B0]
        public_6ea97ff : nop
        push 3
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea9833
        cmp byte ptr ds : [eax], bl
        je public_6ea9833
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], ebx
        inc dword ptr ss : [esp+0x3B0]
        public_6ea9833 : nop
        push 4
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea986b
        cmp byte ptr ds : [eax], bl
        je public_6ea986b
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], 1
        inc dword ptr ss : [esp+0x3B0]
        public_6ea986b : nop
        push 5
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea98a3
        cmp byte ptr ds : [eax], bl
        je public_6ea98a3
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], 2
        inc dword ptr ss : [esp+0x3B0]
        public_6ea98a3 : nop
        push 6
        mov ecx, esi
        call public_6ed4470
        cmp eax, ebx
        je public_6ea98db
        cmp byte ptr ds : [eax], bl
        je public_6ea98db
        mov ecx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+ecx*4+0x2B0], eax
        mov edx, dword ptr ss : [esp+0x3B0]
        mov dword ptr ss : [esp+edx*4+0x330], 3
        inc dword ptr ss : [esp+0x3B0]
        public_6ea98db : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x1A4], ecx
        push edx
        lea ecx, ss:[esp+0x3C4]
        mov dword ptr ss : [esp+0x2B0], ebx
        mov dword ptr ss : [esp+0x1A4], eax
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0x3C0]
        call dword ptr ds : [public_6fb3038]
        push 3
        mov ecx, esi
        call public_6ed4470
        mov ecx, dword ptr ss : [esp+0x458]
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 5
        mov dword ptr ss : [esp+0x3B4], eax
        mov eax, dword ptr ss : [esp+0x45C]
        mov dword ptr ss : [esp+0x3F4], ecx
        lea ecx, ss:[esp+0x3F8]
        mov dword ptr ss : [esp+0x3B8], eax
        mov dword ptr ss : [esp+0x3BC], ebx
        call public_6eacef0
        push eax
        push esi
        lea ecx, ss:[esp+0x424]
        mov byte ptr ss : [esp+0x454], 5
        call public_6ead9b0
        push eax
        lea edx, ss:[esp+0x194]
        lea ecx, ss:[ebp+0x70]
        push edx
        mov byte ptr ss : [esp+0x454], 6
        call public_6ead830
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x420]
        mov byte ptr ss : [esp+0x44C], 5
        call public_6eacf80
        lea ecx, ss:[esp+0x3F8]
        mov byte ptr ss : [esp+0x44C], 4
        call public_6eacf80
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, ebx
        lea ebp, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x18], ebp
        jne public_6ea99c8
        xor edi, edi
        jmp public_6ea99d0
        public_6ea99c8 : nop
        mov edi, dword ptr ds : [esi+0x24]
        sub edi, eax
        sar edi, 2
        public_6ea99d0 : nop
        lea ecx, ss:[esp+0x40]
        call public_6eb6b30
        cmp eax, edi
        jae public_6ea9a48
        cmp edi, ebx
        mov eax, edi
        jge public_6ea99e5
        xor eax, eax
        public_6ea99e5 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x48]
        add esp, 4
        mov ebp, eax
        push ebp
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6eed270
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        call public_6fa8fe0
        lea eax, ss:[ebp+edi*4]
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x4C], eax
        call public_6fa3db0
        lea ecx, ss:[ebp+eax*4]
        mov dword ptr ss : [esp+0x44], ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], ecx
        public_6ea9a48 : nop
        mov edi, dword ptr ds : [esi+0x20]
        cmp edi, dword ptr ds : [esi+0x24]
        je public_6ea9a7b
        public_6ea9a50 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x458]
        push edx
        push eax
        mov ecx, ebp
        call public_6eac1c0
        mov ecx, dword ptr ss : [esp+0x48]
        push edi
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6eb5770
        mov eax, dword ptr ds : [esi+0x24]
        add edi, 4
        cmp edi, eax
        jne public_6ea9a50
        public_6ea9a7b : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        jne public_6ea9a86
        xor edx, edx
        jmp public_6ea9a9e
        public_6ea9a86 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ea9a9e : nop
        lea ebp, ds:[edx-1]
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x14], ebp
        jl public_6ea9e66
        lea ecx, ds:[ecx]
        public_6ea9ab0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, ebp
        imul edi, 0x3C
        add edi, eax
        cmp dword ptr ds : [edi], ebx
        je public_6ea9b27
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[edx+0xC]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6ea9b27
        mov edi, edi
        public_6ea9ae0 : nop
        add ecx, 0x28
        push ecx
        lea eax, ds:[edi+4]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ea9b09
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x458]
        cmp ecx, dword ptr ds : [eax+0x48]
        je public_6ea9bed
        public_6ea9b09 : nop
        push ebx
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        jne public_6ea9ae0
        public_6ea9b27 : nop
        lea ecx, ss:[esp+0xE4]
        mov dword ptr ss : [esp+0xD8], ebx
        call public_6eac5b0
        lea ecx, ss:[esp+0x18C]
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x124], ebx
        mov byte ptr ss : [esp+0x128], bl
        mov dword ptr ss : [esp+0x148], ebx
        mov byte ptr ss : [esp+0x14C], bl
        call dword ptr ds : [public_6fb3030]
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0x458]
        mov dword ptr ss : [esp+0xD8], ecx
        mov edx, dword ptr ds : [eax+0x38]
        mov dword ptr ss : [esp+0xE0], edx
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [esp+0xDC], ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xE4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xE8], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xEC], edx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0xF0], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x114], ecx
        mov dword ptr ss : [esp+0x1C], ebx
        jle public_6ea9cb4
        lea edx, ss:[esp+0xE4]
        mov ebp, eax
        sub ebp, edx
        lea ecx, ss:[esp+0xF4]
        mov dword ptr ss : [esp+0x28], ebp
        mov edx, ebx
        jmp public_6ea9ca0
        public_6ea9bed : nop
        mov dword ptr ss : [esp+0x10], eax
        inc dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+0x28]
        mov dword ptr ss : [esp+ebp*4+0x22C], edx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+ebp*4+0x1AC], ecx
        public_6ea9c0c : nop
        mov edx, dword ptr ss : [esp+0x2AC]
        inc edx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x2AC], edx
        jne public_6ea9e10
        lea eax, ss:[esp+0x198]
        push eax
        call dword ptr ds : [public_6fb35d0]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x70], ebx
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x70]
        push ecx
        lea ecx, ds:[edx+0x5C]
        mov byte ptr ss : [esp+0x450], 8
        call public_6ea8cd0
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x44C], 4
        call public_6ea7c30
        mov eax, dword ptr ss : [esp+0x10]
        lea ebp, ds:[eax+8]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 0xFFFFFFFF
        lea edi, ss:[ebp+4]
        je public_6ea9c82
        push edi
        call dword ptr ds : [public_6fb3604]
        add esp, 4
        public_6ea9c82 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp+0xC]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3608]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], eax
        jmp public_6ea9e3f
        public_6ea9c9c : nop
        mov ebp, dword ptr ss : [esp+0x28]
        public_6ea9ca0 : nop
        mov ebp, dword ptr ds : [ecx+ebp]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ss : [esp+0x114]
        inc edx
        add ecx, 4
        cmp edx, ebp
        jl public_6ea9c9c
        public_6ea9cb4 : nop
        mov eax, dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x11C], ecx
        lea ebp, ds:[edi+4]
        push ebp
        lea ecx, ss:[esp+0x128]
        mov dword ptr ss : [esp+0x11C], eax
        mov dword ptr ss : [esp+0x124], edx
        call public_6ead6c0
        mov edi, dword ptr ds : [edi+0x30]
        cmp edi, ebx
        mov eax, dword ptr ds : [public_6fb32f4]
        je public_6ea9cef
        mov eax, edi
        public_6ea9cef : nop
        push eax
        lea ecx, ss:[esp+0x14C]
        call public_6ead640
        or eax, 0xFFFFFFFF
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x7C], 1
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x88], ebx
        mov dword ptr ss : [esp+0x8C], ebx
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], ebx
        mov byte ptr ss : [esp+0x9C], bl
        mov dword ptr ss : [esp+0xBC], ebx
        mov dword ptr ss : [esp+0xC0], eax
        mov dword ptr ss : [esp+0xC4], ebx
        call dword ptr ds : [public_6fb3030]
        mov edi, dword ptr ds : [public_6fceec4]
        inc edi
        mov dword ptr ss : [esp+0xCC], ebx
        mov dword ptr ss : [esp+0xD0], ebx
        mov dword ptr ds : [public_6fceec4], edi
        lea eax, ss:[esp+0xD8]
        push eax
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x450], 7
        call public_6ea7d20
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+eax*4+0x22C], ebp
        mov dword ptr ss : [esp+eax*4+0x1AC], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x28]
        push eax
        add ecx, 0x70
        mov dword ptr ss : [esp+0x2C], edx
        call public_6eac6c0
        lea edi, ds:[eax+0xC]
        lea edx, ss:[esp+0x7C]
        push edx
        mov ecx, edi
        call public_6eac5d0
        lea eax, ss:[esp+0x60]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ds : [public_6fceec4]
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x10], ecx
        dec eax
        lea ecx, ss:[esp+0xD0]
        mov byte ptr ss : [esp+0x44C], 4
        mov dword ptr ds : [public_6fceec4], eax
        call public_6ea7c30
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        jmp public_6ea9c0c
        public_6ea9e10 : nop
        cmp dword ptr ds : [eax+0x5C], ebx
        jne public_6ea9e46
        lea ebp, ds:[eax+8]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 0xFFFFFFFF
        lea edi, ss:[ebp+4]
        je public_6ea9e2d
        push edi
        call dword ptr ds : [public_6fb3604]
        add esp, 4
        public_6ea9e2d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push 0xFFFFFFFF
        push ecx
        call dword ptr ds : [public_6fb3608]
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6ea9e3f : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        add esp, 8
        public_6ea9e46 : nop
        mov eax, dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_6f937c0
        dec ebp
        mov dword ptr ss : [esp+0x14], ebp
        jns public_6ea9ab0
        public_6ea9e66 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx+0x9C]
        add ecx, 0x98
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        lea eax, ss:[esp+0x70]
        push eax
        call public_6eade20
        mov esi, dword ptr ds : [public_6fb3068]
        lea ecx, ss:[esp+0x3C0]
        mov byte ptr ss : [esp+0x44C], 0xA
        call esi
        lea ecx, ss:[esp+0x3D8]
        call esi
        mov esi, dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0x3D8]
        mov byte ptr ss : [esp+0x44C], 9
        call esi
        lea ecx, ss:[esp+0x3C0]
        mov byte ptr ss : [esp+0x44C], 1
        call esi
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        push ecx
        push edx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x454], 0xB
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x44C], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x444]
        mov eax, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x440
        ret 0xC
        UNREACHABLE_TRAP(0x6ea9640)
    }
}

#undef public_6ea9798
#undef public_6ea97cb
#undef public_6ea97ff
#undef public_6ea9833
#undef public_6ea986b
#undef public_6ea98a3
#undef public_6ea98db
#undef public_6ea99c8
#undef public_6ea99d0
#undef public_6ea99e5
#undef public_6ea9a48
#undef public_6ea9a50
#undef public_6ea9a7b
#undef public_6ea9a86
#undef public_6ea9a9e
#undef public_6ea9ab0
#undef public_6ea9ae0
#undef public_6ea9b09
#undef public_6ea9b27
#undef public_6ea9bed
#undef public_6ea9c0c
#undef public_6ea9c82
#undef public_6ea9c9c
#undef public_6ea9ca0
#undef public_6ea9cb4
#undef public_6ea9cef
#undef public_6ea9e10
#undef public_6ea9e2d
#undef public_6ea9e3f
#undef public_6ea9e46
#undef public_6ea9e66
