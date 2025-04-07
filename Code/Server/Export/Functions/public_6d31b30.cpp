#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31b30);

#define public_6d31b4c _public_6d31b4c
#define public_6d31b66 _public_6d31b66

PROC_DECLARE(0x6d31b30, internal_6d31b30, public_6d31b30);
extern "C" NAKED register_t __cdecl internal_6d31b30()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6d1baa0
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6d31b4c
        mov ebx, eax
        public_6d31b4c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d31b66
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        public_6d31b66 : nop
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d31b30)
    }
}

#undef public_6d31b4c
#undef public_6d31b66
