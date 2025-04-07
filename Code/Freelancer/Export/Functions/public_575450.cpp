#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575450);

#define public_575474 _public_575474
#define public_57548e _public_57548e

PROC_DECLARE(0x575450, internal_575450, public_575450);
extern "C" NAKED register_t __cdecl internal_575450()
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
        jne public_575474
        mov dword ptr ds : [edx], esi
        pop esi
        mov byte ptr ds : [ebx], 0
        mov eax, edx
        pop ebx
        ret 4
        public_575474 : nop
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
        jb public_57548e
        mov eax, 0x1F
        public_57548e : nop
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
        UNREACHABLE_TRAP(0x575450)
    }
}

#undef public_575474
#undef public_57548e
