#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6248edb);

#define public_6225782 _public_6225782
#define public_622579e _public_622579e

PROC_DECLARE(0x6225750, internal_6225750, public_6225750);
extern "C" NAKED register_t __cdecl internal_6225750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248edb @0x6225752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248edb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_6225782
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6225782 : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_622579e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x30], 0
        public_622579e : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6225750)
    }
}

#undef public_6225782
#undef public_622579e
