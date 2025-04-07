#include "Shading-PCH.h"


#define public_6eb50b4 _public_6eb50b4
#define public_6eb50f7 _public_6eb50f7

PROC_DECLARE(0x6eb50a0, internal_6eb50a0, public_6eb50a0);
extern "C" NAKED register_t __cdecl internal_6eb50a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1514
        mov eax, 1
        public_6eb50b4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb50b4
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6eb50f7
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb50f7
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb50f7
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb50f7 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb50a0)
    }
}

#undef public_6eb50b4
#undef public_6eb50f7
