#include "Content-PCH.h"


#define public_6f71137 _public_6f71137

PROC_DECLARE(0x6f71100, internal_6f71100, public_6f71100);
extern "C" NAKED register_t __cdecl internal_6f71100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 0
        jne public_6f71137
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f71137
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f71137
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f71137 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f71100)
    }
}

#undef public_6f71137
