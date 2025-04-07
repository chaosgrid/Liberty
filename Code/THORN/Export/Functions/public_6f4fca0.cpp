#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fcd0);

#define public_6f4fca9 _public_6f4fca9
#define public_6f4fcca _public_6f4fcca

PROC_DECLARE(0x6f4fca0, internal_6f4fca0, public_6f4fca0);
extern "C" NAKED register_t __cdecl internal_6f4fca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4fcca
        push esi
        public_6f4fca9 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x78]
        mov esi, dword ptr ds : [eax]
        add edx, 0xFFFFFFFB
        push eax
        mov dword ptr ds : [ecx+0x78], edx
        call public_6f4fcd0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_6f4fca9
        pop esi
        public_6f4fcca : nop
        ret 
        UNREACHABLE_TRAP(0x6f4fca0)
    }
}

#undef public_6f4fca9
#undef public_6f4fcca
