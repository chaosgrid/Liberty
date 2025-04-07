#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b330);

#define public_623b345 _public_623b345

PROC_DECLARE(0x623b330, internal_623b330, public_623b330);
extern "C" NAKED register_t __cdecl internal_623b330()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_623b345
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_623b345 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623b330)
    }
}

#undef public_623b345
