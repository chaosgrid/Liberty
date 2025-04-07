#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d70);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_41a5fa);

#define public_411d19 _public_411d19

PROC_DECLARE(0x411cd0, internal_411cd0, public_411cd0);
extern "C" NAKED register_t __cdecl internal_411cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a5fa @0x411cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a5fa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x210
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_411d19
        mov ecx, eax
        call public_411d70
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_411d19 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x411cd0)
    }
}

#undef public_411d19
