#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf10b);

#define public_4f28f0 _public_4f28f0

PROC_DECLARE(0x4f28a0, internal_4f28a0, public_4f28a0);
extern "C" NAKED register_t __cdecl internal_4f28a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf10b @0x4f28a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf10b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x93C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_4f28f0
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_4e8fe0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_4f28f0 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4f28a0)
    }
}

#undef public_4f28f0
