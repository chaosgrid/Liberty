#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807890);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_68078c7 _public_68078c7

PROC_DECLARE(0x6807890, internal_6807890, public_6807890);
extern "C" NAKED register_t __cdecl internal_6807890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x64
        cmp ecx, eax
        jle public_68078c7
        push eax
        mov eax, dword ptr ss : [esp+0x78]
        push eax
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_680dc38 @0x68078a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc38
        push ecx
        call dword ptr ds : [public_680c060]
        mov eax, dword ptr ss : [esp+0x78]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call public_680a850
        add esp, 0x18
        public_68078c7 : nop
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6807890)
    }
}

#undef public_68078c7
