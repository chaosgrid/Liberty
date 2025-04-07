#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec58a0);

#define public_6ec58e6 _public_6ec58e6
#define public_6ec5922 _public_6ec5922

PROC_DECLARE(0x6ec58a0, internal_6ec58a0, public_6ec58a0);
extern "C" NAKED register_t __cdecl internal_6ec58a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6fb3030]
        xor eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x50], eax
        mov byte ptr ds : [ebx+0x54], al
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5ae8
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x54]
        jb public_6ec58e6
        mov eax, 0x2F
        public_6ec58e6 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [ebx+0x50], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+0x10]
        jb public_6ec5922
        mov eax, 0x3F
        public_6ec5922 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebp
        mov dword ptr ds : [ebx+0x84], 0
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec58a0)
    }
}

#undef public_6ec58e6
#undef public_6ec5922
