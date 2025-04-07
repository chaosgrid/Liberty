#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eab350);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf080);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9c1e);

#define public_6eab390 _public_6eab390
#define public_6eab3bd _public_6eab3bd
#define public_6eab3da _public_6eab3da
#define public_6eab3e4 _public_6eab3e4
#define public_6eab3f0 _public_6eab3f0
#define public_6eab400 _public_6eab400
#define public_6eab455 _public_6eab455
#define public_6eab484 _public_6eab484
#define public_6eab4a1 _public_6eab4a1
#define public_6eab522 _public_6eab522
#define public_6eab536 _public_6eab536
#define public_6eab54c _public_6eab54c
#define public_6eab589 _public_6eab589
#define public_6eab5b8 _public_6eab5b8
#define public_6eab5c3 _public_6eab5c3
#define public_6eab5c5 _public_6eab5c5
#define public_6eab5f5 _public_6eab5f5
#define public_6eab60c _public_6eab60c
#define public_6eab61c _public_6eab61c
#define public_6eab700 _public_6eab700
#define public_6eab70d _public_6eab70d
#define public_6eab71d _public_6eab71d

PROC_DECLARE(0x6eab350, internal_6eab350, public_6eab350);
extern "C" NAKED register_t __cdecl internal_6eab350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9c1e @0x6eab352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9c1e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xBC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xD4]
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        xor ebx, ebx
        test al, al
        je public_6eab3f0
        mov esi, dword ptr ds : [public_6fb3020]
        mov edi, edi
/*FIXUP public_6eab390 : nop
        push offset public_6fb4518 @0x6eab390*/
  FIXUP public_6eab390 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4518
        mov ecx, ebp
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebp
        je public_6eab3bd
        call dword ptr ds : [public_6fb3054]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0x54
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        jmp public_6eab3e4
/*FIXUP public_6eab3bd : nop
        push offset public_6fb4510 @0x6eab3bd*/
  FIXUP public_6eab3bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4510
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6eab3da
        push ebx
        mov ecx, ebp
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x4C], eax
        jmp public_6eab3e4
        public_6eab3da : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+8]
        public_6eab3e4 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eab390
        public_6eab3f0 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eab71d
        public_6eab400 : nop
        mov esi, dword ptr ds : [public_6fb301c]
/*FIXUP push offset public_6fb4504 @0x6eab406*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4504
        mov ecx, ebp
        call esi
        test al, al
        je public_6eab700
        lea eax, ss:[esp+0x1B]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6ead6a0
        lea ecx, ss:[esp+0x3C]
        call public_6eac620
        mov ecx, ebp
        mov dword ptr ss : [esp+0xD4], ebx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eab61c
        public_6eab455 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb44fc @0x6eab45b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6eab484
        call dword ptr ds : [public_6fb3054]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        jmp public_6eab60c
/*FIXUP public_6eab484 : nop
        push offset public_6fb44f4 @0x6eab484*/
  FIXUP public_6eab484 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44f4
        call esi
        test al, al
        mov ecx, ebp
        je public_6eab4a1
        push ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6eab60c
/*FIXUP public_6eab4a1 : nop
        push offset public_6fb44e4 @0x6eab4a1*/
  FIXUP public_6eab4a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44e4
        call esi
        test al, al
        je public_6eab589
/*FIXUP push offset public_6fb44d4 @0x6eab4b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44d4
        lea edx, ss:[esp+0x90]
        push 0x18
        push edx
        mov dword ptr ss : [esp+0x94], ebx
        mov byte ptr ss : [esp+0x98], bl
        call public_6ea9f40
        add esp, 0xC
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x8C], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x80]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x84]
        push 3
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0x3F800000
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eab522
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x20]
        public_6eab522 : nop
        mov esi, dword ptr ds : [public_6fb36a0]
        call esi
        test al, al
        jne public_6eab536
        cmp byte ptr ds : [public_6fce378], bl
        jne public_6eab54c
        public_6eab536 : nop
        call esi
        test al, al
        je public_6eab60c
        cmp byte ptr ds : [public_6fce379], bl
        je public_6eab60c
        public_6eab54c : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x80]
        lea edi, ss:[esp+0xA4]
        rep movsd
        lea ecx, ss:[esp+0xA4]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0xD4], eax
        call public_6eaed70
        jmp public_6eab60c
/*FIXUP public_6eab589 : nop
        push offset public_6fb44d0 @0x6eab589*/
  FIXUP public_6eab589 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44d0
        mov ecx, ebp
        call esi
        test al, al
        je public_6eab60c
        mov ecx, ebp
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], eax
        je public_6eab5c3
        public_6eab5b8 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6eab5c5
        add ecx, 4
        cmp ecx, edx
        jne public_6eab5b8
        public_6eab5c3 : nop
        mov ecx, edx
        public_6eab5c5 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x4C], ecx
        jne public_6eab5f5
        lea eax, ss:[esp+0x24]
        push eax
        push edx
        lea ecx, ss:[esp+0x34]
        call public_6eae440
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x50], eax
        mov byte ptr ss : [esp+0x54], 1
        jmp public_6eab60c
        public_6eab5f5 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x1B], bl
        call public_6fa6e80
        public_6eab60c : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eab455
        public_6eab61c : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x58], ecx
        push edx
        lea ecx, ss:[esp+0x60]
        call public_6eb35b0
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0xD8], 1
        call public_6ead5c0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x7C], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x60]
        lea ecx, ds:[edx+0x58]
        lea edx, ss:[esp+0x58]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0xE0], 2
        call public_6eaf080
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0xD4], 3
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x60]
        push eax
        push ecx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xDC], bl
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x60]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0xD4], 4
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xDC], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        jmp public_6eab70d
/*FIXUP public_6eab700 : nop
        push offset public_6fb4490 @0x6eab700*/
  FIXUP public_6eab700 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4490
        mov ecx, ebp
        call esi
        test al, al
        jne public_6eab71d
        public_6eab70d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eab400
        public_6eab71d : nop
        mov ecx, dword ptr ss : [esp+0xCC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC8
        ret 4
        UNREACHABLE_TRAP(0x6eab350)
    }
}

#undef public_6eab390
#undef public_6eab3bd
#undef public_6eab3da
#undef public_6eab3e4
#undef public_6eab3f0
#undef public_6eab400
#undef public_6eab455
#undef public_6eab484
#undef public_6eab4a1
#undef public_6eab522
#undef public_6eab536
#undef public_6eab54c
#undef public_6eab589
#undef public_6eab5b8
#undef public_6eab5c3
#undef public_6eab5c5
#undef public_6eab5f5
#undef public_6eab60c
#undef public_6eab61c
#undef public_6eab700
#undef public_6eab70d
#undef public_6eab71d
