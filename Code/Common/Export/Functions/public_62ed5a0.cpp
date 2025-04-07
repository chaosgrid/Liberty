#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62ed5c8 _public_62ed5c8

PROC_DECLARE(0x62ed5a0, internal_62ed5a0, public_62ed5a0);
extern "C" NAKED register_t __cdecl internal_62ed5a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        add eax, 8
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ed5c8
        lea ecx, ds:[eax-8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        public_62ed5c8 : nop
        xor ecx, ecx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ed5a0)
    }
}

#undef public_62ed5c8
