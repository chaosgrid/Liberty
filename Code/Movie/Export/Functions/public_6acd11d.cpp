#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acd11d);
CLANG_FORWARD_PROC_SYMBOL(public_6acd1bf);

#define public_6acd1b8 _public_6acd1b8
#define public_6acd1ba _public_6acd1ba

PROC_DECLARE(0x6acd11d, internal_6acd11d, public_6acd11d);
extern "C" NAKED register_t __cdecl internal_6acd11d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        push esi
        call public_6acd1bf
        test eax, eax
        je public_6acd1b8
        xor esi, esi
        cmp dword ptr ds : [public_6ae0e70], esi
        je public_6acd1b8
        mov eax, dword ptr ds : [public_6ae0e74]
        cmp eax, esi
        je public_6acd1b8
        lea ecx, ss:[ebp-0xC]
/*FIXUP push offset public_6ada850 @0x6acd147*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada850
        push ecx
        call eax
        lea eax, ss:[ebp-0xC]
        push 0x10
        mov dword ptr ss : [ebp-0x24], eax
        lea eax, ss:[ebp-0x14]
        push 7
        push eax
        lea eax, ss:[ebp-0x2C]
        mov dword ptr ss : [ebp-0x2C], 0x18
        push eax
        lea eax, ss:[ebp-4]
        push 0x100001
        push eax
        mov dword ptr ss : [ebp-0x28], esi
        mov dword ptr ss : [ebp-0x20], 0x40
        mov dword ptr ss : [ebp-0x1C], esi
        mov dword ptr ss : [ebp-0x18], esi
        call dword ptr ds : [public_6ae0e70]
        cmp eax, esi
        jl public_6acd1b8
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push eax
        push dword ptr ds : [eax]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push 0x390008
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6ada050]
        push dword ptr ss : [ebp-4]
        mov esi, eax
        call dword ptr ds : [public_6ada04c]
        mov eax, esi
        jmp public_6acd1ba
        public_6acd1b8 : nop
        xor eax, eax
        public_6acd1ba : nop
        pop esi
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6acd11d)
    }
}

#undef public_6acd1b8
#undef public_6acd1ba
