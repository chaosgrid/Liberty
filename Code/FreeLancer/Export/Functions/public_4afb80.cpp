#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae030);
CLANG_FORWARD_PROC_SYMBOL(public_4afb80);
CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcf2b);

#define public_4afd29 _public_4afd29
#define public_4afd3a _public_4afd3a
#define public_4afd4c _public_4afd4c

PROC_DECLARE(0x4afb80, internal_4afb80, public_4afb80);
extern "C" NAKED register_t __cdecl internal_4afb80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcf2b @0x4afb82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcf2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x90
        push ebx
        push ebp
        lea eax, ss:[esp+8]
        push eax
        mov ebp, ecx
        call public_4ae030
        mov ebx, dword ptr ss : [esp+0xA8]
        mov eax, dword ptr ss : [esp+0xC]
        imul ebx, 0x2C
        mov ecx, dword ptr ds : [ebx+eax+0x24]
        test ecx, ecx
        mov dword ptr ss : [esp+0xA0], 0
        je public_4afd4c
        mov cl, byte ptr ds : [ebx+eax+0x28]
        test cl, cl
        je public_4afd4c
        push esi
        push edi
        push ebp
        mov byte ptr ss : [ebp+0x84C], 1
        call public_59d8d0
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[ebx+ecx]
        push 0x40
        lea edx, ss:[esp+0x28]
        push edx
        lea edi, ss:[ebp+0x850]
        mov ecx, 0xB
        rep movsd
        mov eax, dword ptr ds : [public_67eca8]
        push 0x5E6
        push eax
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4E8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+edx+0x18]
        push 0x40
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4EC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x24]
        push ecx
        push 0x698
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4FC]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0x24]
        push eax
        push 0x2148
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x500]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 1
        mov ecx, ebp
        call public_4abdf0
        mov ecx, dword ptr ss : [ebp+0x4E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov eax, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0x4E8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4EC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4F8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x500]
        or byte ptr ds : [ecx+0x6C], al
        mov cl, byte ptr ss : [esp+0xB4]
        test cl, cl
        pop edi
        pop esi
        je public_4afd29
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [ebp+0x87C], 1
        cmp dword ptr ds : [ebx+ecx+0x24], 2
        jne public_4afd4c
        jmp public_4afd3a
        public_4afd29 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [ebp+0x87C], 0
        cmp dword ptr ds : [ebx+edx+0x24], eax
        je public_4afd4c
        public_4afd3a : nop
        mov ecx, dword ptr ss : [ebp+0x4F4]
        or byte ptr ds : [ecx+0x6C], al
        mov ebp, dword ptr ss : [ebp+0x4FC]
        or byte ptr ss : [ebp+0x6C], al
        public_4afd4c : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x9C]
        add esp, 4
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x4afb80)
    }
}

#undef public_4afd29
#undef public_4afd3a
#undef public_4afd4c
