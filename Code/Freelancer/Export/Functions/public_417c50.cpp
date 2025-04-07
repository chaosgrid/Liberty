#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);

#define public_417c74 _public_417c74
#define public_417c90 _public_417c90

PROC_DECLARE(0x417c50, internal_417c50, public_417c50);
extern "C" NAKED register_t __cdecl internal_417c50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor eax, eax
        test esi, esi
        je public_417c90
        or ecx, 0xFFFFFFFF
        push ebx
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_417c74
        lea eax, ds:[ecx-1]
        public_417c74 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        public_417c90 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x417c50)
    }
}

#undef public_417c74
#undef public_417c90
