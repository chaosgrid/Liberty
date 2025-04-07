#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_634f180);
CLANG_FORWARD_PROC_SYMBOL(public_635c020);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639801b);

#define public_634f1ae _public_634f1ae
#define public_634f1dc _public_634f1dc
#define public_634f1de _public_634f1de

PROC_DECLARE(0x634f180, internal_634f180, public_634f180);
extern "C" NAKED register_t __cdecl internal_634f180()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639801b @0x634f188*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639801b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+0x90]
        test ecx, ecx
        je public_634f1ae
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_634f1ae : nop
        push 0x30
        mov dword ptr ds : [esi+0x90], 0
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_634f1dc
        push esi
        mov ecx, eax
        call public_635c020
        jmp public_634f1de
        public_634f1dc : nop
        xor eax, eax
        public_634f1de : nop
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x90], eax
        call public_634ebd0
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x634f180)
    }
}

#undef public_634f1ae
#undef public_634f1dc
#undef public_634f1de
