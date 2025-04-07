#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d530);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_JUMP_SYMBOL(public_6396c61);

#define public_631d56a _public_631d56a

PROC_DECLARE(0x631d530, internal_631d530, public_631d530);
extern "C" NAKED register_t __cdecl internal_631d530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396c61 @0x631d532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396c61
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_631d56a
        mov ecx, esi
        call public_6333e30
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        public_631d56a : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631d530)
    }
}

#undef public_631d56a
