#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a7210);

#define public_4a7088 _public_4a7088

PROC_DECLARE(0x4a7070, internal_4a7070, public_4a7070);
extern "C" NAKED register_t __cdecl internal_4a7070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0xF
        je public_4a7088
        sub eax, 2
        je public_4a7088
        sub eax, 3
        je public_4a7088
        xor al, al
        ret 4
        public_4a7088 : nop
        push 1
        add ecx, 0xFFFFFCD4
        call public_4a7210
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4a7070)
    }
}

#undef public_4a7088
