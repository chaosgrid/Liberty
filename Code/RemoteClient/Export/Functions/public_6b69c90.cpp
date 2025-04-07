#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69c90);

#define public_6b69ca3 _public_6b69ca3
#define public_6b69cab _public_6b69cab
#define public_6b69cb2 _public_6b69cb2

PROC_DECLARE(0x6b69c90, internal_6b69c90, public_6b69c90);
extern "C" NAKED register_t __cdecl internal_6b69c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6b69cb2
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6b69ca3 : nop
        test eax, eax
        je public_6b69cab
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6b69cab : nop
        add eax, 4
        dec ecx
        jne public_6b69ca3
        pop esi
        public_6b69cb2 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b69c90)
    }
}

#undef public_6b69ca3
#undef public_6b69cab
#undef public_6b69cb2
