#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802580);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

#define public_6809cae _public_6809cae
#define public_6809cc2 _public_6809cc2
#define public_6809cc5 _public_6809cc5
#define public_6809cd8 _public_6809cd8

PROC_DECLARE(0x6809c90, internal_6809c90, public_6809c90);
extern "C" NAKED register_t __cdecl internal_6809c90()
{
    __asm
    {
        push esi
        push 1
        call public_6805f40
        push eax
        call public_6801bd0
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 8
        cmp eax, 0xFFFFFFFA
        jne public_6809cae
        xor esi, esi
        jmp public_6809cc5
        public_6809cae : nop
        cmp eax, 0xFFFFFFFE
        je public_6809cc2
/*FIXUP push offset public_680d440 @0x6809cb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d440
        push 1
        call public_6805d80
        add esp, 8
        public_6809cc2 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6809cc5 : nop
        push esi
        call public_6802580
        add esp, 4
        test eax, eax
        pop esi
        jne public_6809cd8
        jmp public_68021e0
        public_6809cd8 : nop
        ret 
        UNREACHABLE_TRAP(0x6809c90)
    }
}

#undef public_6809cae
#undef public_6809cc2
#undef public_6809cc5
#undef public_6809cd8
