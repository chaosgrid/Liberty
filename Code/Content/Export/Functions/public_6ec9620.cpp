#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9620);

#define public_6ec9666 _public_6ec9666

PROC_DECLARE(0x6ec9620, internal_6ec9620, public_6ec9620);
extern "C" NAKED register_t __cdecl internal_6ec9620()
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
        mov dword ptr ds : [ebx], offset public_6fb5d94
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x10]
        jb public_6ec9666
        mov eax, 0x2F
        public_6ec9666 : nop
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
        xor ecx, ecx
        mov byte ptr ds : [eax+ebp], cl
        mov dword ptr ds : [ebx+0xC], eax
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x74], ecx
        mov dword ptr ds : [ebx+0x78], ecx
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec9620)
    }
}

#undef public_6ec9666
