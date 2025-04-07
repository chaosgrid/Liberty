#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead640);

#define public_6ead655 _public_6ead655
#define public_6ead673 _public_6ead673

PROC_DECLARE(0x6ead640, internal_6ead640, public_6ead640);
extern "C" NAKED register_t __cdecl internal_6ead640()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6ead655
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_6ead655 : nop
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
        cmp eax, 0x40
        lea ebx, ds:[edx+4]
        jb public_6ead673
        mov eax, 0x3F
        public_6ead673 : nop
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
        UNREACHABLE_TRAP(0x6ead640)
    }
}

#undef public_6ead655
#undef public_6ead673
