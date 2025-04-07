#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5cb0);

#define public_6ec5cf6 _public_6ec5cf6
#define public_6ec5d32 _public_6ec5d32

PROC_DECLARE(0x6ec5cb0, internal_6ec5cb0, public_6ec5cb0);
extern "C" NAKED register_t __cdecl internal_6ec5cb0()
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
        mov dword ptr ds : [ebx+0x40], eax
        mov byte ptr ds : [ebx+0x44], al
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5b00
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x10]
        jb public_6ec5cf6
        mov eax, 0x2F
        public_6ec5cf6 : nop
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
        mov dword ptr ds : [ebx+0xC], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x44]
        jb public_6ec5d32
        mov eax, 0x2F
        public_6ec5d32 : nop
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
        pop esi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ds : [ebx+0x40], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5cb0)
    }
}

#undef public_6ec5cf6
#undef public_6ec5d32
