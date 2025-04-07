#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0590);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1875);

#define public_6f995c0 _public_6f995c0
#define public_6f995d9 _public_6f995d9
#define public_6f995f2 _public_6f995f2
#define public_6f9960b _public_6f9960b
#define public_6f99624 _public_6f99624
#define public_6f9963d _public_6f9963d
#define public_6f99656 _public_6f99656
#define public_6f9966f _public_6f9966f
#define public_6f99688 _public_6f99688
#define public_6f996a1 _public_6f996a1
#define public_6f996b7 _public_6f996b7
#define public_6f996cd _public_6f996cd
#define public_6f996e3 _public_6f996e3
#define public_6f996f9 _public_6f996f9
#define public_6f9970f _public_6f9970f
#define public_6f99727 _public_6f99727

PROC_DECLARE(0x6f99560, internal_6f99560, public_6f99560);
extern "C" NAKED register_t __cdecl internal_6f99560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1875 @0x6f99562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1875
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x74
        push ebx
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        push ebp
        mov eax, ecx
        push esi
        inc ecx
        push edi
        mov dword ptr ss : [esp+0x98], ecx
        mov ecx, dword ptr ss : [esp+0x94]
        push eax
        call dword ptr ds : [public_6fb3048]
        mov edi, dword ptr ds : [public_6fb3294]
        mov esi, eax
/*FIXUP push offset public_6fbce70 @0x6f995a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce70
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f995c0
        mov esi, 2
        jmp public_6f99727
/*FIXUP public_6f995c0 : nop
        push offset public_6fbce5c @0x6f995c0*/
  FIXUP public_6f995c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce5c
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f995d9
        mov esi, 1
        jmp public_6f99727
/*FIXUP public_6f995d9 : nop
        push offset public_6fbce44 @0x6f995d9*/
  FIXUP public_6f995d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce44
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f995f2
        mov esi, 3
        jmp public_6f99727
/*FIXUP public_6f995f2 : nop
        push offset public_6fbce34 @0x6f995f2*/
  FIXUP public_6f995f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce34
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f9960b
        mov esi, 4
        jmp public_6f99727
/*FIXUP public_6f9960b : nop
        push offset public_6fbce20 @0x6f9960b*/
  FIXUP public_6f9960b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce20
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f99624
        mov esi, 5
        jmp public_6f99727
/*FIXUP public_6f99624 : nop
        push offset public_6fbce10 @0x6f99624*/
  FIXUP public_6f99624 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce10
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f9963d
        mov esi, 0x13
        jmp public_6f99727
/*FIXUP public_6f9963d : nop
        push offset public_6fbcdfc @0x6f9963d*/
  FIXUP public_6f9963d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcdfc
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f99656
        mov esi, 0x14
        jmp public_6f99727
/*FIXUP public_6f99656 : nop
        push offset public_6fbcde8 @0x6f99656*/
  FIXUP public_6f99656 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcde8
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f9966f
        mov esi, 0x15
        jmp public_6f99727
/*FIXUP public_6f9966f : nop
        push offset public_6fbcdd8 @0x6f9966f*/
  FIXUP public_6f9966f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcdd8
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f99688
        mov esi, 0x16
        jmp public_6f99727
/*FIXUP public_6f99688 : nop
        push offset public_6fbcdc4 @0x6f99688*/
  FIXUP public_6f99688 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcdc4
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f996a1
        mov esi, 0x17
        jmp public_6f99727
/*FIXUP public_6f996a1 : nop
        push offset public_6fbcdb0 @0x6f996a1*/
  FIXUP public_6f996a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcdb0
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f996b7
        mov esi, 0x18
        jmp public_6f99727
/*FIXUP public_6f996b7 : nop
        push offset public_6fbcd9c @0x6f996b7*/
  FIXUP public_6f996b7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd9c
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f996cd
        mov esi, 9
        jmp public_6f99727
/*FIXUP public_6f996cd : nop
        push offset public_6fbcd8c @0x6f996cd*/
  FIXUP public_6f996cd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd8c
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f996e3
        mov esi, 0xA
        jmp public_6f99727
/*FIXUP public_6f996e3 : nop
        push offset public_6fbcd7c @0x6f996e3*/
  FIXUP public_6f996e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd7c
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f996f9
        mov esi, 0xB
        jmp public_6f99727
/*FIXUP public_6f996f9 : nop
        push offset public_6fbcd70 @0x6f996f9*/
  FIXUP public_6f996f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd70
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f9970f
        mov esi, 0xC
        jmp public_6f99727
/*FIXUP public_6f9970f : nop
        push offset public_6fbcd60 @0x6f9970f*/
  FIXUP public_6f9970f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd60
        push esi
        call edi
        add esp, 8
        test eax, eax
        mov esi, 0xD
        je public_6f99727
        mov esi, dword ptr ss : [esp+0x14]
        public_6f99727 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x40], ebx
        call public_6ead6a0
        mov ebp, offset public_6fbc700
        mov dword ptr ss : [esp+0x20], ebp
        lea ecx, ss:[esp+0x54]
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x90], 1
        mov dword ptr ss : [esp+0x54], esi
        call dword ptr ds : [public_6fb3084]
        mov eax, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x90], 2
        mov dword ptr ss : [esp+0x74], eax
        call public_6eb35b0
        mov dword ptr ss : [esp+0x54], ebp
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        add ecx, 4
        mov byte ptr ss : [esp+0x94], 3
        call public_6fa0590
        mov eax, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        lea esi, ds:[edx+0x10]
        mov byte ptr ss : [esp+0x90], 1
        mov dword ptr ss : [esp+0x58], ebp
        call public_6fa8fe0
        mov edi, dword ptr ds : [public_6fb3034]
        add esp, 4
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], ebp
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        call edi
        mov eax, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ss : [esp+0x98]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x84]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x80
        ret 8
        UNREACHABLE_TRAP(0x6f99560)
    }
}

#undef public_6f995c0
#undef public_6f995d9
#undef public_6f995f2
#undef public_6f9960b
#undef public_6f99624
#undef public_6f9963d
#undef public_6f99656
#undef public_6f9966f
#undef public_6f99688
#undef public_6f996a1
#undef public_6f996b7
#undef public_6f996cd
#undef public_6f996e3
#undef public_6f996f9
#undef public_6f9970f
#undef public_6f99727
