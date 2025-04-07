#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec51f0);

#define public_6ec5239 _public_6ec5239
#define public_6ec5277 _public_6ec5277

PROC_DECLARE(0x6ec51f0, internal_6ec51f0, public_6ec51f0);
extern "C" NAKED register_t __cdecl internal_6ec51f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
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
        mov dword ptr ds : [ebx], offset public_6fb5ac4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x10]
        jb public_6ec5239
        mov eax, 0x2F
        public_6ec5239 : nop
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
        cmp eax, 0x80
        lea edx, ds:[ebx+0x44]
        jb public_6ec5277
        mov eax, 0x7F
        public_6ec5277 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ds : [ebx+0x40], eax
        lea eax, ds:[ebx+0xC4]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        pop edi
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ecx
        pop ebp
        mov dword ptr ds : [ebx+0xD0], 0
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec51f0)
    }
}

#undef public_6ec5239
#undef public_6ec5277
