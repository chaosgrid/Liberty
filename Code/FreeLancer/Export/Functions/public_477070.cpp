#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477070);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_477092 _public_477092
#define public_4770af _public_4770af
#define public_4770c7 _public_4770c7

PROC_DECLARE(0x477070, internal_477070, public_477070);
extern "C" NAKED register_t __cdecl internal_477070()
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
        mov dword ptr ds : [ebx], offset public_5cb554
        mov dword ptr ds : [ebx+4], eax
        jne public_477092
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4770c7
        public_477092 : nop
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
        jb public_4770af
        mov eax, 0x1F
        public_4770af : nop
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
        public_4770c7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d0ab4
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x477070)
    }
}

#undef public_477092
#undef public_4770af
#undef public_4770c7
