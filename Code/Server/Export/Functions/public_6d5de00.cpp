#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5de12 _public_6d5de12
#define public_6d5de21 _public_6d5de21
#define public_6d5de29 _public_6d5de29

PROC_DECLARE(0x6d5de00, internal_6d5de00, public_6d5de00);
extern "C" NAKED register_t __cdecl internal_6d5de00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5de12
        ret 
        public_6d5de12 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5de21
        ret 
        public_6d5de21 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6d5de29
        ret 
        public_6d5de29 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea ecx, ds:[eax+0x142C]
        call dword ptr ds : [public_6d649dc]
        ret 
        UNREACHABLE_TRAP(0x6d5de00)
    }
}

#undef public_6d5de12
#undef public_6d5de21
#undef public_6d5de29
