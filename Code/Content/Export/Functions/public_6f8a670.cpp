#include "Content-PCH.h"


#define public_6f8a6a8 _public_6f8a6a8

PROC_DECLARE(0x6f8a670, internal_6f8a670, public_6f8a670);
extern "C" NAKED register_t __cdecl internal_6f8a670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 2
        jne public_6f8a6a8
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f8a6a8
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f8a6a8
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f8a6a8 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f8a670)
    }
}

#undef public_6f8a6a8
