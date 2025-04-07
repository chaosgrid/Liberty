#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc650);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60dfd);

#define public_6cfd550 _public_6cfd550
#define public_6cfd5b2 _public_6cfd5b2
#define public_6cfd5b4 _public_6cfd5b4
#define public_6cfd5f7 _public_6cfd5f7
#define public_6cfd5ff _public_6cfd5ff
#define public_6cfd61e _public_6cfd61e
#define public_6cfd620 _public_6cfd620
#define public_6cfd632 _public_6cfd632
#define public_6cfd6a1 _public_6cfd6a1
#define public_6cfd6b2 _public_6cfd6b2
#define public_6cfd6c7 _public_6cfd6c7
#define public_6cfd6ec _public_6cfd6ec
#define public_6cfd749 _public_6cfd749
#define public_6cfd754 _public_6cfd754
#define public_6cfd763 _public_6cfd763
#define public_6cfd779 _public_6cfd779
#define public_6cfd7af _public_6cfd7af

PROC_DECLARE(0x6cfd4e0, internal_6cfd4e0, public_6cfd4e0);
extern "C" NAKED register_t __cdecl internal_6cfd4e0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d60dfd @0x6cfd4e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60dfd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1588
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d644f0]
        mov eax, dword ptr ss : [esp+0x15A8]
        xor edi, edi
        push edi
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x15A8], edi
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6cfd632
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64540]
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64554]
        test al, al
        jne public_6cfd632
        nop 
/*FIXUP public_6cfd550 : nop
        push offset public_6d66ba0 @0x6cfd550*/
  FIXUP public_6cfd550 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ba0
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfd7af
        push 0x3C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, edi
        mov byte ptr ss : [esp+0x15A0], 1
        je public_6cfd5b2
/*FIXUP push offset public_6d66ee4 @0x6cfd583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ee4
        lea ecx, ss:[esp+0x20]
        call public_6cfd7c0
        push 0xBF800000
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d64550]
        mov dword ptr ds : [esi+0x34], edi
        mov byte ptr ds : [esi+0x38], 0
        mov dword ptr ds : [esi], offset public_6d65724
        jmp public_6cfd5b4
        public_6cfd5b2 : nop
        xor esi, esi
        public_6cfd5b4 : nop
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x15A4], 0
        call public_6cfc650
        test al, al
        je public_6cfd620
        mov ebx, dword ptr ss : [ebp+4]
        lea edi, ds:[esi+4]
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_6d5c810
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6cfd5f7
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6cfd5f7
        lea eax, ss:[esp+0x10]
        jmp public_6cfd5ff
        public_6cfd5f7 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        public_6cfd5ff : nop
        cmp dword ptr ds : [eax], ebx
        jne public_6cfd61e
        mov edi, dword ptr ds : [edi]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], esi
        call public_6d5c600
        public_6cfd61e : nop
        xor edi, edi
        public_6cfd620 : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64554]
        test al, al
        je public_6cfd550
        public_6cfd632 : nop
        lea edx, ss:[esp+0x1458]
        mov dword ptr ss : [esp+0x15A0], 2
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x1460]
        mov byte ptr ss : [esp+0x15A8], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x1468], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6cfd6c7
        cmp dword ptr ss : [esp+0x146C], edi
        je public_6cfd6b2
        mov eax, dword ptr ss : [esp+0x1470]
        cmp eax, edi
        je public_6cfd6a1
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1470], edi
        mov dword ptr ss : [esp+0x1474], edi
        public_6cfd6a1 : nop
        mov edx, dword ptr ss : [esp+0x146C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x146C], edi
        public_6cfd6b2 : nop
        mov eax, dword ptr ss : [esp+0x1468]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1468], 0xFFFFFFFF
        public_6cfd6c7 : nop
        mov eax, dword ptr ss : [esp+0x1470]
        cmp eax, edi
        mov ebp, dword ptr ds : [public_6d64c94]
        je public_6cfd6ec
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1470], edi
        mov dword ptr ss : [esp+0x1474], edi
        public_6cfd6ec : nop
        push 1
        lea ecx, ss:[esp+0x145C]
        mov dword ptr ss : [esp+0x147C], edi
        mov byte ptr ss : [esp+0x15A4], 2
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push edi
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x15A8], 4
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_6cfd763
        cmp dword ptr ss : [esp+0x44], edi
        je public_6cfd754
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, edi
        je public_6cfd749
        push eax
        call ebx
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        public_6cfd749 : nop
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        call esi
        mov dword ptr ss : [esp+0x44], edi
        public_6cfd754 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        public_6cfd763 : nop
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, edi
        je public_6cfd779
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        public_6cfd779 : nop
        push 1
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x15A4], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ss : [esp+0x1598]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1594
        ret 4
        public_6cfd7af : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64540]
        jmp public_6cfd620
        UNREACHABLE_TRAP(0x6cfd4e0)
    }
}

#undef public_6cfd550
#undef public_6cfd5b2
#undef public_6cfd5b4
#undef public_6cfd5f7
#undef public_6cfd5ff
#undef public_6cfd61e
#undef public_6cfd620
#undef public_6cfd632
#undef public_6cfd6a1
#undef public_6cfd6b2
#undef public_6cfd6c7
#undef public_6cfd6ec
#undef public_6cfd749
#undef public_6cfd754
#undef public_6cfd763
#undef public_6cfd779
#undef public_6cfd7af
