#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68027c0);
CLANG_FORWARD_PROC_SYMBOL(public_6806100);

#define public_68027d4 _public_68027d4

PROC_DECLARE(0x68027c0, internal_68027c0, public_68027c0);
extern "C" NAKED register_t __cdecl internal_68027c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_68027d4
        xor eax, eax
        ret 
        public_68027d4 : nop
        push eax
        push ecx
        call public_6806100
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x68027c0)
    }
}

#undef public_68027d4
