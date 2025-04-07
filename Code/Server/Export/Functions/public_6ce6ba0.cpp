#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d604e8);

#define public_6ce6bfd _public_6ce6bfd
#define public_6ce6c11 _public_6ce6c11
#define public_6ce6c2d _public_6ce6c2d
#define public_6ce6c2f _public_6ce6c2f
#define public_6ce6c6b _public_6ce6c6b
#define public_6ce6c6d _public_6ce6c6d
#define public_6ce6c84 _public_6ce6c84
#define public_6ce6c8c _public_6ce6c8c
#define public_6ce6c99 _public_6ce6c99
#define public_6ce6d0c _public_6ce6d0c
#define public_6ce6d24 _public_6ce6d24
#define public_6ce6d3d _public_6ce6d3d

PROC_DECLARE(0x6ce6ba0, internal_6ce6ba0, public_6ce6ba0);
extern "C" NAKED register_t __cdecl internal_6ce6ba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d604e8 @0x6ce6ba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d604e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ds : [ecx+0x24]
        push ebx
        push ebp
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], ecx
        je public_6ce6d3d
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        mov ecx, ebp
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce6d3d
        mov ebx, dword ptr ss : [esp+0x3C]
        cmp ebx, edi
        je public_6ce6d24
        cmp dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], edi
        jne public_6ce6bfd
        mov dword ptr ss : [esp+0x40], edi
        public_6ce6bfd : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6ce6c11
        cmp dword ptr ss : [esp+0x40], edi
        jne public_6ce6c99
        public_6ce6c11 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        je public_6ce6c2d
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce6c2f
        public_6ce6c2d : nop
        xor eax, eax
        public_6ce6c2f : nop
        mov ecx, dword ptr ss : [esp+0x38]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        push esi
        lea ecx, ds:[eax+0xE4]
        push edx
        call dword ptr ds : [public_6d641c4]
        mov esi, eax
        cmp esi, edi
        je public_6ce6c84
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x150]
        cmp eax, edi
        je public_6ce6c6b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6ce6c6d
        public_6ce6c6b : nop
        xor eax, eax
        public_6ce6c6d : nop
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d641c8]
        cmp eax, edi
        je public_6ce6c8c
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFB
        jmp public_6ce6c8c
        public_6ce6c84 : nop
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFE
        public_6ce6c8c : nop
        cmp dword ptr ss : [esp+0x44], edi
        pop esi
        jne public_6ce6c99
        cmp dword ptr ss : [esp+0x3C], edi
        jne public_6ce6d0c
        public_6ce6c99 : nop
        mov dl, byte ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x18], dl
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dx, word ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov word ptr ss : [esp+0x14], dx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x38]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], eax
        call public_6cecbd0
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ds : [edx+0x24]
        call public_6d0e7a0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce6d0c : nop
        mov eax, dword ptr ss : [esp+0x3C]
        pop edi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        public_6ce6d24 : nop
        pop edi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        public_6ce6d3d : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6ce6ba0)
    }
}

#undef public_6ce6bfd
#undef public_6ce6c11
#undef public_6ce6c2d
#undef public_6ce6c2f
#undef public_6ce6c6b
#undef public_6ce6c6d
#undef public_6ce6c84
#undef public_6ce6c8c
#undef public_6ce6c99
#undef public_6ce6d0c
#undef public_6ce6d24
#undef public_6ce6d3d
