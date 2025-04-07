#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68055f0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_680560c _public_680560c

PROC_DECLARE(0x68055f0, internal_68055f0, public_68055f0);
extern "C" NAKED register_t __cdecl internal_68055f0()
{
    __asm
    {
        push esi
        push 0x2E8
        xor esi, esi
        push esi
        call public_68065d0
        mov ecx, dword ptr ds : [public_680e604]
        add esp, 8
        mov dword ptr ds : [ecx+0x60], eax
        xor eax, eax
        public_680560c : nop
        mov edx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax], esi
        mov edx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax+4], esi
        mov edx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [ecx+eax+8], esi
        add eax, 0xC
        cmp eax, 0x2E8
        jl public_680560c
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68055f0)
    }
}

#undef public_680560c
