#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e2d0);

#define public_620e2ff _public_620e2ff

PROC_DECLARE(0x620e2d0, internal_620e2d0, public_620e2d0);
extern "C" NAKED register_t __cdecl internal_620e2d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0xC0]
        lea eax, ds:[eax+eax*4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov ecx, dword ptr ds : [ecx+0x60]
        and ecx, 0x100
        cmp ecx, 0x100
        jne public_620e2ff
        add eax, 5
        mov dword ptr ds : [edx], eax
        public_620e2ff : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e2d0)
    }
}

#undef public_620e2ff
