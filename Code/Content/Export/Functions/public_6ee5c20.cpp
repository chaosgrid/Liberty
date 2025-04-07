#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee5c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab9fb);

#define public_6ee5d60 _public_6ee5d60
#define public_6ee5dbd _public_6ee5dbd
#define public_6ee5ed1 _public_6ee5ed1
#define public_6ee6068 _public_6ee6068
#define public_6ee606f _public_6ee606f
#define public_6ee6071 _public_6ee6071

PROC_DECLARE(0x6ee5c20, internal_6ee5c20, public_6ee5c20);
extern "C" NAKED register_t __cdecl internal_6ee5c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab9fb @0x6ee5c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab9fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x284
        mov eax, dword ptr ss : [esp+0x298]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x2A8]
        push edi
        lea edx, ss:[esp+0x1F]
        mov dword ptr ds : [esi+8], ecx
        lea ebp, ds:[esi+0x14]
        lea ebx, ds:[esi+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [esi+0x10], 0
        call public_6ead6a0
        mov edi, dword ptr ss : [esp+0x2A4]
        xor eax, eax
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ss : [esp+0x29C], eax
        lea eax, ss:[esp+0x2A8]
        push ebx
        push eax
        mov dword ptr ds : [esi], offset public_6fb7324
        call dword ptr ds : [public_6fb3444]
        push ebx
        call public_6fa6e50
        add esp, 0xC
        test eax, eax
        je public_6ee6068
        push 8
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee6068
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        call public_6f73930
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee606f
        mov ecx, ebp
        mov dword ptr ds : [esi+0x28], 0x4A43
        call public_6eb6b30
        cmp eax, 0xB
        jae public_6ee5d60
        push 0x2C
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x2C]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6ee5d60 : nop
        mov ebx, dword ptr ds : [public_6fb3684]
/*FIXUP push offset public_6fb6348 @0x6ee5d66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x74]
        push edx
        mov dword ptr ss : [esp+0x78], 0
        mov byte ptr ss : [esp+0x7C], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ee5dbd
/*FIXUP push offset public_6fb632c @0x6ee5daf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x78]
        call public_6ead640
/*FIXUP public_6ee5dbd : nop
        push offset public_6fb6324 @0x6ee5dbd*/
  FIXUP public_6ee5dbd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x78]
        call public_6eec250
        lea eax, ss:[esp+0x34]
        mov ecx, 0x11
        lea esi, ss:[esp+0x74]
        lea edi, ss:[esp+0x30]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push eax
        lea ecx, ss:[esp+0x214]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x44]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x40]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        push edx
        lea eax, ss:[esp+0x18C]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x40]
        rep movsd
        lea ecx, ss:[esp+0x44]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6308 @0x6ee5e7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x74]
        push edx
        mov dword ptr ss : [esp+0x78], 0
        mov byte ptr ss : [esp+0x7C], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ee5ed1
/*FIXUP push offset public_6fb632c @0x6ee5ec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x78]
        call public_6ead640
/*FIXUP public_6ee5ed1 : nop
        push offset public_6fb6324 @0x6ee5ed1*/
  FIXUP public_6ee5ed1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x78]
        call public_6eec250
        lea eax, ss:[esp+0x34]
        mov ecx, 0x11
        lea esi, ss:[esp+0x74]
        lea edi, ss:[esp+0x30]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x104]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x44]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x40]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0x148]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x40]
        rep movsd
        lea ecx, ss:[esp+0x44]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ee5f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x1D0]
        push 3
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        mov esi, eax
        lea edx, ss:[esp+0x44]
        lea edi, ss:[esp+0x40]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb7310 @0x6ee5fed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7310
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xBC], 0
        mov byte ptr ss : [esp+0xC0], 0
        call public_6ead640
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edx+0xC]
        mov eax, dword ptr ds : [eax]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ee601b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0x25C]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x44]
        mov ecx, 0x11
        lea edi, ss:[esp+0x40]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x20]
        jmp public_6ee6071
        public_6ee6068 : nop
        mov dword ptr ds : [esi+0x24], 0
        public_6ee606f : nop
        mov eax, esi
        public_6ee6071 : nop
        mov ecx, dword ptr ss : [esp+0x294]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x290
        ret 0xC
        UNREACHABLE_TRAP(0x6ee5c20)
    }
}

#undef public_6ee5d60
#undef public_6ee5dbd
#undef public_6ee5ed1
#undef public_6ee6068
#undef public_6ee606f
#undef public_6ee6071
