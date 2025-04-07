#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7cd0);

#define public_6ec7d12 _public_6ec7d12

PROC_DECLARE(0x6ec7cd0, internal_6ec7cd0, public_6ec7cd0);
extern "C" NAKED register_t __cdecl internal_6ec7cd0()
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
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5bd4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea ebp, ds:[ebx+0x10]
        jb public_6ec7d12
        mov eax, 0x7F
        public_6ec7d12 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebp
        mov byte ptr ds : [ebx+0x90], 0
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7cd0)
    }
}

#undef public_6ec7d12
