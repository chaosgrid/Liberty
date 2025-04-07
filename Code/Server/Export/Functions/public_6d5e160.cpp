#include "Server-PCH.h"


#define public_6d5e198 _public_6d5e198
#define public_6d5e1ba _public_6d5e1ba
#define public_6d5e1d9 _public_6d5e1d9

PROC_DECLARE(0x6d5e160, internal_6d5e160, public_6d5e160);
extern "C" NAKED register_t __cdecl internal_6d5e160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, 0xFFFFFFFC
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6d5e1d9
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov esi, eax
        add esi, 4
        jne public_6d5e198
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        xor eax, eax
        pop esi
        ret 
        public_6d5e198 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+4]
        jb public_6d5e1ba
        mov eax, 0x3F
        public_6d5e1ba : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebp
        mov dword ptr ds : [ebx], eax
        pop ebx
        xor eax, eax
        pop esi
        ret 
        public_6d5e1d9 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e160)
    }
}

#undef public_6d5e198
#undef public_6d5e1ba
#undef public_6d5e1d9
