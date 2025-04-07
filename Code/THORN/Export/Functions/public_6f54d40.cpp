#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53610);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d40);

#define public_6f54d75 _public_6f54d75
#define public_6f54d98 _public_6f54d98

PROC_DECLARE(0x6f54d40, internal_6f54d40, public_6f54d40);
extern "C" NAKED register_t __cdecl internal_6f54d40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x5B
        je public_6f54d98
        cmp eax, 0x114
        je public_6f54d75
/*FIXUP push offset public_6f61444 @0x6f54d54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61444
        push esi
        call public_6f511c0
        add esp, 8
        push 0x3D
        push esi
        call public_6f53130
        push esi
        call public_6f53a00
        add esp, 0xC
        pop esi
        ret 
        public_6f54d75 : nop
        push esi
        call public_6f53610
        push eax
        push esi
        call public_6f533b0
        add esp, 0xC
        push 0x3D
        push esi
        call public_6f53130
        push esi
        call public_6f53a00
        add esp, 0xC
        pop esi
        ret 
        public_6f54d98 : nop
        push esi
        call public_6f52920
        push esi
        call public_6f53a00
        push 0x5D
        push esi
        call public_6f53130
        add esp, 0x10
        push 0x3D
        push esi
        call public_6f53130
        push esi
        call public_6f53a00
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54d40)
    }
}

#undef public_6f54d75
#undef public_6f54d98
