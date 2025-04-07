#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_6807710);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_6808e40);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6808e75 _public_6808e75
#define public_6808e98 _public_6808e98

PROC_DECLARE(0x6808e40, internal_6808e40, public_6808e40);
extern "C" NAKED register_t __cdecl internal_6808e40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x5B
        je public_6808e98
        cmp eax, 0x114
        je public_6808e75
/*FIXUP push offset public_680dd74 @0x6808e54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd74
        push esi
        call public_680a850
        add esp, 8
        push 0x3D
        push esi
        call public_6807230
        push esi
        call public_6807b00
        add esp, 0xC
        pop esi
        ret 
        public_6808e75 : nop
        push esi
        call public_6807710
        push eax
        push esi
        call public_68074b0
        add esp, 0xC
        push 0x3D
        push esi
        call public_6807230
        push esi
        call public_6807b00
        add esp, 0xC
        pop esi
        ret 
        public_6808e98 : nop
        push esi
        call public_6806a20
        push esi
        call public_6807b00
        push 0x5D
        push esi
        call public_6807230
        add esp, 0x10
        push 0x3D
        push esi
        call public_6807230
        push esi
        call public_6807b00
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808e40)
    }
}

#undef public_6808e75
#undef public_6808e98
