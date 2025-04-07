#include "Content-PCH.h"


#define public_6ec8404 _public_6ec8404
#define public_6ec8420 _public_6ec8420

PROC_DECLARE(0x6ec83e0, internal_6ec83e0, public_6ec83e0);
extern "C" NAKED register_t __cdecl internal_6ec83e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec8404
        pop esi
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        pop ebp
        pop ebx
        ret 4
        public_6ec8404 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x10]
        jb public_6ec8420
        mov eax, 0x1F
        public_6ec8420 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec83e0)
    }
}

#undef public_6ec8404
#undef public_6ec8420
