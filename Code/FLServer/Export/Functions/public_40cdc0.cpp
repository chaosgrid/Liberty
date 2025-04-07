#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_418d80);

#define public_40cde5 _public_40cde5
#define public_40ce10 _public_40ce10
#define public_40ce23 _public_40ce23
#define public_40ce45 _public_40ce45
#define public_40ce5d _public_40ce5d

PROC_DECLARE(0x40cdc0, internal_40cdc0, public_40cdc0);
extern "C" NAKED register_t __cdecl internal_40cdc0()
{
    __asm
    {
        sub esp, 0x1C
        push edi
        call dword ptr ds : [public_41b198]
        cmp eax, dword ptr ds : [public_427820]
        jne public_40cde5
        mov eax, dword ptr ds : [public_42780c]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        pop edi
        add esp, 0x1C
        ret 
        public_40cde5 : nop
        mov edi, dword ptr ds : [public_41bbf4]
        push 0xBF
        push 0xFFFFFFFF
        push 0
/*FIXUP push offset public_42780c @0x40cdf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42780c
        push 1
        call edi
        cmp eax, 1
        jne public_40ce5d
        push esi
        mov esi, dword ptr ds : [public_41bc04]
        lea esp, ss:[esp]
        public_40ce10 : nop
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        call esi
        test eax, eax
        je public_40ce45
        public_40ce23 : nop
        call public_418d80
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        call esi
        test eax, eax
        jne public_40ce23
        public_40ce45 : nop
        push 0xBF
        push 0xFFFFFFFF
        push 0
/*FIXUP push offset public_42780c @0x40ce4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42780c
        push 1
        call edi
        cmp eax, 1
        je public_40ce10
        pop esi
        public_40ce5d : nop
        pop edi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x40cdc0)
    }
}

#undef public_40cde5
#undef public_40ce10
#undef public_40ce23
#undef public_40ce45
#undef public_40ce5d
