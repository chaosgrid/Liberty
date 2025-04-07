#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6360);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f07a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac459);

#define public_6ef5ce0 _public_6ef5ce0
#define public_6ef5d86 _public_6ef5d86
#define public_6ef5d91 _public_6ef5d91
#define public_6ef5d93 _public_6ef5d93
#define public_6ef5dcd _public_6ef5dcd
#define public_6ef5ddc _public_6ef5ddc
#define public_6ef5e00 _public_6ef5e00
#define public_6ef5e65 _public_6ef5e65
#define public_6ef5f84 _public_6ef5f84
#define public_6ef5fe6 _public_6ef5fe6
#define public_6ef6010 _public_6ef6010
#define public_6ef601b _public_6ef601b
#define public_6ef601d _public_6ef601d
#define public_6ef6049 _public_6ef6049
#define public_6ef6061 _public_6ef6061
#define public_6ef607b _public_6ef607b
#define public_6ef60d7 _public_6ef60d7
#define public_6ef60f0 _public_6ef60f0
#define public_6ef6115 _public_6ef6115
#define public_6ef6138 _public_6ef6138
#define public_6ef6148 _public_6ef6148
#define public_6ef616e _public_6ef616e
#define public_6ef6186 _public_6ef6186
#define public_6ef61a5 _public_6ef61a5
#define public_6ef621c _public_6ef621c
#define public_6ef6225 _public_6ef6225
#define public_6ef622e _public_6ef622e
#define public_6ef6250 _public_6ef6250
#define public_6ef627e _public_6ef627e
#define public_6ef628d _public_6ef628d
#define public_6ef62bf _public_6ef62bf
#define public_6ef62cc _public_6ef62cc
#define public_6ef62de _public_6ef62de
#define public_6ef6307 _public_6ef6307
#define public_6ef6309 _public_6ef6309

PROC_DECLARE(0x6ef5ca0, internal_6ef5ca0, public_6ef5ca0);
extern "C" NAKED register_t __cdecl internal_6ef5ca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac459 @0x6ef5ca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac459
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA4
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xBC]
        mov ebx, ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ef62de
        push esi
        push edi
        lea esp, ss:[esp]
        public_6ef5ce0 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb79e0 @0x6ef5ce6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79e0
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef5e65
        lea eax, ss:[esp+0x1B]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6ead6a0
        mov esi, dword ptr ds : [public_6fb3030]
        xor edi, edi
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xBC], edi
        call esi
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x48], edi
        call esi
        mov edi, 1
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        call public_6eac620
        mov dword ptr ss : [esp+0x68], 0
        mov esi, dword ptr ds : [public_6fb3020]
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC0], edi
        call esi
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x54], eax
        call esi
        push 2
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], eax
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], eax
        je public_6ef5d91
        public_6ef5d86 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6ef5d93
        add ecx, 4
        cmp ecx, edx
        jne public_6ef5d86
        public_6ef5d91 : nop
        mov ecx, edx
        public_6ef5d93 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x28], ecx
        jne public_6ef5dcd
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6eae440
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x16], 1
        call public_6eb5f30
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        jmp public_6ef5ddc
        public_6ef5dcd : nop
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x16], 0
        push eax
        public_6ef5ddc : nop
        lea ecx, ss:[esp+0xB4]
        call public_6fa6e80
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ef5e00
        push 3
        mov ecx, ebp
        call esi
        mov dword ptr ss : [esp+0x68], eax
        public_6ef5e00 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ds:[ebx+0x28]
        push 1
        push eax
        call public_6ef6d60
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0xBC], 2
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], eax
        jmp public_6ef62cc
