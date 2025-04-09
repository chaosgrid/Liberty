#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576240);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_57c930);

#define public_57c960 _public_57c960
#define public_57c967 _public_57c967
#define public_57c986 _public_57c986

PROC_DECLARE(0x57c930, internal_57c930, public_57c930);
extern "C" NAKED register_t __cdecl internal_57c930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        dec eax
        push esi
        push edi
        je public_57c986
        dec eax
        je public_57c967
        sub eax, 0xD
        jne public_57c960
        call public_576240
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_57c960
        push 0
        push 0xF
        call public_5763b0
        add esp, 8
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_57c960 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_57c967 : nop
        mov edi, dword ptr ds : [ecx-0x498]
        lea esi, ds:[ecx-0x498]
        call public_576240
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0xC8]
        pop edi
        pop esi
        ret 4
        public_57c986 : nop
        mov edi, dword ptr ds : [ecx-0x498]
        lea esi, ds:[ecx-0x498]
        call public_576240
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0xC4]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x57c930)
    }
}

#undef public_57c960
#undef public_57c967
#undef public_57c986
