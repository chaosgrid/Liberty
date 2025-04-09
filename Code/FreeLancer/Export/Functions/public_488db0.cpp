#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488db0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_488dd2 _public_488dd2
#define public_488def _public_488def
#define public_488e07 _public_488e07

PROC_DECLARE(0x488db0, internal_488db0, public_488db0);
extern "C" NAKED register_t __cdecl internal_488db0()
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
        jne public_488dd2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_488e07
        public_488dd2 : nop
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
        jb public_488def
        mov eax, 0x1F
        public_488def : nop
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
        public_488e07 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d2448
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x488db0)
    }
}

#undef public_488dd2
#undef public_488def
#undef public_488e07
