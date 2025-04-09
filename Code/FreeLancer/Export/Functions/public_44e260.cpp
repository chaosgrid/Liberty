#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44e260);
CLANG_FORWARD_PROC_SYMBOL(public_452fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d4b);

#define public_44e2b6 _public_44e2b6

PROC_DECLARE(0x44e260, internal_44e260, public_44e260);
extern "C" NAKED register_t __cdecl internal_44e260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d4b @0x44e262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0xA4
        mov esi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_44e2b6
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push esi
        mov ecx, eax
        call public_452fa0
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_44e2b6 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x44e260)
    }
}

#undef public_44e2b6
