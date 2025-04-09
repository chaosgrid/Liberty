#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4d30);

#define public_4f4d52 _public_4f4d52
#define public_4f4d6f _public_4f4d6f
#define public_4f4d87 _public_4f4d87

PROC_DECLARE(0x4f4d30, internal_4f4d30, public_4f4d30);
extern "C" NAKED register_t __cdecl internal_4f4d30()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, eax
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [ebx+0xC], al
        mov dword ptr ds : [ebx], offset public_5d6e30
        mov dword ptr ds : [ebx+4], eax
        jne public_4f4d52
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4f4d87
        public_4f4d52 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebp, ds:[ebx+0xC]
        jb public_4f4d6f
        mov eax, 0x1F
        public_4f4d6f : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        public_4f4d87 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_4c72b0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d97e0
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4f4d30)
    }
}

#undef public_4f4d52
#undef public_4f4d6f
#undef public_4f4d87
