#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ede3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab38b);

#define public_6ede4be _public_6ede4be
#define public_6ede50b _public_6ede50b
#define public_6ede546 _public_6ede546
#define public_6ede54f _public_6ede54f
#define public_6ede699 _public_6ede699
#define public_6ede69c _public_6ede69c

PROC_DECLARE(0x6ede3d0, internal_6ede3d0, public_6ede3d0);
extern "C" NAKED register_t __cdecl internal_6ede3d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab38b @0x6ede3d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab38b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1AC
        mov eax, dword ptr ss : [esp+0x1C0]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x1C8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x1C8]
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
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x1D0]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x1CC], edi
        mov dword ptr ds : [ebx], offset public_6fb6ddc
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ede699
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ede699
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x1CC]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ede69c
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6ede4be
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6ede50b
        public_6ede4be : nop
        push 0x10
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
        lea edx, ds:[esi+0x10]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6ede50b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x68], edi
        mov byte ptr ss : [esp+0x6C], 0
        call public_6eb6bb0
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6f50650
        add esp, 4
        cmp eax, edi
        je public_6ede546
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x6C]
        jmp public_6ede54f
/*FIXUP public_6ede546 : nop
        push offset public_6fb632c @0x6ede546*/
  FIXUP public_6ede546 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x6C]
        public_6ede54f : nop
        call public_6ead640
/*FIXUP push offset public_6fb6324 @0x6ede554*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x6C]
        call public_6eec250
        lea eax, ss:[esp+0x28]
        mov ecx, 0x11
        lea esi, ss:[esp+0x68]
        lea edi, ss:[esp+0x24]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0xF8]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x38]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x34]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_6fb6064 @0x6ede5de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push edx
        lea eax, ss:[esp+0x13C]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x34]
        rep movsd
        lea ecx, ss:[esp+0x38]
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
/*FIXUP push offset public_6fb6dc4 @0x6ede624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6dc4
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xB0], 0
        mov byte ptr ss : [esp+0xB4], 0
        call public_6ead640
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ede64c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0xB8]
        push edx
        lea eax, ss:[esp+0x184]
        push eax
        call public_6eeaf10
        mov ecx, 0x11
        mov esi, eax
        lea edi, ss:[esp+0x34]
        rep movsd
        lea ecx, ss:[esp+0x38]
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
        jmp public_6ede69c
        public_6ede699 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ede69c : nop
        mov ecx, dword ptr ss : [esp+0x1BC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1B8
        ret 0xC
        UNREACHABLE_TRAP(0x6ede3d0)
    }
}

#undef public_6ede4be
#undef public_6ede50b
#undef public_6ede546
#undef public_6ede54f
#undef public_6ede699
#undef public_6ede69c
