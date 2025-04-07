#include "Server-PCH.h"


#define public_6d5ed80 _public_6d5ed80
#define public_6d5ed9f _public_6d5ed9f
#define public_6d5edb4 _public_6d5edb4

PROC_DECLARE(0x6d5ed60, internal_6d5ed60, public_6d5ed60);
extern "C" NAKED register_t __cdecl internal_6d5ed60()
{
    __asm
    {
        push esi
        push edi
        xor edi, edi
        call dword ptr ds : [public_6d649fc]
        mov esi, eax
        test esi, esi
        je public_6d5edb4
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [public_6d649f8]
        lea esp, ss:[esp]
        public_6d5ed80 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx]
        jne public_6d5ed9f
        cmp edi, dword ptr ss : [esp+0x1C]
        jae public_6d5ed9f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+edi*4], eax
        inc edi
        public_6d5ed9f : nop
        call ebp
        mov esi, eax
        test esi, esi
        jne public_6d5ed80
        mov eax, dword ptr ss : [esp+0x20]
        pop ebp
        pop ebx
        mov dword ptr ds : [eax], edi
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d5edb4 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edi
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5ed60)
    }
}

#undef public_6d5ed80
#undef public_6d5ed9f
#undef public_6d5edb4