/*FIXUP public_6ef5e65 : nop
        push offset public_6fb79cc @0x6ef5e65*/
  FIXUP public_6ef5e65 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79cc
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef5f84
        lea eax, ss:[esp+0x1A]
        push eax
        lea ecx, ss:[esp+0x78]
        call public_6ead6a0
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0xBC], 3
        call edi
        xor esi, esi
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x88], esi
        call edi
        mov eax, 1
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], eax
        call public_6eac620
        mov dword ptr ss : [esp+0xA8], esi
        mov edi, dword ptr ds : [public_6fb3020]
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC0], 4
        call edi
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x94], eax
        call edi
        push 2
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], eax
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ds:[ebx+0x28]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6ef6d60
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xBC], 5
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x78]
        push eax
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x78]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x78], esi
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], esi
        jmp public_6ef62cc
/*FIXUP public_6ef5f84 : nop
        push offset public_6fb79c0 @0x6ef5f84*/
  FIXUP public_6ef5f84 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79c0
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef607b
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        je public_6ef62cc
        mov ecx, dword ptr ds : [ebx+0x30]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        je public_6ef62cc
        mov eax, dword ptr ds : [ebx+0x30]
        sub eax, 0x38
        xor edi, edi
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ef62cc
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0x24]
        public_6ef5fe6 : nop
        mov eax, edi
        push eax
        mov ecx, ebp
        inc edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ef601b
        lea ebx, ds:[ebx]
        public_6ef6010 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6ef601d
        add ecx, 4
        cmp ecx, edx
        jne public_6ef6010
        public_6ef601b : nop
        mov ecx, edx
        public_6ef601d : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6ef6049
        lea eax, ss:[esp+0x1C]
        push eax
        push edx
        mov ecx, esi
        call public_6eae440
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eb5f30
        mov dword ptr ss : [esp+0x6C], eax
        mov byte ptr ss : [esp+0x70], 1
        jmp public_6ef6061
        public_6ef6049 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6ef6061 : nop
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ef5fe6
        mov ebx, dword ptr ss : [esp+0x24]
        jmp public_6ef62cc
/*FIXUP public_6ef607b : nop
        push offset public_6fb618c @0x6ef607b*/
  FIXUP public_6ef607b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb618c
        mov ecx, ebp
        call esi
        test al, al
        jne public_6ef62cc
/*FIXUP push offset public_6fb79b4 @0x6ef608c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79b4
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef60f0
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        je public_6ef62cc
        mov ecx, dword ptr ds : [ebx+0x30]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_6ef62cc
        mov eax, dword ptr ds : [ebx+0x30]
        sub eax, 0x38
        lea esi, ds:[eax+0x18]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        public_6ef60d7 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_6ef62cc
/*FIXUP public_6ef60f0 : nop
        push offset public_6fb79a8 @0x6ef60f0*/
  FIXUP public_6ef60f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79a8
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef6115
        lea esi, ds:[ebx+0x38]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6ef62cc
        lea ecx, ds:[ebx+0x3C]
        jmp public_6ef6138
/*FIXUP public_6ef6115 : nop
        push offset public_6fb7994 @0x6ef6115*/
  FIXUP public_6ef6115 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7994
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef6148
        lea esi, ds:[ebx+0x3C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6ef62cc
        lea ecx, ds:[ebx+0x38]
        public_6ef6138 : nop
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6ef62cc
        jmp public_6ef60d7
/*FIXUP public_6ef6148 : nop
        push offset public_6fb6180 @0x6ef6148*/
  FIXUP public_6ef6148 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6180
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef616e
        call dword ptr ds : [public_6fb3054]
        push eax
        call public_6f07a80
        add esp, 4
        mov dword ptr ds : [ebx+0x40], eax
        jmp public_6ef62cc
/*FIXUP public_6ef616e : nop
        push offset public_6fb798c @0x6ef616e*/
  FIXUP public_6ef616e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb798c
        call esi
        test al, al
        je public_6ef6186
        push ebp
        mov ecx, ebx
        call public_6ef6360
        jmp public_6ef62cc
/*FIXUP public_6ef6186 : nop
        push offset public_6fb7980 @0x6ef6186*/
  FIXUP public_6ef6186 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7980
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef61a5
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x7C], eax
        jmp public_6ef62cc
