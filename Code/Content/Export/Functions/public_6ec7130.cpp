#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7130);

#define public_6ec719b _public_6ec719b

PROC_DECLARE(0x6ec7130, internal_6ec7130, public_6ec7130);
extern "C" NAKED register_t __cdecl internal_6ec7130()
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
        xor edx, edx
        mov dword ptr ds : [ebx+0xC], edx
        mov byte ptr ds : [ebx+0x10], dl
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+0x60], eax
        mov dword ptr ds : [ebx+0x50], eax
        mov dword ptr ds : [ebx+0x40], eax
        mov dword ptr ds : [ebx+0x5C], edx
        mov dword ptr ds : [ebx+0x58], edx
        mov dword ptr ds : [ebx+0x54], edx
        mov dword ptr ds : [ebx+0x4C], edx
        mov dword ptr ds : [ebx+0x48], edx
        mov dword ptr ds : [ebx+0x44], edx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ds : [ebx+0x6C], edx
        mov dword ptr ds : [ebx+0x68], edx
        mov dword ptr ds : [ebx+0x64], edx
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5b8c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x10]
        jb public_6ec719b
        mov eax, 0x2F
        public_6ec719b : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebx+0x10], dl
        mov dword ptr ds : [ebx+0xC], eax
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x70], dl
        mov byte ptr ds : [ebx+0x71], dl
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7130)
    }
}

#undef public_6ec719b
