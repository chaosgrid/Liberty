#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6339010);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639782e);

#define public_6339057 _public_6339057
#define public_633906a _public_633906a

PROC_DECLARE(0x6339010, internal_6339010, public_6339010);
extern "C" NAKED register_t __cdecl internal_6339010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639782e @0x6339012*/
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
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a5094
        mov ecx, dword ptr ds : [esi+0x50]
        xor edi, edi
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edi
        je public_6339057
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [esi+0x50], 0xFFFFFFFF
        public_6339057 : nop
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, edi
        je public_633906a
        push eax
        call public_6391d5a
        add esp, 4
        public_633906a : nop
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
        UNREACHABLE_TRAP(0x6339010)
    }
}

#undef public_6339057
#undef public_633906a
