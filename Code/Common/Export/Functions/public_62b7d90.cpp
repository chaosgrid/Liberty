#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_62b7d90);
CLANG_FORWARD_PROC_SYMBOL(public_62bb4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6394808);

#define public_62b7e0c _public_62b7e0c
#define public_62b7eba _public_62b7eba

PROC_DECLARE(0x62b7d90, internal_62b7d90, public_62b7d90);
extern "C" NAKED register_t __cdecl internal_62b7d90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394808 @0x62b7d92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394808
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        or esi, 0xFFFFFFFF
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [edi+0x1D0]
        mov eax, dword ptr ds : [eax]
        lea ebx, ds:[edi+0x1CC]
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], 0
        call public_627f280
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_62b7e0c
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0xC], esi
        public_62b7e0c : nop
        mov eax, dword ptr ds : [edi+0x1D0]
        mov edx, dword ptr ds : [public_6399038]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi+0x88]
        mov ecx, dword ptr ds : [ecx+0x44]
        push ebp
        mov ebp, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        mov edx, dword ptr ds : [edi+4]
        push edx
        push ecx
        push eax
        add esi, 8
        call dword ptr ss : [ebp+0x24]
        cmp eax, 0xFFFFFFFF
        pop ebp
        mov dword ptr ds : [esi], eax
        push 0
        jne public_62b7eba
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_62bb4d0
        push esi
        call public_6391d5a
        mov esi, dword ptr ds : [ebx+8]
        add esp, 4
        dec esi
        mov dword ptr ds : [ebx+8], esi
        mov ecx, dword ptr ds : [edi+0x88]
        add ecx, 8
        mov esi, 0x100001
        call public_6333e60
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push edx
        push 0x194
/*FIXUP push offset public_639e820 @0x62b7e96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
/*FIXUP push offset public_639e2e0 @0x62b7e9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e2e0
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_62b7eba : nop
        mov ecx, dword ptr ds : [public_6399038]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        push 2
        push eax
        push ecx
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi]
        push eax
        call public_627d8a0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62b7d90)
    }
}

#undef public_62b7e0c
#undef public_62b7eba
