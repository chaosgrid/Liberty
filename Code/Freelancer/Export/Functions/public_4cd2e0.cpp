#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cd350);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bda7b);

#define public_4cd337 _public_4cd337

PROC_DECLARE(0x4cd2e0, internal_4cd2e0, public_4cd2e0);
extern "C" NAKED register_t __cdecl internal_4cd2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bda7b @0x4cd2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bda7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x5B8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_4cd337
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_4cd350
        test eax, eax
        je public_4cd337
        add eax, 0x7C
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_4cd337 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4cd2e0)
    }
}

#undef public_4cd337
