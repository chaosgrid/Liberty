#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474880);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_4748a2 _public_4748a2
#define public_4748bf _public_4748bf
#define public_4748d7 _public_4748d7

PROC_DECLARE(0x474880, internal_474880, public_474880);
extern "C" NAKED register_t __cdecl internal_474880()
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
        jne public_4748a2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4748d7
        public_4748a2 : nop
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
        jb public_4748bf
        mov eax, 0x1F
        public_4748bf : nop
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
        public_4748d7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d09ac
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x474880)
    }
}

#undef public_4748a2
#undef public_4748bf
#undef public_4748d7
