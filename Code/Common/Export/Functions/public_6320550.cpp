#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320550);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);

#define public_6320565 _public_6320565
#define public_6320576 _public_6320576

PROC_DECLARE(0x6320550, internal_6320550, public_6320550);
extern "C" NAKED register_t __cdecl internal_6320550()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [public_64018b8]
        push edi
        mov edi, dword ptr ds : [public_64018bc]
        cmp esi, edi
        mov ebx, esi
        je public_6320576
        public_6320565 : nop
        mov ecx, esi
        call public_63221f0
        add esi, 0x90
        cmp esi, edi
        jne public_6320565
        public_6320576 : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_64018bc], ebx
        mov dword ptr ds : [public_6401938], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6320550)
    }
}

#undef public_6320565
#undef public_6320576
