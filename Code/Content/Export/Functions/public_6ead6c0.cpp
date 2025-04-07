#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6c0);

#define public_6ead6d5 _public_6ead6d5
#define public_6ead6f3 _public_6ead6f3

PROC_DECLARE(0x6ead6c0, internal_6ead6c0, public_6ead6c0);
extern "C" NAKED register_t __cdecl internal_6ead6c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6ead6d5
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_6ead6d5 : nop
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
        cmp eax, 0x20
        lea ebx, ds:[edx+4]
        jb public_6ead6f3
        mov eax, 0x1F
        public_6ead6f3 : nop
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
        UNREACHABLE_TRAP(0x6ead6c0)
    }
}

#undef public_6ead6d5
#undef public_6ead6f3
