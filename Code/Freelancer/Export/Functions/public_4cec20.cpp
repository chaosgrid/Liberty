#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cec20);

#define public_4cec35 _public_4cec35
#define public_4cec55 _public_4cec55

PROC_DECLARE(0x4cec20, internal_4cec20, public_4cec20);
extern "C" NAKED register_t __cdecl internal_4cec20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_4cec35
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_4cec35 : nop
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea ebx, ds:[edx+4]
        jb public_4cec55
        mov eax, 0x7F
        public_4cec55 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop ebp
        mov byte ptr ds : [eax+ebx], 0
        pop ebx
        mov dword ptr ds : [edx], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4cec20)
    }
}

#undef public_4cec35
#undef public_4cec55
