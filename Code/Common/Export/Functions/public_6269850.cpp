#include "Common-PCH.h"


#define public_6269862 _public_6269862
#define public_6269879 _public_6269879

PROC_DECLARE(0x6269850, internal_6269850, public_6269850);
extern "C" NAKED register_t __cdecl internal_6269850()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, ebx
        cmp eax, ebx
        je public_6269879
        push esi
        lea edx, ds:[eax-0x20]
        push edi
        public_6269862 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_6269862
        pop edi
        pop esi
        public_6269879 : nop
        add dword ptr ss : [ebp+8], 0xFFFFFFE0
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6269850)
    }
}

#undef public_6269862
#undef public_6269879
