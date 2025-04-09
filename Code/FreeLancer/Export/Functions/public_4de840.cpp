#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5be64b);

#define public_4de890 _public_4de890

PROC_DECLARE(0x4de840, internal_4de840, public_4de840);
extern "C" NAKED register_t __cdecl internal_4de840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be64b @0x4de842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be64b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push 0x5EC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_4de890
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_4da170
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_4de890 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4de840)
    }
}

#undef public_4de890
