#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6edd1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
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
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4ab);

#define public_6edd2e1 _public_6edd2e1
#define public_6edd32e _public_6edd32e
#define public_6edd468 _public_6edd468
#define public_6edd491 _public_6edd491
#define public_6edd49f _public_6edd49f
#define public_6edd4da _public_6edd4da
#define public_6edd4dc _public_6edd4dc
#define public_6edd4df _public_6edd4df

PROC_DECLARE(0x6edd1f0, internal_6edd1f0, public_6edd1f0);
extern "C" NAKED register_t __cdecl internal_6edd1f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4ab @0x6edd1f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x148
        mov eax, dword ptr ss : [esp+0x15C]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x164]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x164]
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
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x16C]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x168], edi
        mov dword ptr ds : [ebx], offset public_6fb6c1c
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edd4dc
        push 0xC004
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edd4da
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x168]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edd4df
        mov dword ptr ds : [ebx+0x28], 0x4A3B
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edd2e1
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 3
        jae public_6edd32e
        public_6edd2e1 : nop
        push 0xC
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
        lea edx, ds:[edi+0xC]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6edd32e : nop
        push offset public_6fb6c04 @0x6edd32e*/
  FIXUP public_6edd32e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6c04
        lea ecx, ss:[esp+0x94]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x98], 0
        mov byte ptr ss : [esp+0x9C], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x9C], eax
/*FIXUP push offset public_6fb62ec @0x6edd35f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea eax, ss:[esp+0xA4]
        push eax
        lea ecx, ss:[esp+0x12C]
        push ecx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x64]
        lea edx, ss:[esp+0x68]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb6308 @0x6edd3ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        call esi
        add esp, 4
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x50], 0
        mov byte ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, eax
        jne public_6edd468
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        test eax, 0xC40
        je public_6edd49f
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x54]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6edd491
        public_6edd468 : nop
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        push eax
        call public_6eac0c0
        add esp, 4
        test eax, eax
        je public_6edd491
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6ead640
/*FIXUP public_6edd491 : nop
        push offset public_6fb6064 @0x6edd491*/
  FIXUP public_6edd491 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x4C]
        call public_6eec250
        public_6edd49f : nop
        lea eax, ss:[esp+0xD4]
        mov ecx, 0x11
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0xD0]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_6f937c0
        jmp public_6edd4df
        public_6edd4da : nop
        xor edi, edi
        public_6edd4dc : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edd4df : nop
        mov ecx, dword ptr ss : [esp+0x158]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x154
        ret 0xC
        UNREACHABLE_TRAP(0x6edd1f0)
    }
}

#undef public_6edd2e1
#undef public_6edd32e
#undef public_6edd468
#undef public_6edd491
#undef public_6edd49f
#undef public_6edd4da
#undef public_6edd4dc
#undef public_6edd4df
