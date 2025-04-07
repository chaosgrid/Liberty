#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327880);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639716b);

#define public_63285dd _public_63285dd

PROC_DECLARE(0x6328590, internal_6328590, public_6328590);
extern "C" NAKED register_t __cdecl internal_6328590()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639716b @0x6328592*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639716b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x18
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_63285dd
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_6327880
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_63285dd : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6328590)
    }
}

#undef public_63285dd
