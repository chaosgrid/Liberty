#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ededd0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eec030);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab46b);

#define public_6edeec1 _public_6edeec1
#define public_6edef0e _public_6edef0e
#define public_6edf097 _public_6edf097
#define public_6edf0a5 _public_6edf0a5
#define public_6edf0b3 _public_6edf0b3
#define public_6edf13a _public_6edf13a
#define public_6edf13c _public_6edf13c
#define public_6edf13f _public_6edf13f

PROC_DECLARE(0x6ededd0, internal_6ededd0, public_6ededd0);
extern "C" NAKED register_t __cdecl internal_6ededd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab46b @0x6ededd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab46b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20C
        mov eax, dword ptr ss : [esp+0x220]
        mov dl, byte ptr ss : [esp+0xF]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x228]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x228]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x230]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x22C], edi
        mov dword ptr ds : [ebx], offset public_6fb6e84
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edf13c
        push 0xC004
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edf13a
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x22C]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edf13f
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edeec1
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6edef0e
        public_6edeec1 : nop
        push 0x10
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        push edi
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
        lea edx, ds:[edi+0x10]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6edef0e : nop
        push offset public_6fb6e64 @0x6edef0e*/
  FIXUP public_6edef0e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e64
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0xCC], 0
        mov byte ptr ss : [esp+0xD0], 0
        call public_6ead640
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb62ec @0x6edef35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea edx, ss:[esp+0xD4]
        push edx
        lea eax, ss:[esp+0x15C]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x50]
        rep movsd
        lea ecx, ss:[esp+0x54]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb6e44 @0x6edef80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e44
        lea ecx, ss:[esp+0x8C]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x90], 0
        mov byte ptr ss : [esp+0x94], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0x94], eax
/*FIXUP push offset public_6fb62ec @0x6edefb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x1AC]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x60]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x5C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x48], 0
        push ecx
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        test eax, eax
        jne public_6edf097
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 8
        test eax, 0xC40
        je public_6edf0b3
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6edf0a5
        public_6edf097 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6edf0a5 : nop
        push offset public_6fb6064 @0x6edf0a5*/
  FIXUP public_6edf0a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x44]
        call public_6eec250
        public_6edf0b3 : nop
        lea edx, ss:[esp+0x110]
        mov ecx, 0x11
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0x10C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x238]
        push edx
        push eax
        lea ecx, ss:[esp+0x1E0]
        push ecx
        call public_6eec030
        lea edx, ss:[esp+0x11C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x118]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        jmp public_6edf13f
        public_6edf13a : nop
        xor edi, edi
        public_6edf13c : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edf13f : nop
        mov ecx, dword ptr ss : [esp+0x21C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x218
        ret 0x10
        UNREACHABLE_TRAP(0x6ededd0)
    }
}

#undef public_6edeec1
#undef public_6edef0e
#undef public_6edf097
#undef public_6edf0a5
#undef public_6edf0b3
#undef public_6edf13a
#undef public_6edf13c
#undef public_6edf13f
