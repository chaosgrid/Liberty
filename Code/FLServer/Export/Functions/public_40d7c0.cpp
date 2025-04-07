#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d7c0);
CLANG_FORWARD_PROC_SYMBOL(public_418f1e);

#define public_40d7e4 _public_40d7e4

PROC_DECLARE(0x40d7c0, internal_40d7c0, public_40d7c0);
extern "C" NAKED register_t __cdecl internal_40d7c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        mov dword ptr ds : [esi], offset public_41d340
        je public_40d7e4
        push eax
        call dword ptr ds : [public_41b1bc]
        mov dword ptr ds : [esi+0xF4], 0
        public_40d7e4 : nop
        mov ecx, esi
        pop esi
        jmp public_418f1e
        UNREACHABLE_TRAP(0x40d7c0)
    }
}

#undef public_40d7e4
