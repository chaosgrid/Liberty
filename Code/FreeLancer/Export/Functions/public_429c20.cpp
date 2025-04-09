#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_429c52 _public_429c52

PROC_DECLARE(0x429c20, internal_429c20, public_429c20);
extern "C" NAKED register_t __cdecl internal_429c20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_429c52
        push 2
        call public_5b3510
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        call dword ptr ds : [eax+0x20]
        fmul dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        fstp dword ptr ds : [ecx]
        pop esi
        ret 8
        public_429c52 : nop
        mov eax, 0xFFFFFFF9
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x429c20)
    }
}

#undef public_429c52
