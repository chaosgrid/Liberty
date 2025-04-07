#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7370);

#define public_4c7389 _public_4c7389
#define public_4c73a5 _public_4c73a5

PROC_DECLARE(0x4c7370, internal_4c7370, public_4c7370);
extern "C" NAKED register_t __cdecl internal_4c7370()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor edx, edx
        cmp esi, edx
        jne public_4c7389
        mov dword ptr ds : [public_673408], edx
        mov byte ptr ds : [public_67340c], dl
        pop esi
        ret 
        public_4c7389 : nop
        push ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x104
        jb public_4c73a5
        mov eax, 0x103
        public_4c73a5 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, offset public_67340c
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop ebx
        mov byte ptr ds : [eax+public_67340c], dl
        mov dword ptr ds : [public_673408], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c7370)
    }
}

#undef public_4c7389
#undef public_4c73a5
