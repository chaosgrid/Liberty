#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4271f0);

#define public_427205 _public_427205
#define public_427225 _public_427225

PROC_DECLARE(0x4271f0, internal_4271f0, public_4271f0);
extern "C" NAKED register_t __cdecl internal_4271f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_427205
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_427205 : nop
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
        cmp eax, 0x104
        lea ebx, ds:[edx+4]
        jb public_427225
        mov eax, 0x103
        public_427225 : nop
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
        UNREACHABLE_TRAP(0x4271f0)
    }
}

#undef public_427205
#undef public_427225
