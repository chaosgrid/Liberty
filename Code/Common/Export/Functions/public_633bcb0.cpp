#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639782e);

#define public_633bcf9 _public_633bcf9
#define public_633bd0c _public_633bd0c

PROC_DECLARE(0x633bcb0, internal_633bcb0, public_633bcb0);
extern "C" NAKED register_t __cdecl internal_633bcb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639782e @0x633bcb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639782e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a5094
        mov eax, dword ptr ds : [esi+0x50]
        xor edi, edi
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edi
        je public_633bcf9
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [esi+0x50], 0xFFFFFFFF
        public_633bcf9 : nop
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, edi
        je public_633bd0c
        push eax
        call public_6391d5a
        add esp, 4
        public_633bd0c : nop
        mov eax, dword ptr ds : [esi+0x90]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x94], edi
        mov dword ptr ds : [esi+0x98], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x633bcb0)
    }
}

#undef public_633bcf9
#undef public_633bd0c
