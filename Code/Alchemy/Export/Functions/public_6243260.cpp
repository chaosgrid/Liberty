#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246550);

#define public_6243271 _public_6243271

PROC_DECLARE(0x6243260, internal_6243260, public_6243260);
extern "C" NAKED register_t __cdecl internal_6243260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_6243271
        or eax, 0xFFFFFFFF
        ret 8
        public_6243271 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_6246550
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6243260)
    }
}

#undef public_6243271
