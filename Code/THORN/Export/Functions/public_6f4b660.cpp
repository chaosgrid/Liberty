#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6a0);

#define public_6f4b674 _public_6f4b674

PROC_DECLARE(0x6f4b660, internal_6f4b660, public_6f4b660);
extern "C" NAKED register_t __cdecl internal_6f4b660()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b4a0
        add esp, 4
        test eax, eax
        jne public_6f4b674
        pop esi
        ret 
        public_6f4b674 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        lea edx, ds:[ecx+esi-0x10]
        push edx
        call public_6f4b6a0
        mov eax, dword ptr ds : [eax+8]
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b660)
    }
}

#undef public_6f4b674
