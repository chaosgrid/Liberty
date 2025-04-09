#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427020);

#define public_427035 _public_427035
#define public_427053 _public_427053

PROC_DECLARE(0x427020, internal_427020, public_427020);
extern "C" NAKED register_t __cdecl internal_427020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_427035
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_427035 : nop
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
        cmp eax, 0x18
        lea ebx, ds:[edx+4]
        jb public_427053
        mov eax, 0x17
        public_427053 : nop
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
        UNREACHABLE_TRAP(0x427020)
    }
}

#undef public_427035
#undef public_427053
