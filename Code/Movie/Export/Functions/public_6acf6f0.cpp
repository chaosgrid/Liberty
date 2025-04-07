#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf6f0);

#define public_6acf711 _public_6acf711

PROC_DECLARE(0x6acf6f0, internal_6acf6f0, public_6acf6f0);
extern "C" NAKED register_t __cdecl internal_6acf6f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test dword ptr ds : [ecx+4], 6
        mov eax, 1
        je public_6acf711
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, 3
        public_6acf711 : nop
        ret 
        UNREACHABLE_TRAP(0x6acf6f0)
    }
}

#undef public_6acf711
