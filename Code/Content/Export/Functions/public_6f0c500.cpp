#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad35b);

#define public_6f0c54b _public_6f0c54b

PROC_DECLARE(0x6f0c500, internal_6f0c500, public_6f0c500);
extern "C" NAKED register_t __cdecl internal_6f0c500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad35b @0x6f0c502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad35b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x64
        mov esi, ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f0c54b
        push esi
        mov ecx, eax
        call public_6f0c2c0
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f0c54b : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f0c500)
    }
}

#undef public_6f0c54b
