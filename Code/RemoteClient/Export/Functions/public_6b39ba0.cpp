#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39b10);

#define public_6b39bba _public_6b39bba

PROC_DECLARE(0x6b39ba0, internal_6b39ba0, public_6b39ba0);
extern "C" NAKED register_t __cdecl internal_6b39ba0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6b73d74]
        test ecx, ecx
        je public_6b39bba
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        call public_6b39b10
        ret 
        public_6b39bba : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6b39ba0)
    }
}

#undef public_6b39bba
