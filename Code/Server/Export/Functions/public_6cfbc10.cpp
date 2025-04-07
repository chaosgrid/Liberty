#include "Server-PCH.h"


#define public_6cfbc84 _public_6cfbc84
#define public_6cfbc8b _public_6cfbc8b

PROC_DECLARE(0x6cfbc10, internal_6cfbc10, public_6cfbc10);
extern "C" NAKED register_t __cdecl internal_6cfbc10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6d644a8]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, edi
        call esi
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        call esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], 0
        mov dword ptr ss : [ebp], 0
        push ecx
        mov dword ptr ds : [eax], 0
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbc8b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x7C]
        test eax, eax
        je public_6cfbc84
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx], edx
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi], edx
        public_6cfbc84 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6cfbc8b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cfbc10)
    }
}

#undef public_6cfbc84
#undef public_6cfbc8b
