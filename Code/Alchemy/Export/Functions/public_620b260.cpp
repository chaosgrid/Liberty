#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624777b);

#define public_620b2aa _public_620b2aa
#define public_620b2be _public_620b2be
#define public_620b2e3 _public_620b2e3

PROC_DECLARE(0x620b260, internal_620b260, public_620b260);
extern "C" NAKED register_t __cdecl internal_620b260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624777b @0x620b262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624777b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_620b2aa
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_620b2aa
        push eax
        call public_62460e0
        add esp, 4
        public_620b2aa : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_620b2be
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_620b2be : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_620b2e3
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_620b2e3
        push esi
        call public_62460e0
        add esp, 4
        public_620b2e3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x620b260)
    }
}

#undef public_620b2aa
#undef public_620b2be
#undef public_620b2e3
