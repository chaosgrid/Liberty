#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6249916);

#define public_6230634 _public_6230634
#define public_6230643 _public_6230643
#define public_623065c _public_623065c
#define public_6230678 _public_6230678

PROC_DECLARE(0x6230600, internal_6230600, public_6230600);
extern "C" NAKED register_t __cdecl internal_6230600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249916 @0x6230602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249916
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x6C]
        mov dword ptr ss : [esp+0x10], 1
        test eax, eax
        je public_6230634
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x34]
        public_6230634 : nop
        mov eax, dword ptr ds : [esi+0x70]
        test eax, eax
        je public_6230643
        mov edx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [edx+0x34]
        public_6230643 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x10], 0
        test eax, eax
        je public_623065c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], 0
        public_623065c : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_6230678
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], 0
        public_6230678 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6230600)
    }
}

#undef public_6230634
#undef public_6230643
#undef public_623065c
#undef public_6230678
