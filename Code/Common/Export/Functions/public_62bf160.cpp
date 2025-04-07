#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63216a0);

#define public_62bf192 _public_62bf192

PROC_DECLARE(0x62bf160, internal_62bf160, public_62bf160);
extern "C" NAKED register_t __cdecl internal_62bf160()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62bf192
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62bf192
        lea edx, ss:[esp]
        push edx
        add eax, 0x104
        push eax
        call public_63216a0
        mov eax, dword ptr ss : [esp+8]
        add esp, 8
        pop ecx
        ret 
        public_62bf192 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bf160)
    }
}

#undef public_62bf192
