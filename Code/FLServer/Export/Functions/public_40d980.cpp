#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d980);

#define public_40d9a7 _public_40d9a7
#define public_40d9dc _public_40d9dc
#define public_40d9f6 _public_40d9f6

PROC_DECLARE(0x40d980, internal_40d980, public_40d980);
extern "C" NAKED register_t __cdecl internal_40d980()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        je public_40d9f6
        push 0
        push eax
        call dword ptr ds : [public_41b1b4]
        test eax, eax
        je public_40d9a7
        cmp eax, 0x80
        je public_40d9a7
        xor al, al
        pop esi
        ret 4
        public_40d9a7 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x200]
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+ecx*4+0x100], eax
        mov ecx, dword ptr ds : [esi+0x200]
        inc ecx
        mov eax, ecx
        cmp eax, 0x40
        mov dword ptr ds : [esi+0x200], ecx
        jl public_40d9dc
        mov dword ptr ds : [esi+0x200], 0
        public_40d9dc : nop
        mov edx, dword ptr ds : [esi+0xF4]
        push edx
        mov byte ptr ds : [esi+0xFC], 1
        call dword ptr ds : [public_41b1a4]
        mov al, 1
        pop esi
        ret 4
        public_40d9f6 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0xF8], eax
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40d980)
    }
}

#undef public_40d9a7
#undef public_40d9dc
#undef public_40d9f6
