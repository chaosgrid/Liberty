#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8400);

#define public_4c8424 _public_4c8424
#define public_4c8442 _public_4c8442
#define public_4c845f _public_4c845f
#define public_4c847d _public_4c847d

PROC_DECLARE(0x4c8400, internal_4c8400, public_4c8400);
extern "C" NAKED register_t __cdecl internal_4c8400()
{
    __asm
    {
        mov edx, ecx
        xor ecx, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, ecx
        mov dword ptr ds : [edx+8], ecx
        mov byte ptr ds : [edx+0xC], cl
        mov dword ptr ds : [edx], offset public_5d6e30
        mov dword ptr ds : [edx+4], ecx
        jne public_4c8424
        mov dword ptr ds : [edx+8], ecx
        mov byte ptr ds : [edx+0xC], cl
        jmp public_4c845f
        public_4c8424 : nop
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
        lea ebp, ds:[edx+0xC]
        jb public_4c8442
        mov eax, 0x1F
        public_4c8442 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        pop edi
        mov byte ptr ds : [eax+ebp], cl
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        public_4c845f : nop
        mov eax, dword ptr ds : [public_673514]
        cmp eax, ecx
        pop esi
        je public_4c847d
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [public_673514], edx
        mov dword ptr ds : [edx], offset public_5d6e44
        mov eax, edx
        ret 4
        public_4c847d : nop
        mov dword ptr ds : [public_673510], edx
        mov dword ptr ds : [public_673514], edx
        mov dword ptr ds : [edx], offset public_5d6e44
        mov eax, edx
        ret 4
        UNREACHABLE_TRAP(0x4c8400)
    }
}

#undef public_4c8424
#undef public_4c8442
#undef public_4c845f
#undef public_4c847d
