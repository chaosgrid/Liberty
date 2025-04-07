#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_438c90);

#define public_438cc8 _public_438cc8
#define public_438cee _public_438cee
#define public_438cf5 _public_438cf5
#define public_438cfb _public_438cfb

PROC_DECLARE(0x438c90, internal_438c90, public_438c90);
extern "C" NAKED register_t __cdecl internal_438c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_668740]
        sub esp, 8
        test eax, 0x3FFFFFFF
        je public_438cf5
        mov dword ptr ss : [esp], eax
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_668714
        call public_432240
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_668718]
        je public_438cc8
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_438cee
        public_438cc8 : nop
        mov edx, dword ptr ss : [esp]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x438cd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x438cdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_438cee : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_438cfb
        public_438cf5 : nop
        xor eax, eax
        add esp, 8
        ret 
        public_438cfb : nop
        mov eax, dword ptr ds : [eax+0x500]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x438c90)
    }
}

#undef public_438cc8
#undef public_438cee
#undef public_438cf5
#undef public_438cfb
