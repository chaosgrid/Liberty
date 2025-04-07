#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa5580);

#define public_6fa55a0 _public_6fa55a0
#define public_6fa55be _public_6fa55be

PROC_DECLARE(0x6fa5580, internal_6fa5580, public_6fa5580);
extern "C" NAKED register_t __cdecl internal_6fa5580()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        mov dword ptr ds : [edx], eax
        add esi, 8
        xor eax, eax
        cmp esi, eax
        jne public_6fa55a0
        mov byte ptr ds : [edx+8], al
        mov dword ptr ds : [edx+4], eax
        mov eax, edx
        pop esi
        ret 4
        public_6fa55a0 : nop
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
        lea ebp, ds:[edx+8]
        jb public_6fa55be
        mov eax, 0x3F
        public_6fa55be : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        pop ebx
        mov dword ptr ds : [edx+4], eax
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6fa5580)
    }
}

#undef public_6fa55a0
#undef public_6fa55be
