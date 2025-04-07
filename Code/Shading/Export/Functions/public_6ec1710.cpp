#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0340);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0350);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0360);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1140);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1710);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ec1777 _public_6ec1777
#define public_6ec1786 _public_6ec1786
#define public_6ec185d _public_6ec185d
#define public_6ec1893 _public_6ec1893
#define public_6ec18a1 _public_6ec18a1

PROC_DECLARE(0x6ec1710, internal_6ec1710, public_6ec1710);
extern "C" NAKED register_t __cdecl internal_6ec1710()
{
    __asm
    {
        mov eax, 0x200C
        call public_6ed0c70
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x201C]
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        push ebx
        mov edi, ecx
        or esi, 0xFFFFFFFF
        call dword ptr ds : [public_6ed1000]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[edi+0x54]
        call public_6ecaa00
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6ec1786
        mov eax, dword ptr ss : [esp+0x2028]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov al, byte ptr ss : [esp+0x202C]
        test al, al
        je public_6ec1777
        mov ecx, dword ptr ds : [ecx+0x10]
        call public_6ebe560
        public_6ec1777 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x200C
        ret 0x10
        public_6ec1786 : nop
        mov eax, dword ptr ss : [esp+0x2020]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ec1893
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6ec0350
        mov ebp, dword ptr ss : [esp+0x2028]
        mov esi, eax
        cmp esi, 0xFFFFFFF8
        jne public_6ec185d
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        push eax
        mov ecx, edi
        call public_6ec0340
        mov esi, eax
        cmp esi, 0xFFFFFFF8
        jne public_6ec185d
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push edx
        mov ecx, edi
        call public_6ec0360
        mov esi, eax
        cmp esi, 0xFFFFFFF8
        jne public_6ec185d
        mov eax, dword ptr ss : [esp+0x202C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x2020]
        push eax
        push ebp
        push ebx
        push ecx
        push edx
        mov ecx, edi
        call public_6ec1140
        mov esi, eax
        cmp esi, 0xFFFFFFF8
        jne public_6ec185d
        push ebx
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_6ed4ca0 @0x6ec1831*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ca0
        push eax
        call public_6eb22b0
        push eax
        push 0x54B
/*FIXUP push offset public_6ed4c00 @0x6ec1842*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c00
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ec184c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6ec185d : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ec1893
        test esi, esi
        jl public_6ec1893
        mov edx, dword ptr ss : [esp+0x202C]
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, edi
        call public_6ec0f10
        test al, al
        jne public_6ec1893
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0xB8]
        or esi, 0xFFFFFFFF
        public_6ec1893 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ec18a1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec18a1 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x200C
        ret 0x10
        UNREACHABLE_TRAP(0x6ec1710)
    }
}

#undef public_6ec1777
#undef public_6ec1786
#undef public_6ec185d
#undef public_6ec1893
#undef public_6ec18a1
