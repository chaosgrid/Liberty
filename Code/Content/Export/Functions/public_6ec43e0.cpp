#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec43e0);

#define public_6ec4426 _public_6ec4426
#define public_6ec4462 _public_6ec4462

PROC_DECLARE(0x6ec43e0, internal_6ec43e0, public_6ec43e0);
extern "C" NAKED register_t __cdecl internal_6ec43e0()
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
        mov dword ptr ds : [ebx+0x10], eax
        mov byte ptr ds : [ebx+0x14], al
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x44], eax
        mov byte ptr ds : [ebx+0x48], al
        mov edi, offset public_6fb572c
        mov dword ptr ds : [ebx], offset public_6fb5a5c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x14]
        jb public_6ec4426
        mov eax, 0x2F
        public_6ec4426 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [ebx+0x10], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x48]
        jb public_6ec4462
        mov eax, 0x2F
        public_6ec4462 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+ebp], cl
        pop edi
        mov dword ptr ds : [ebx+0x44], eax
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x78], ecx
        mov dword ptr ds : [ebx+0x7C], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+0x80], ecx
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec43e0)
    }
}

#undef public_6ec4426
#undef public_6ec4462
