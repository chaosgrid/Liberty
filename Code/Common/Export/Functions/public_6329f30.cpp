#include "Common-PCH.h"


#define public_6329f41 _public_6329f41
#define public_6329f5d _public_6329f5d

PROC_DECLARE(0x6329f30, internal_6329f30, public_6329f30);
extern "C" NAKED register_t __cdecl internal_6329f30()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        xor edi, edi
        cmp esi, eax
        je public_6329f5d
        public_6329f41 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+4]
        add edi, ecx
        cmp esi, eax
        jne public_6329f41
        public_6329f5d : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6329f30)
    }
}

#undef public_6329f41
#undef public_6329f5d
