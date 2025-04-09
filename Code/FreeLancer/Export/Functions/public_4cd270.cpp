#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);
CLANG_FORWARD_PROC_SYMBOL(public_4cd270);

#define public_4cd292 _public_4cd292
#define public_4cd2af _public_4cd2af
#define public_4cd2c7 _public_4cd2c7

PROC_DECLARE(0x4cd270, internal_4cd270, public_4cd270);
extern "C" NAKED register_t __cdecl internal_4cd270()
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
        jne public_4cd292
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4cd2c7
        public_4cd292 : nop
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
        jb public_4cd2af
        mov eax, 0x1F
        public_4cd2af : nop
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
        public_4cd2c7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_4c72b0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d74d0
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4cd270)
    }
}

#undef public_4cd292
#undef public_4cd2af
#undef public_4cd2c7
