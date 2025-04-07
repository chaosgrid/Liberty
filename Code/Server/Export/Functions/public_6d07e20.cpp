#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf5130);
CLANG_FORWARD_PROC_SYMBOL(public_6cf51e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf63f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6630);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6c50);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);
CLANG_FORWARD_PROC_SYMBOL(public_6d06ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07690);
CLANG_FORWARD_PROC_SYMBOL(public_6d07950);
CLANG_FORWARD_PROC_SYMBOL(public_6d07b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d07e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f330);
CLANG_FORWARD_PROC_SYMBOL(public_6d54900);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d612db);

#define public_6d07e56 _public_6d07e56
#define public_6d07f09 _public_6d07f09
#define public_6d07f11 _public_6d07f11
#define public_6d07f1e _public_6d07f1e
#define public_6d07f26 _public_6d07f26
#define public_6d07f54 _public_6d07f54
#define public_6d07f56 _public_6d07f56
#define public_6d07fcf _public_6d07fcf
#define public_6d07fe4 _public_6d07fe4
#define public_6d080b3 _public_6d080b3
#define public_6d0812a _public_6d0812a
#define public_6d0814c _public_6d0814c
#define public_6d08190 _public_6d08190
#define public_6d081c9 _public_6d081c9
#define public_6d081d3 _public_6d081d3
#define public_6d081da _public_6d081da
#define public_6d08226 _public_6d08226
#define public_6d082fa _public_6d082fa
#define public_6d08365 _public_6d08365
#define public_6d0836e _public_6d0836e
#define public_6d08370 _public_6d08370
#define public_6d08433 _public_6d08433
#define public_6d08435 _public_6d08435
#define public_6d08474 _public_6d08474
#define public_6d084c4 _public_6d084c4
#define public_6d08528 _public_6d08528
#define public_6d0854c _public_6d0854c
#define public_6d08550 _public_6d08550
#define public_6d08554 _public_6d08554
#define public_6d08558 _public_6d08558
#define public_6d08561 _public_6d08561
#define public_6d08563 _public_6d08563
#define public_6d08589 _public_6d08589
#define public_6d0858b _public_6d0858b
#define public_6d085b8 _public_6d085b8
#define public_6d085c5 _public_6d085c5
#define public_6d085c7 _public_6d085c7
#define public_6d085f8 _public_6d085f8
#define public_6d085fa _public_6d085fa
#define public_6d08630 _public_6d08630
#define public_6d0866c _public_6d0866c
#define public_6d08691 _public_6d08691
#define public_6d0869a _public_6d0869a
#define public_6d0869c _public_6d0869c
#define public_6d086be _public_6d086be
#define public_6d086c7 _public_6d086c7

