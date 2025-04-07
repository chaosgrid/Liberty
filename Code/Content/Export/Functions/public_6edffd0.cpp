#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6edffd0);
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
CLANG_FORWARD_JUMP_SYMBOL(public_6fab40b);

#define public_6ee00bc _public_6ee00bc
#define public_6ee0109 _public_6ee0109
#define public_6ee01d5 _public_6ee01d5
#define public_6ee036e _public_6ee036e
#define public_6ee0370 _public_6ee0370
#define public_6ee0373 _public_6ee0373
#define public_6ee0375 _public_6ee0375

PROC_DECLARE(0x6edffd0, internal_6edffd0, public_6edffd0);
extern "C" NAKED register_t __cdecl internal_6edffd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab40b @0x6edffd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab40b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x27C
        mov eax, dword ptr ss : [esp+0x290]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x2A0]
        push edi
        lea edx, ss:[esp+0x1B]
        mov dword ptr ds : [esi+8], ecx
        xor ebx, ebx
        lea ebp, ds:[esi+0x14]
        lea edi, ds:[esi+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x29C]
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        lea ecx, ss:[esp+0x2A0]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x29C], ebx
        mov dword ptr ds : [esi], offset public_6fb7068
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, ebx
        je public_6ee0370
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee036e
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x29C]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee0373
        mov dword ptr ds : [esi+0x28], 0x4A40
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ee00bc
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 8
        jae public_6ee0109
        public_6ee00bc : nop
        push 0x20
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
        lea edx, ds:[esi+0x20]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
/*FIXUP public_6ee0109 : nop
        push offset public_6fb6e64 @0x6ee0109*/
  FIXUP public_6ee0109 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e64
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0xB4], 0
        mov byte ptr ss : [esp+0xB8], 0
        call public_6ead640
        mov ecx, dword ptr ds : [edi]
        push ecx
/*FIXUP push offset public_6fb62ec @0x6ee0130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea edx, ss:[esp+0xBC]
        push edx
        lea eax, ss:[esp+0x210]
        push eax
        call public_6eeaf10
        mov ebx, dword ptr ds : [public_6fb3684]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x7C]
        rep movsd
        lea ecx, ss:[esp+0x80]
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
/*FIXUP push offset public_6fb6348 @0x6ee017e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x6C]
        push edx
        mov dword ptr ss : [esp+0x70], 0
        mov byte ptr ss : [esp+0x74], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ee01d5
/*FIXUP push offset public_6fb632c @0x6ee01c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x70]
        call public_6ead640
/*FIXUP public_6ee01d5 : nop
        push offset public_6fb6324 @0x6ee01d5*/
  FIXUP public_6ee01d5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x70]
        call public_6eec250
        lea eax, ss:[esp+0x2C]
        mov ecx, 0x11
        lea esi, ss:[esp+0x6C]
        lea edi, ss:[esp+0x28]
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
        lea ecx, ss:[esp+0x140]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
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
        lea eax, ss:[esp+0x184]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
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
/*FIXUP push offset public_6fb6314 @0x6ee0292*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x1C8]
        push 3
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        lea edi, ss:[esp+0x38]
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
/*FIXUP push offset public_6fb7050 @0x6ee02f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7050
        lea ecx, ss:[esp+0xF8]
        mov dword ptr ss : [esp+0xF8], 0
        mov byte ptr ss : [esp+0xFC], 0
        call public_6ead640
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edx+0xC]
        mov eax, dword ptr ds : [eax]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ee0321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x100]
        push ecx
        lea edx, ss:[esp+0x254]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x3C]
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
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
        mov eax, dword ptr ss : [esp+0x1C]
        jmp public_6ee0375
        public_6ee036e : nop
        xor ebx, ebx
        public_6ee0370 : nop
        mov dword ptr ds : [esi+0x24], ebx
        public_6ee0373 : nop
        mov eax, esi
        public_6ee0375 : nop
        mov ecx, dword ptr ss : [esp+0x28C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x288
        ret 0xC
        UNREACHABLE_TRAP(0x6edffd0)
    }
}

#undef public_6ee00bc
#undef public_6ee0109
#undef public_6ee01d5
#undef public_6ee036e
#undef public_6ee0370
#undef public_6ee0373
#undef public_6ee0375
