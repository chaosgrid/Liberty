#include "Server-PCH.h"


#define public_6cf8ce0 _public_6cf8ce0
#define public_6cf8cee _public_6cf8cee
#define public_6cf8cf3 _public_6cf8cf3

PROC_DECLARE(0x6cf8ca0, internal_6cf8ca0, public_6cf8ca0);
extern "C" NAKED register_t __cdecl internal_6cf8ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push eax
        call dword ptr ds : [public_6d644a4]
        add esp, 4
        test eax, eax
        je public_6cf8cf3
        push edi
        lea ecx, ds:[eax+8]
        call dword ptr ds : [public_6d642d4]
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        mov eax, dword ptr ss : [esp+0x10]
        not ecx
        cmp eax, ecx
        pop edi
        jbe public_6cf8cee
        mov edx, dword ptr ss : [esp+8]
        mov eax, esi
        sub edx, esi
        nop 
        lea esp, ss:[esp]
        public_6cf8ce0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6cf8ce0
        xor eax, eax
        pop esi
        ret 
        public_6cf8cee : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6cf8cf3 : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8ca0)
    }
}

#undef public_6cf8ce0
#undef public_6cf8cee
#undef public_6cf8cf3
