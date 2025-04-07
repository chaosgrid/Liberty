#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f980);

#define public_632f9a1 _public_632f9a1

PROC_DECLARE(0x632f980, internal_632f980, public_632f980);
extern "C" NAKED register_t __cdecl internal_632f980()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        lea eax, ds:[ecx+edx]
        add eax, esi
        cmp ecx, eax
        jae public_632f9a1
        cmp edx, eax
        jae public_632f9a1
        cmp esi, eax
        jae public_632f9a1
        mov eax, 1
        pop esi
        ret 
        public_632f9a1 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632f980)
    }
}

#undef public_632f9a1
