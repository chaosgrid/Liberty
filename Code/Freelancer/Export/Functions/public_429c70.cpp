#include "Freelancer-PCH.h"


#define public_429c8c _public_429c8c

PROC_DECLARE(0x429c70, internal_429c70, public_429c70);
extern "C" NAKED register_t __cdecl internal_429c70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x24]
        dec edx
        push esi
        mov esi, edx
        test esi, esi
        mov dword ptr ds : [ecx+0x24], edx
        jne public_429c8c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA4]
        public_429c8c : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x429c70)
    }
}

#undef public_429c8c
