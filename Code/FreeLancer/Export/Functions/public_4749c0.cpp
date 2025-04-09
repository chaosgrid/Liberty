#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4749c0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_4749e2 _public_4749e2
#define public_4749ff _public_4749ff
#define public_474a17 _public_474a17

PROC_DECLARE(0x4749c0, internal_4749c0, public_4749c0);
extern "C" NAKED register_t __cdecl internal_4749c0()
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
        jne public_4749e2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_474a17
        public_4749e2 : nop
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
        jb public_4749ff
        mov eax, 0x1F
        public_4749ff : nop
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
        public_474a17 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d09b4
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4749c0)
    }
}

#undef public_4749e2
#undef public_4749ff
#undef public_474a17
