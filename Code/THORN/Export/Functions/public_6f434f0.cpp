#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f434f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59268);

#define public_6f4352f _public_6f4352f

PROC_DECLARE(0x6f434f0, internal_6f434f0, public_6f434f0);
extern "C" NAKED register_t __cdecl internal_6f434f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59268 @0x6f434f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59268
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xCC]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f4352f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xCC], 0
        public_6f4352f : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f434f0)
    }
}

#undef public_6f4352f
