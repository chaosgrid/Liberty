#include "Server-PCH.h"


#define public_6d5ed50 _public_6d5ed50
#define public_6d5ed5d _public_6d5ed5d

PROC_DECLARE(0x6d5ed10, internal_6d5ed10, public_6d5ed10);
extern "C" NAKED register_t __cdecl internal_6d5ed10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        push ecx
        xor ebx, ebx
        call dword ptr ds : [public_6d64798]
        mov ecx, eax
        call dword ptr ds : [public_6d64a04]
        mov edx, dword ptr ds : [eax+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        ja public_6d5ed5d
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, edx
        sub esi, edx
        lea esp, ss:[esp]
        public_6d5ed50 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+eax], cl
        inc eax
        test cl, cl
        jne public_6d5ed50
        mov eax, ebx
        pop esi
        public_6d5ed5d : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5ed10)
    }
}

#undef public_6d5ed50
#undef public_6d5ed5d
