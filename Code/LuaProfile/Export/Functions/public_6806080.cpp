#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806080);

#define public_680608d _public_680608d

PROC_DECLARE(0x6806080, internal_6806080, public_6806080);
extern "C" NAKED register_t __cdecl internal_6806080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_680608d
        mov eax, offset public_680d924
        public_680608d : nop
        mov ecx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 0xFFFFFFFE
        push eax
/*FIXUP push offset public_680d91c @0x680609a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d91c
        push ecx
        call dword ptr ds : [public_680c060]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6806080)
    }
}

#undef public_680608d
