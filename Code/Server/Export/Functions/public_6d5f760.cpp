#include "Server-PCH.h"


#define public_6d5f797 _public_6d5f797
#define public_6d5f799 _public_6d5f799

PROC_DECLARE(0x6d5f760, internal_6d5f760, public_6d5f760);
extern "C" NAKED register_t __cdecl internal_6d5f760()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, 0xFFFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6d5f799
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx]
        cmp edx, 0xFFFFFFFF
        je public_6d5f799
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push edx
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64890]
        add esp, 0xC
        test eax, eax
        jne public_6d5f797
        pop esi
        ret 
        public_6d5f797 : nop
        mov eax, esi
        public_6d5f799 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f760)
    }
}

#undef public_6d5f797
#undef public_6d5f799
