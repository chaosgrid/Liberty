#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece170);

#define public_6ece1b2 _public_6ece1b2

PROC_DECLARE(0x6ece170, internal_6ece170, public_6ece170);
extern "C" NAKED register_t __cdecl internal_6ece170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6fb3030]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5fe0
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea ebp, ds:[ebx+0x10]
        jb public_6ece1b2
        mov eax, 0x7F
        public_6ece1b2 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ece170)
    }
}

#undef public_6ece1b2