PROC_DECLARE(0x6d07e20, internal_6d07e20, public_6d07e20);
extern "C" NAKED register_t __cdecl internal_6d07e20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d612db @0x6d07e22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d612db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1D0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0xFC]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x18], edi
        jne public_6d07e56
        call public_6d06ed0
        public_6d07e56 : nop
        mov ebp, dword ptr ss : [esp+0x1F0]
        test ebp, 0x3FFFFFFF
        je public_6d086c7
        push ebp
        lea ecx, ss:[esp+0x16C]
        call public_6cf51e0
        mov edx, dword ptr ds : [edi+0xC]
        lea ecx, ds:[edi+8]
        push eax
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x1F4], ebx
        call public_6d0f330
        lea ecx, ss:[esp+0x168]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call public_6cf52d0
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d082fa
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push eax
        push ebp
        mov ecx, offset public_6d90260
        call public_6d54900
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, ebp
        imul eax, 0x418
        lea eax, ds:[eax+ecx-0x418]
        mov eax, dword ptr ds : [eax+0x318]
        lea ecx, ds:[edi+0x5C]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], eax
        call public_6cf5130
        test eax, eax
        je public_6d082fa
        xor eax, eax
        jmp public_6d07f11
        public_6d07f09 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_6d07f11 : nop
        cmp eax, ebx
        jne public_6d07f1e
        mov esi, dword ptr ds : [edi+0x60]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6d07f26
        public_6d07f1e : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov esi, edx
        public_6d07f26 : nop
        cmp esi, ebx
        je public_6d082fa
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov edi, eax
        cmp edi, ebx
        je public_6d07f54
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d08226
        public_6d07f54 : nop
        xor edi, edi
        public_6d07f56 : nop
        mov al, byte ptr ss : [esp+0x13]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x68], al
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x6C], bl
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3F800000
        lea eax, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x74], 0x19
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x1F0], 4
        call dword ptr ds : [edx+0x1A8]
        cmp dword ptr ss : [esp+0x68], ebx
        je public_6d07fcf
        mov edx, dword ptr ds : [public_6d8fb14]
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x60]
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        push ebp
        call dword ptr ds : [esi+0xFC]
        public_6d07fcf : nop
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call dword ptr ds : [public_6d64220]
        public_6d07fe4 : nop
        cmp edi, ebx
        je public_6d07f09
        lea ecx, ss:[esp+0x180]
        call public_6d55bc0
        lea ecx, ss:[esp+0x198]
        mov dword ptr ss : [esp+0x1E8], 5
        call public_6d55bc0
        mov dword ptr ss : [esp+0x178], ebx
        mov byte ptr ss : [esp+0x17C], bl
        mov word ptr ss : [esp+0x1B0], bx
        mov eax, dword ptr ds : [edi+0x104]
        mov dword ptr ss : [esp+0x168], eax
        lea eax, ss:[esp+0x16C]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x170]
        push edx
        mov dword ptr ss : [esp+0x1F4], 6
        call dword ptr ds : [public_6d64698]
        push ebx
        lea eax, ss:[esp+0x180]
        push eax
        lea ecx, ss:[esp+0x17C]
        push ecx
        call dword ptr ds : [public_6d643b8]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        lea eax, ss:[esp+0x168]
        push eax
        push ebp
        call dword ptr ds : [edx+0x108]
        push 0x80
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d64204]
        lea edx, ss:[esp+0x3C]
        lea ecx, ds:[edi+0xE4]
        push edx
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        cmp esi, ebx
        je public_6d0814c
        public_6d080b3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6d0812a
        mov ecx, dword ptr ds : [public_6d6402c]
        xor edx, edx
        mov dword ptr ss : [esp+0x38], ebx
        mov dx, word ptr ds : [ecx]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], edx
        call dword ptr ds : [public_6d641b0]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_6d0812a
        mov edx, dword ptr ds : [edi+0xB0]
        mov si, word ptr ds : [esi+8]
        mov cx, word ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x50], edx
        mov word ptr ss : [esp+0x54], si
        mov eax, dword ptr ds : [eax+0xB0]
        mov dword ptr ss : [esp+0x58], eax
        lea eax, ss:[esp+0x50]
        mov word ptr ss : [esp+0x5C], cx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x1F4]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6d0812a : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ds:[edi+0xE4]
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        cmp esi, ebx
        jne public_6d080b3
        mov ebp, dword ptr ss : [esp+0x1F0]
        public_6d0814c : nop
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x1EC], 7
        call dword ptr ds : [eax+0xB8]
        test al, al
        je public_6d081da
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        xor esi, esi
        cmp ebp, eax
        je public_6d081d3
        lea esp, ss:[esp]
        public_6d08190 : nop
        cmp byte ptr ss : [ebp], bl
        je public_6d081c9
        mov edx, dword ptr ds : [edi+0xB0]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov dword ptr ss : [esp+0x7C], edx
        lea edx, ss:[esp+0x7C]
        push edx
        mov edx, dword ptr ss : [esp+0x1F4]
        mov byte ptr ss : [esp+0x84], 1
        mov dword ptr ss : [esp+0x88], esi
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xE0]
        public_6d081c9 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc esi
        inc ebp
        cmp ebp, eax
        jne public_6d08190
        public_6d081d3 : nop
        mov ebp, dword ptr ss : [esp+0x1F0]
        public_6d081da : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov esi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x198]
        mov dword ptr ss : [esp+0x1E8], 8
        call esi
        lea ecx, ss:[esp+0x180]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call esi
        jmp public_6d07f09
        public_6d08226 : nop
        cmp byte ptr ds : [edi+0x1A9], bl
        je public_6d07f56
        lea ecx, ss:[esp+0x88]
        call public_6cf63f0
        mov byte ptr ss : [esp+0x134], bl
        mov byte ptr ss : [esp+0x135], bl
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x88], offset public_6d66b7c
        lea edx, ss:[esp+0x88]
        push edi
        push edx
        mov dword ptr ss : [esp+0x1F0], 1
        call public_6d07950
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        push ebp
        call public_6cef450
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea edx, ss:[esp+0x88]
        push edx
        mov byte ptr ss : [esp+0x134], al
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ss : [esp+0x88], offset public_6d65f68
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x1E8], 3
        call dword ptr ds : [public_6d64220]
        lea ecx, ss:[esp+0x108]
        mov byte ptr ss : [esp+0x1E8], 2
        call dword ptr ds : [public_6d6438c]
        lea ecx, ss:[esp+0xF8]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call dword ptr ds : [public_6d64498]
        jmp public_6d07fe4
        public_6d082fa : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d08550
        lea ecx, ss:[esp+0x88]
        call public_6cf63f0
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        mov dword ptr ss : [esp+0x13C], ebx
        mov dword ptr ss : [esp+0x158], 0
        mov dword ptr ss : [esp+0x15C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x160], ebx
        mov byte ptr ss : [esp+0x164], bl
        mov dword ptr ss : [esp+0x88], offset public_6d65f78
        mov dword ptr ss : [esp+0x1E8], 9
        xor esi, esi
        public_6d08365 : nop
        cmp esi, ebx
        jne public_6d0836e
        mov esi, dword ptr ds : [edi+0x38]
        jmp public_6d08370
        public_6d0836e : nop
        mov esi, dword ptr ds : [esi]
        public_6d08370 : nop
        cmp esi, ebx
        je public_6d08474
        lea ecx, ss:[esp+0xF8]
        mov dword ptr ss : [esp+0x8C], ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xD0], ebx
        mov dword ptr ss : [esp+0xF4], ebx
        mov byte ptr ss : [esp+0x130], bl
        call dword ptr ds : [public_6d64690]
        lea ecx, ss:[esp+0x108]
        call dword ptr ds : [public_6d6468c]
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_6d64688]
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        mov dword ptr ss : [esp+0x13C], ebx
        mov dword ptr ss : [esp+0x158], 0
        mov dword ptr ss : [esp+0x15C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x160], ebx
        mov byte ptr ss : [esp+0x164], bl
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6d08433
        add eax, 0xC
        cmp eax, ebx
        je public_6d08433
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6d08433
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d08435
        public_6d08433 : nop
        xor eax, eax
        public_6d08435 : nop
        push eax
        lea edx, ss:[esp+0x8C]
        push edx
        call public_6d07690
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        push ebp
        call public_6cef450
        mov byte ptr ss : [esp+0x130], al
        mov eax, dword ptr ds : [esi+8]
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        call public_6cf6630
        mov edi, dword ptr ss : [esp+0x18]
        jmp public_6d08365
        public_6d08474 : nop
        mov dword ptr ss : [esp+0x88], offset public_6d65f68
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x1E8], 0xB
        call dword ptr ds : [public_6d64220]
        lea ecx, ss:[esp+0x108]
        mov byte ptr ss : [esp+0x1E8], 0xA
        call dword ptr ds : [public_6d6438c]
        lea ecx, ss:[esp+0xF8]
        mov dword ptr ss : [esp+0x1E8], 0xFFFFFFFF
        call dword ptr ds : [public_6d64498]
        public_6d084c4 : nop
        push 0xFFFFFFFF
        lea ecx, ds:[edi+0x48]
        call public_6cf5130
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov eax, dword ptr ss : [esp+0x14]
        je public_6d0866c
        cmp eax, ebx
        je public_6d086c7
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x49], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], 5
        call public_6d60012
        add esp, 4
        cmp eax, ebx
        je public_6d08589
        mov edx, dword ptr ss : [esp+0x14]
        dec edx
        cmp edx, ebx
        jl public_6d0854c
        lea ecx, ds:[eax+8]
        inc edx
        public_6d08528 : nop
        mov dword ptr ds : [ecx-8], ebx
        mov dword ptr ds : [ecx-4], ebx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov dword ptr ds : [ecx+0x10], ebx
        mov byte ptr ds : [ecx+0x3C], 1
        mov byte ptr ds : [ecx+0x3D], bl
        mov byte ptr ds : [ecx+0x3E], bl
        add ecx, 0x48
        dec edx
        jne public_6d08528
        public_6d0854c : nop
        mov edi, eax
        jmp public_6d0858b
        public_6d08550 : nop
        xor esi, esi
        jmp public_6d08558
        public_6d08554 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_6d08558 : nop
        cmp esi, ebx
        jne public_6d08561
        mov esi, dword ptr ds : [edi+0x38]
        jmp public_6d08563
        public_6d08561 : nop
        mov esi, dword ptr ds : [esi]
        public_6d08563 : nop
        cmp esi, ebx
        je public_6d084c4
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d08554
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call public_6cf7140
        jmp public_6d08554
        public_6d08589 : nop
        xor edi, edi
        public_6d0858b : nop
        mov al, byte ptr ss : [esp+0x14]
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x48], edi
        mov byte ptr ss : [esp+0x4C], al
        mov byte ptr ss : [esp+0x20], cl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x1E8], 0xC
        xor eax, eax
        public_6d085b8 : nop
        cmp eax, ebx
        jne public_6d085c5
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx+0x4C]
        jmp public_6d085c7
        public_6d085c5 : nop
        mov esi, dword ptr ds : [eax]
        public_6d085c7 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6d08630
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        je public_6d085f8
        add eax, 0xC
        cmp eax, ebx
        je public_6d085f8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6d085f8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6d085fa
        public_6d085f8 : nop
        xor eax, eax
        public_6d085fa : nop
        push eax
        push edi
        call public_6d07b90
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        push ebp
        call public_6cef450
        push esi
        mov byte ptr ds : [edi+0x46], al
        mov edx, dword ptr ss : [esp+0x2C]
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6cecbd0
        mov ebp, dword ptr ss : [esp+0x1F0]
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x48
        jmp public_6d085b8
        public_6d08630 : nop
        mov ecx, dword ptr ds : [8]
        push ebp
        call public_6cef450
        mov byte ptr ss : [esp+0x44], al
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        call public_6cf6c50
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6d5ffb0
        add esp, 8
        jmp public_6d086c7
        public_6d0866c : nop
        cmp eax, ebx
        je public_6d086c7
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x50], cl
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x1E8], 0xD
        xor esi, esi
        public_6d08691 : nop
        cmp esi, ebx
        jne public_6d0869a
        mov esi, dword ptr ds : [edi+0x4C]
        jmp public_6d0869c
        public_6d0869a : nop
        mov esi, dword ptr ds : [esi]
        public_6d0869c : nop
        cmp esi, ebx
        je public_6d086be
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d08691
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call public_6cf7140
        jmp public_6d08691
        public_6d086be : nop
        push ebx
        call public_6d5ffb0
        add esp, 4
        public_6d086c7 : nop
        mov ecx, dword ptr ss : [esp+0x1E0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1DC
        ret 4
        UNREACHABLE_TRAP(0x6d07e20)
    }
}

#undef public_6d07e56
#undef public_6d07f09
#undef public_6d07f11
#undef public_6d07f1e
#undef public_6d07f26
#undef public_6d07f54
#undef public_6d07f56
#undef public_6d07fcf
#undef public_6d07fe4
#undef public_6d080b3
#undef public_6d0812a
#undef public_6d0814c
#undef public_6d08190
#undef public_6d081c9
#undef public_6d081d3
#undef public_6d081da
#undef public_6d08226
#undef public_6d082fa
#undef public_6d08365
#undef public_6d0836e
#undef public_6d08370
#undef public_6d08433
#undef public_6d08435
#undef public_6d08474
#undef public_6d084c4
#undef public_6d08528
#undef public_6d0854c
#undef public_6d08550
#undef public_6d08554
#undef public_6d08558
#undef public_6d08561
#undef public_6d08563
#undef public_6d08589
#undef public_6d0858b
#undef public_6d085b8
#undef public_6d085c5
#undef public_6d085c7
#undef public_6d085f8
#undef public_6d085fa
#undef public_6d08630
#undef public_6d0866c
#undef public_6d08691
#undef public_6d0869a
#undef public_6d0869c
#undef public_6d086be
#undef public_6d086c7
