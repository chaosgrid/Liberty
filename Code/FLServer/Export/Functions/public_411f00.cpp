#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419254);
CLANG_FORWARD_PROC_SYMBOL(public_41925a);
CLANG_FORWARD_PROC_SYMBOL(public_419260);
CLANG_FORWARD_PROC_SYMBOL(public_419266);

#define public_411f94 _public_411f94
#define public_411f9b _public_411f9b

PROC_DECLARE(0x411f00, internal_411f00, public_411f00);
extern "C" NAKED register_t __cdecl internal_411f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push eax
        mov esi, ecx
        call public_419266
        cmp eax, 0xFFFFFFFF
        je public_411f9b
        push 0xE801
        push 0x50008200
        lea edi, ds:[esi+0xC4]
        push esi
        mov ecx, edi
        call public_419260
        test eax, eax
        je public_411f9b
        push 2
/*FIXUP push offset public_4258e0 @0x411f35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258e0
        mov ecx, edi
        call public_41925a
        test eax, eax
        je public_411f9b
        mov ecx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [public_41bc18]
        push 0
        push 0x3E8
        push 0x111
        push ecx
        call edi
        mov edx, dword ptr ds : [esi+0x20]
        push 0
        push 0x2AF8
        push 0x112
        push edx
        call edi
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        call dword ptr ds : [public_41bbc4]
        push eax
        call public_419254
        test eax, eax
        je public_411f94
        mov ecx, dword ptr ds : [eax+4]
        push 0x400
        push 5
        push ecx
        call dword ptr ds : [public_41bbc8]
        public_411f94 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_411f9b : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x411f00)
    }
}

#undef public_411f94
#undef public_411f9b
