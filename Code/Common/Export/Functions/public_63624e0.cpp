#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_635d440);
CLANG_FORWARD_PROC_SYMBOL(public_63624e0);
CLANG_FORWARD_JUMP_SYMBOL(public_63984d8);

#define public_6362522 _public_6362522

PROC_DECLARE(0x63624e0, internal_63624e0, public_63624e0);
extern "C" NAKED register_t __cdecl internal_63624e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63984d8 @0x63624e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63984d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a5830
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6362522
        push eax
        call public_6343ff0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6362522 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_635d440
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63624e0)
    }
}

#undef public_6362522
