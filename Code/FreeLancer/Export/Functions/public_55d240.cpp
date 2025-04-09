#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d240);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_55d262 _public_55d262
#define public_55d27f _public_55d27f
#define public_55d297 _public_55d297

PROC_DECLARE(0x55d240, internal_55d240, public_55d240);
extern "C" NAKED register_t __cdecl internal_55d240()
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
        jne public_55d262
        mov byte ptr ds : [ebx+0xC], al
        jmp public_55d297
        public_55d262 : nop
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
        jb public_55d27f
        mov eax, 0x1F
        public_55d27f : nop
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
        public_55d297 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e1744
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x55d240)
    }
}

#undef public_55d262
#undef public_55d27f
#undef public_55d297
