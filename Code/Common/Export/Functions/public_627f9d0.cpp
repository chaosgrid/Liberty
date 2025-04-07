#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392e2b);

#define public_627fa04 _public_627fa04

PROC_DECLARE(0x627f9d0, internal_627f9d0, public_627f9d0);
extern "C" NAKED register_t __cdecl internal_627f9d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392e2b @0x627f9d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392e2b
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
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_627fa04
        push eax
        call public_6343ff0
        add esp, 4
        public_627fa04 : nop
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x627f9d0)
    }
}

#undef public_627fa04