/*FIXUP public_6ef61a5 : nop
        push offset public_6fb7964 @0x6ef61a5*/
  FIXUP public_6ef61a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7964
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef622e
        mov edi, offset public_6fb5984
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov ecx, 4
        xor edx, edx
        repe cmpsb
        je public_6ef6225
        mov ecx, ebp
        mov edi, offset public_6fb4368
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        je public_6ef6225
        mov ecx, ebp
        mov edi, offset public_6fb5980
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov ecx, 3
        xor edx, edx
        repe cmpsb
        je public_6ef621c
        mov ecx, ebp
        mov edi, offset public_6fb4360
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov ecx, 6
        xor eax, eax
        repe cmpsb
        jne public_6ef62cc
        public_6ef621c : nop
        mov byte ptr ds : [ebx+0x74], 0
        jmp public_6ef62cc
        public_6ef6225 : nop
        mov byte ptr ds : [ebx+0x74], 1
        jmp public_6ef62cc
/*FIXUP public_6ef622e : nop
        push offset public_6fb794c @0x6ef622e*/
  FIXUP public_6ef622e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb794c
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef6250
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fstp qword ptr ds : [ebx+0x58]
        jmp public_6ef62cc
/*FIXUP public_6ef6250 : nop
        push offset public_6fb793c @0x6ef6250*/
  FIXUP public_6ef6250 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb793c
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef628d
        mov edi, offset public_6fb7930
        call dword ptr ds : [public_6fb3054]
        mov esi, eax
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_6ef627e
        mov dword ptr ds : [ebx+0x70], 0xFFFFFFFF
        jmp public_6ef62cc
        public_6ef627e : nop
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x70], eax
        jmp public_6ef62cc
/*FIXUP public_6ef628d : nop
        push offset public_6fb791c @0x6ef628d*/
  FIXUP public_6ef628d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb791c
        call esi
        test al, al
        jne public_6ef62bf
/*FIXUP push offset public_6fb7908 @0x6ef6298*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7908
        mov ecx, ebp
        call esi
        test al, al
        jne public_6ef62bf
/*FIXUP push offset public_6fb787c @0x6ef62a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb787c
        mov ecx, ebp
        call esi
        test al, al
        jne public_6ef62bf
/*FIXUP push offset public_6fb78f8 @0x6ef62b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb78f8
        mov ecx, ebp
        call esi
        test al, al
        je public_6ef62cc
        public_6ef62bf : nop
        cmp dword ptr ds : [ebx], 0
        jne public_6ef62cc
        push ebp
        mov ecx, ebx
        call public_6ef3cf0
        public_6ef62cc : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ef5ce0
        pop edi
        pop esi
        public_6ef62de : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        je public_6ef6307
        mov ebx, dword ptr ds : [ebx+0x30]
        sub ebx, eax
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        je public_6ef6307
        mov al, 1
        jmp public_6ef6309
        public_6ef6307 : nop
        xor al, al
        public_6ef6309 : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB0
        ret 4
        UNREACHABLE_TRAP(0x6ef5ca0)
    }
}

#undef public_6ef5ce0
#undef public_6ef5d86
#undef public_6ef5d91
#undef public_6ef5d93
#undef public_6ef5dcd
#undef public_6ef5ddc
#undef public_6ef5e00
#undef public_6ef5e65
#undef public_6ef5f84
#undef public_6ef5fe6
#undef public_6ef6010
#undef public_6ef601b
#undef public_6ef601d
#undef public_6ef6049
#undef public_6ef6061
#undef public_6ef607b
#undef public_6ef60d7
#undef public_6ef60f0
#undef public_6ef6115
#undef public_6ef6138
#undef public_6ef6148
#undef public_6ef616e
#undef public_6ef6186
#undef public_6ef61a5
#undef public_6ef621c
#undef public_6ef6225
#undef public_6ef622e
#undef public_6ef6250
#undef public_6ef627e
#undef public_6ef628d
#undef public_6ef62bf
#undef public_6ef62cc
#undef public_6ef62de
#undef public_6ef6307
#undef public_6ef6309
