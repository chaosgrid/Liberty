#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f99d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dd50);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ecb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6f9efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f100);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0e70);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1c12);

#define public_6f9ed00 _public_6f9ed00
#define public_6f9eda3 _public_6f9eda3
#define public_6f9edbd _public_6f9edbd
#define public_6f9edce _public_6f9edce
#define public_6f9ede5 _public_6f9ede5
#define public_6f9edff _public_6f9edff
#define public_6f9ee0d _public_6f9ee0d
#define public_6f9ee24 _public_6f9ee24
#define public_6f9ee3e _public_6f9ee3e
#define public_6f9ee4a _public_6f9ee4a
#define public_6f9ee63 _public_6f9ee63
#define public_6f9ef5a _public_6f9ef5a

PROC_DECLARE(0x6f9ecb0, internal_6f9ecb0, public_6f9ecb0);
extern "C" NAKED register_t __cdecl internal_6f9ecb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1c12 @0x6f9ecb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1c12
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x240
        push esi
        mov esi, dword ptr ss : [esp+0x254]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f9ef5a
        mov edi, dword ptr ds : [public_6fb301c]
        lea eax, ss:[esp+0x134]
        push ebx
        mov dword ptr ss : [esp+0x14], eax
        xor ebx, ebx
        mov edi, edi
        public_6f9ed00 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb3030]
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x24], cl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ss : [esp+0x254], ebx
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x254], 1
        mov byte ptr ss : [esp+0x44], 1
        call public_6f9ef80
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x254], 2
        call public_6f9efb0
        mov dword ptr ss : [esp+0x128], 0xBF800000
        mov dword ptr ss : [esp+0x18], offset public_6fbd550
/*FIXUP push offset public_6fbd540 @0x6f9ed7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd540
        mov ecx, esi
        mov dword ptr ss : [esp+0x258], 3
        call edi
        test al, al
        mov ecx, esi
        je public_6f9edce
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f9ee4a
        public_6f9eda3 : nop
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f99d60
        cmp al, bl
        jne public_6f9edbd
        mov eax, dword ptr ss : [esp+0x58]
        push esi
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [eax+4]
        public_6f9edbd : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f9eda3
        jmp public_6f9ee4a
/*FIXUP public_6f9edce : nop
        push offset public_6fbd52c @0x6f9edce*/
  FIXUP public_6f9edce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd52c
        call edi
        test al, al
        mov ecx, esi
        je public_6f9ee0d
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f9ee4a
        public_6f9ede5 : nop
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f99d60
        cmp al, bl
        jne public_6f9edff
        mov edx, dword ptr ss : [esp+0x58]
        push esi
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [edx+4]
        public_6f9edff : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f9ede5
        jmp public_6f9ee4a
/*FIXUP public_6f9ee0d : nop
        push offset public_6fbd520 @0x6f9ee0d*/
  FIXUP public_6f9ee0d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd520
        call edi
        test al, al
        je public_6f9ee63
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f9ee4a
        public_6f9ee24 : nop
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f99d60
        cmp al, bl
        jne public_6f9ee3e
        mov eax, dword ptr ss : [esp+0x58]
        push esi
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [eax+4]
        public_6f9ee3e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f9ee24
        public_6f9ee4a : nop
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f9ee63
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        public_6f9ee63 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x134], ecx
        push edx
        lea ecx, ss:[esp+0x13C]
        call public_6f9fec0
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x134]
        push eax
        lea ecx, ss:[esp+0x130]
        push ecx
        lea ecx, ds:[edx+0x1C]
        mov byte ptr ss : [esp+0x25C], 4
        call public_6fa0e70
        lea ecx, ss:[esp+0x178]
        mov byte ptr ss : [esp+0x254], 7
        call public_6f9f100
        lea ecx, ss:[esp+0x168]
        mov byte ptr ss : [esp+0x254], 6
        call public_6f9dcd0
        lea ecx, ss:[esp+0x154]
        mov byte ptr ss : [esp+0x254], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0x144]
        mov byte ptr ss : [esp+0x254], 3
        call public_6eec8d0
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x254], 0xA
        call public_6f9f100
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x254], 9
        mov dword ptr ss : [esp+0x48], offset public_6fbd50c
        call public_6f9f800
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x254], 8
        call public_6eec8d0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x254], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f9ed00
        mov edi, dword ptr ss : [esp+0x10]
        pop ebx
        public_6f9ef5a : nop
        mov ecx, edi
        call public_6f9dd50
        mov ecx, dword ptr ss : [esp+0x248]
        mov byte ptr ds : [edi+4], 1
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24C
        ret 4
        UNREACHABLE_TRAP(0x6f9ecb0)
    }
}

#undef public_6f9ed00
#undef public_6f9eda3
#undef public_6f9edbd
#undef public_6f9edce
#undef public_6f9ede5
#undef public_6f9edff
#undef public_6f9ee0d
#undef public_6f9ee24
#undef public_6f9ee3e
#undef public_6f9ee4a
#undef public_6f9ee63
#undef public_6f9ef5a
