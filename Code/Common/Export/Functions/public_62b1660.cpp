#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b1660);

#define public_62b1690 _public_62b1690
#define public_62b16ab _public_62b16ab
#define public_62b16b2 _public_62b16b2

PROC_DECLARE(0x62b1660, internal_62b1660, public_62b1660);
extern "C" NAKED register_t __cdecl internal_62b1660()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        push 0x400
        lea ecx, ss:[esp+8]
        call public_629b990
        lea eax, ss:[esp+4]
        add esi, 0xE4
        push eax
        mov ecx, esi
        call public_629b430
        test eax, eax
        je public_62b16ab
        lea ebx, ds:[ebx]
        public_62b1690 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        test al, al
        jne public_62b16b2
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_629b430
        test eax, eax
        jne public_62b1690
        public_62b16ab : nop
        xor al, al
        pop esi
        add esp, 0x10
        ret 
        public_62b16b2 : nop
        mov al, 1
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62b1660)
    }
}

#undef public_62b1690
#undef public_62b16ab
#undef public_62b16b2
