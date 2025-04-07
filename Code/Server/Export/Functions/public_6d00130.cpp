#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00130);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d00152 _public_6d00152
#define public_6d0016c _public_6d0016c

PROC_DECLARE(0x6d00130, internal_6d00130, public_6d00130);
extern "C" NAKED register_t __cdecl internal_6d00130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d8e4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6d00152
        mov edi, eax
        public_6d00152 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop esi
        pop ebx
        je public_6d0016c
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        public_6d0016c : nop
        inc dword ptr ds : [public_6d8d8e8]
        ret 
        UNREACHABLE_TRAP(0x6d00130)
    }
}

#undef public_6d00152
#undef public_6d0016c
