#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4c4d0f _public_4c4d0f
#define public_4c4d17 _public_4c4d17

PROC_DECLARE(0x4c4cf0, internal_4c4cf0, public_4c4cf0);
extern "C" NAKED register_t __cdecl internal_4c4cf0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push esi
        jne public_4c4d17
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_673364]
        jle public_4c4d0f
        push 0x26
        call public_5645c0
        add esp, 4
        public_4c4d0f : nop
        mov dword ptr ds : [public_673364], esi
        pop esi
        ret 
        public_4c4d17 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_673364], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c4cf0)
    }
}

#undef public_4c4d0f
#undef public_4c4d17
