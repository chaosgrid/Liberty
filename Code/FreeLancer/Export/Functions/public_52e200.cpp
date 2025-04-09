#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52e200);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0518);

#define public_52e279 _public_52e279
#define public_52e29c _public_52e29c

PROC_DECLARE(0x52e200, internal_52e200, public_52e200);
extern "C" NAKED register_t __cdecl internal_52e200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0518 @0x52e202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_531a30
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi], offset public_5ddad4
        je public_52e29c
        mov eax, dword ptr ds : [eax+0x70]
        cmp eax, ecx
        je public_52e29c
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ecx
        je public_52e29c
        push ebx
        lea ebx, ds:[edi+0x58]
        mov ecx, ebx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52e279
        push ebx
        call public_42ae40
        mov dword ptr ds : [esi+0x10], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52e279 : nop
        add edi, 0x5C
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        pop ebx
        jne public_52e29c
        push edi
        call public_42ae40
        mov dword ptr ds : [esi+0x14], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52e29c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x52e200)
    }
}

#undef public_52e279
#undef public_52e29c
