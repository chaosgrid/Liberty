#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c36b0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6f3b);

#define public_65c5066 _public_65c5066

PROC_DECLARE(0x65c5020, internal_65c5020, public_65c5020);
extern "C" NAKED register_t __cdecl internal_65c5020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6f3b @0x65c5022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6f3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x68
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_65c5066
        mov ecx, eax
        call public_65c36b0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_65c5066 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65c5020)
    }
}

#undef public_65c5066
