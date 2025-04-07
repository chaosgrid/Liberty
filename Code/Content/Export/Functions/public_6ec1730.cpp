#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec1730);

#define public_6ec177e _public_6ec177e
#define public_6ec17ba _public_6ec17ba
#define public_6ec17f6 _public_6ec17f6

PROC_DECLARE(0x6ec1730, internal_6ec1730, public_6ec1730);
extern "C" NAKED register_t __cdecl internal_6ec1730()
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
        mov dword ptr ds : [ebx+0x40], edx
        mov byte ptr ds : [ebx+0x44], dl
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ds : [ebx+0x74], edx
        mov byte ptr ds : [ebx+0x78], dl
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb58d0
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x10]
        jb public_6ec177e
        mov eax, 0x2F
        public_6ec177e : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x10], dl
        mov dword ptr ds : [ebx+0xC], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x44]
        jb public_6ec17ba
        mov eax, 0x2F
        public_6ec17ba : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x44], dl
        mov dword ptr ds : [ebx+0x40], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x78]
        jb public_6ec17f6
        mov eax, 0x2F
        public_6ec17f6 : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x78], dl
        pop edi
        mov dword ptr ds : [ebx+0x74], eax
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0xA8], edx
        mov dword ptr ds : [ebx+0xAC], edx
        mov dword ptr ds : [ebx+0xB0], edx
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec1730)
    }
}

#undef public_6ec177e
#undef public_6ec17ba
#undef public_6ec17f6
