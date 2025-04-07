#include "Alchemy-PCH.h"


#define public_620a0b5 _public_620a0b5

PROC_DECLARE(0x620a0a0, internal_620a0a0, public_620a0a0);
extern "C" NAKED register_t __cdecl internal_620a0a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x9C]
        test edx, edx
        jne public_620a0b5
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_620a0b5 : nop
        mov eax, dword ptr ds : [ecx+0xA0]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620a0a0)
    }
}

#undef public_620a0b5
