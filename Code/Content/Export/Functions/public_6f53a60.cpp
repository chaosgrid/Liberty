#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53a60);

#define public_6f53a75 _public_6f53a75
#define public_6f53aa7 _public_6f53aa7

PROC_DECLARE(0x6f53a60, internal_6f53a60, public_6f53a60);
extern "C" NAKED register_t __cdecl internal_6f53a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        lea edx, ds:[eax+0xC]
        cmp edx, edi
        je public_6f53aa7
        push ebx
        push ebp
        push esi
        lea esi, ds:[edx-0xC]
        public_6f53a75 : nop
        mov eax, edx
        mov ebp, dword ptr ds : [eax]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        add edx, 0xC
        add esi, 0xC
        cmp edx, edi
        mov dword ptr ds : [ebx+8], eax
        jne public_6f53a75
        mov eax, dword ptr ds : [ecx+8]
        pop esi
        pop ebp
        add eax, 0xFFFFFFF4
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 4
        public_6f53aa7 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFF4
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f53a60)
    }
}

#undef public_6f53a75
#undef public_6f53aa7
