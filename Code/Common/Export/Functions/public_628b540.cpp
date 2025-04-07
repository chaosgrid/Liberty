#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_6344d50);

#define public_628b55c _public_628b55c

PROC_DECLARE(0x628b540, internal_628b540, public_628b540);
extern "C" NAKED register_t __cdecl internal_628b540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_628b55c
        mov dl, byte ptr ss : [esp+8]
        xor ecx, ecx
        test dl, dl
        setne cl
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        call public_6344d50
        public_628b55c : nop
        ret 
        UNREACHABLE_TRAP(0x628b540)
    }
}

#undef public_628b55c
