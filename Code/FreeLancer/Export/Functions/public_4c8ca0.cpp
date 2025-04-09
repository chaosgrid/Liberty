#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8ca0);

#define public_4c8cc4 _public_4c8cc4
#define public_4c8ce2 _public_4c8ce2
#define public_4c8cff _public_4c8cff
#define public_4c8d1d _public_4c8d1d

PROC_DECLARE(0x4c8ca0, internal_4c8ca0, public_4c8ca0);
extern "C" NAKED register_t __cdecl internal_4c8ca0()
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
        jne public_4c8cc4
        mov dword ptr ds : [edx+8], ecx
        mov byte ptr ds : [edx+0xC], cl
        jmp public_4c8cff
        public_4c8cc4 : nop
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
        jb public_4c8ce2
        mov eax, 0x1F
        public_4c8ce2 : nop
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
        public_4c8cff : nop
        mov eax, dword ptr ds : [public_673514]
        cmp eax, ecx
        pop esi
        je public_4c8d1d
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [public_673514], edx
        mov dword ptr ds : [edx], offset public_5d6ee8
        mov eax, edx
        ret 4
        public_4c8d1d : nop
        mov dword ptr ds : [public_673510], edx
        mov dword ptr ds : [public_673514], edx
        mov dword ptr ds : [edx], offset public_5d6ee8
        mov eax, edx
        ret 4
        UNREACHABLE_TRAP(0x4c8ca0)
    }
}

#undef public_4c8cc4
#undef public_4c8ce2
#undef public_4c8cff
#undef public_4c8d1d
