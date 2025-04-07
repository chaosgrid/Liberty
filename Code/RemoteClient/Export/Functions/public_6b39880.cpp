#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d08);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a6cb);

#define public_6b398d9 _public_6b398d9

PROC_DECLARE(0x6b39880, internal_6b39880, public_6b39880);
extern "C" NAKED register_t __cdecl internal_6b39880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a6cb @0x6b39882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a6cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x70
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6b398d9
        mov ecx, esi
        call public_6b69d08
        mov dword ptr ds : [esi], offset public_6b6bd80
        mov dword ptr ds : [esi+0x68], 0
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6b398d9 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6b39880)
    }
}

#undef public_6b398d9
