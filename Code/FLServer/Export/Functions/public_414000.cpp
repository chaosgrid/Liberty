#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414000);
CLANG_FORWARD_PROC_SYMBOL(public_415180);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);

#define public_414032 _public_414032
#define public_41403f _public_41403f
#define public_41404e _public_41404e

PROC_DECLARE(0x414000, internal_414000, public_414000);
extern "C" NAKED register_t __cdecl internal_414000()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_4294ec
        call public_415180
        cmp eax, dword ptr ds : [public_4294f0]
        mov dword ptr ss : [esp+0xC], eax
        je public_414032
        add eax, 0xC
        push eax
        mov ecx, esi
        call public_4155c0
        test eax, eax
        jl public_414032
        lea eax, ss:[esp+0xC]
        jmp public_41403f
        public_414032 : nop
        mov eax, dword ptr ds : [public_4294f0]
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+4]
        public_41403f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_4294f0]
        pop esi
        jne public_41404e
        xor eax, eax
        pop ecx
        ret 
        public_41404e : nop
        mov eax, dword ptr ds : [eax+0x1C]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x414000)
    }
}

#undef public_414032
#undef public_41403f
#undef public_41404e
