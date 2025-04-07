#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d460);

#define public_6f1d484 _public_6f1d484
#define public_6f1d49e _public_6f1d49e

PROC_DECLARE(0x6f1d460, internal_6f1d460, public_6f1d460);
extern "C" NAKED register_t __cdecl internal_6f1d460()
{
    __asm
    {
        push ebx
        mov edx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6f1d484
        mov dword ptr ds : [edx], esi
        pop esi
        mov byte ptr ds : [ebx], 0
        mov eax, edx
        pop ebx
        ret 4
        public_6f1d484 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f1d49e
        mov eax, 0x2F
        public_6f1d49e : nop
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
        pop esi
        mov dword ptr ds : [edx], eax
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1d460)
    }
}

#undef public_6f1d484
#undef public_6f1d49e
