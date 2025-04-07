#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f32510);
CLANG_FORWARD_PROC_SYMBOL(public_6f32d50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faea60);

#define public_6f32550 _public_6f32550
#define public_6f325b6 _public_6f325b6
#define public_6f325e3 _public_6f325e3
#define public_6f3260b _public_6f3260b
#define public_6f32632 _public_6f32632
#define public_6f3265a _public_6f3265a
#define public_6f32682 _public_6f32682
#define public_6f326a8 _public_6f326a8
#define public_6f326c7 _public_6f326c7
#define public_6f326d2 _public_6f326d2
#define public_6f326d4 _public_6f326d4
#define public_6f32704 _public_6f32704
#define public_6f3271c _public_6f3271c
#define public_6f3272e _public_6f3272e
#define public_6f32730 _public_6f32730
#define public_6f32740 _public_6f32740
#define public_6f327e7 _public_6f327e7
#define public_6f327fa _public_6f327fa
#define public_6f3280d _public_6f3280d
#define public_6f32825 _public_6f32825
#define public_6f32831 _public_6f32831
#define public_6f32838 _public_6f32838

PROC_DECLARE(0x6f32510, internal_6f32510, public_6f32510);
extern "C" NAKED register_t __cdecl internal_6f32510()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faea60 @0x6f32518*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faea60
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x74
        push esi
        mov esi, dword ptr ss : [esp+0x88]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f327fa
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        push edi
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f32550 : nop
        push offset public_6fb9448 @0x6f32550*/
  FIXUP public_6f32550 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9448
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f327e7
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ss:[esp+0x30]
        call edi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        call edi
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_6ead6a0
        mov dword ptr ss : [esp+0x54], ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x8C], ebx
        call edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f32740
/*FIXUP public_6f325b6 : nop
        push offset public_6fb445c @0x6f325b6*/
  FIXUP public_6f325b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f325e3
        push ebx
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], eax
        jmp public_6f32730
/*FIXUP public_6f325e3 : nop
        push offset public_6fb9438 @0x6f325e3*/
  FIXUP public_6f325e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9438
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3260b
        push ebx
        call ebp
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call dword ptr ds : [public_6fb33e8]
        add esp, 8
        jmp public_6f32730
/*FIXUP public_6f3260b : nop
        push offset public_6fb618c @0x6f3260b*/
  FIXUP public_6f3260b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb618c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f32632
        push ebx
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        jmp public_6f32730
/*FIXUP public_6f32632 : nop
        push offset public_6fb8b60 @0x6f32632*/
  FIXUP public_6f32632 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8b60
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3265a
        push ebx
        call ebp
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        call dword ptr ds : [public_6fb33e4]
        add esp, 8
        jmp public_6f32730
/*FIXUP public_6f3265a : nop
        push offset public_6fb942c @0x6f3265a*/
  FIXUP public_6f3265a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb942c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f32682
        push ebx
        push ebx
        call ebp
        push eax
        call dword ptr ds : [public_6fb30b4]
        add esp, 8
        mov dword ptr ss : [esp+0x40], eax
        jmp public_6f32730
/*FIXUP public_6f32682 : nop
        push offset public_6fb9420 @0x6f32682*/
  FIXUP public_6f32682 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9420
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3280d
        push ebx
        xor edi, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f3272e
        public_6f326a8 : nop
        push edi
        mov ecx, esi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x50]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f326d2
        public_6f326c7 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6f326d4
        add ecx, 4
        cmp ecx, edx
        jne public_6f326c7
        public_6f326d2 : nop
        mov ecx, edx
        public_6f326d4 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f32704
        lea eax, ss:[esp+0x14]
        push eax
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6eae440
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6f3271c
        public_6f32704 : nop
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1A], 0
        call public_6fa6e80
        public_6f3271c : nop
        inc edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f326a8
        public_6f3272e : nop
        xor ebx, ebx
        public_6f32730 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f325b6
        public_6f32740 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        call public_6eb35b0
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x80], edx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        mov byte ptr ss : [esp+0x94], 1
        call public_6f32d50
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        public_6f327e7 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f32550
        pop edi
        pop ebp
        pop ebx
        public_6f327fa : nop
        mov ecx, dword ptr ss : [esp+0x78]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x80
        ret 
/*FIXUP public_6f3280d : nop
        push offset public_6fb9418 @0x6f3280d*/
  FIXUP public_6f3280d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9418
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f32730
        push ebx
        mov ecx, esi
        call ebp
        public_6f32825 : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x30
        jl public_6f32831
        cmp cl, 0x39
        jle public_6f32838
        public_6f32831 : nop
        cmp cl, bl
        je public_6f32838
        inc eax
        jmp public_6f32825
        public_6f32838 : nop
        push eax
        call dword ptr ds : [public_6fb3344]
        add esp, 4
        mov dword ptr ss : [esp+0x54], eax
        jmp public_6f32730
        UNREACHABLE_TRAP(0x6f32510)
    }
}

#undef public_6f32550
#undef public_6f325b6
#undef public_6f325e3
#undef public_6f3260b
#undef public_6f32632
#undef public_6f3265a
#undef public_6f32682
#undef public_6f326a8
#undef public_6f326c7
#undef public_6f326d2
#undef public_6f326d4
#undef public_6f32704
#undef public_6f3271c
#undef public_6f3272e
#undef public_6f32730
#undef public_6f32740
#undef public_6f327e7
#undef public_6f327fa
#undef public_6f3280d
#undef public_6f32825
#undef public_6f32831
#undef public_6f32838
