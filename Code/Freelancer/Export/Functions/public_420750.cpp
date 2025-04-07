#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420750);

#define public_420765 _public_420765
#define public_420783 _public_420783

PROC_DECLARE(0x420750, internal_420750, public_420750);
extern "C" NAKED register_t __cdecl internal_420750()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_420765
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_420765 : nop
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
        jb public_420783
        mov eax, 0x1F
        public_420783 : nop
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
        UNREACHABLE_TRAP(0x420750)
    }
}

#undef public_420765
#undef public_420783
