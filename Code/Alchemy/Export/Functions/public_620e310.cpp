#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e310);

#define public_620e342 _public_620e342

PROC_DECLARE(0x620e310, internal_620e310, public_620e310);
extern "C" NAKED register_t __cdecl internal_620e310()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0xC0]
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov ecx, dword ptr ds : [ecx+0x60]
        and ecx, 0x100
        cmp ecx, 0x100
        jne public_620e342
        add eax, 0x18
        mov dword ptr ds : [edx], eax
        public_620e342 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e310)
    }
}

#undef public_620e342
