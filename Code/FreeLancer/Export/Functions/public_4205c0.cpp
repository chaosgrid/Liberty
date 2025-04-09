#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4205c0);

#define public_4205e4 _public_4205e4
#define public_4205fe _public_4205fe

PROC_DECLARE(0x4205c0, internal_4205c0, public_4205c0);
extern "C" NAKED register_t __cdecl internal_4205c0()
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
        jne public_4205e4
        mov dword ptr ds : [edx], esi
        pop esi
        mov byte ptr ds : [ebx], 0
        mov eax, edx
        pop ebx
        ret 4
        public_4205e4 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x18
        jb public_4205fe
        mov eax, 0x17
        public_4205fe : nop
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
        UNREACHABLE_TRAP(0x4205c0)
    }
}

#undef public_4205e4
#undef public_4205fe
