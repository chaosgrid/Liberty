#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417ca0);

#define public_417cbe _public_417cbe
#define public_417cd9 _public_417cd9
#define public_417cf5 _public_417cf5
#define public_417d07 _public_417d07
#define public_417d22 _public_417d22

PROC_DECLARE(0x417ca0, internal_417ca0, public_417ca0);
extern "C" NAKED register_t __cdecl internal_417ca0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0x48]
        test eax, eax
        push esi
        push edi
        jne public_417cf5
        test ebp, ebp
        jne public_417cbe
        mov dword ptr ds : [edx+0x48], ebp
        mov byte ptr ds : [edx+0x4C], 0
        jmp public_417cf5
        public_417cbe : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+0x4C]
        jb public_417cd9
        mov eax, 0x3F
        public_417cd9 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        mov esi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx+0x4C], 0
        mov dword ptr ds : [edx+0x48], eax
        public_417cf5 : nop
        test ebp, ebp
        jne public_417d07
        pop edi
        pop esi
        mov dword ptr ds : [edx+4], ebp
        pop ebp
        mov byte ptr ds : [edx+8], 0
        pop ebx
        ret 4
        public_417d07 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+8]
        jb public_417d22
        mov eax, 0x3F
        public_417d22 : nop
        mov esi, ebp
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+ebx], 0
        pop ebp
        mov dword ptr ds : [edx+4], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x417ca0)
    }
}

#undef public_417cbe
#undef public_417cd9
#undef public_417cf5
#undef public_417d07
#undef public_417d22
