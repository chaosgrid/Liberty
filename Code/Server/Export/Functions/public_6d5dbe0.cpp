#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dbf5 _public_6d5dbf5
#define public_6d5dc07 _public_6d5dc07
#define public_6d5dc12 _public_6d5dc12

PROC_DECLARE(0x6d5dbe0, internal_6d5dbe0, public_6d5dbe0);
extern "C" NAKED register_t __cdecl internal_6d5dbe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5dbf5
        or eax, 0xFFFFFFFF
        ret 
        public_6d5dbf5 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5dc07
        or eax, 0xFFFFFFFF
        ret 
        public_6d5dc07 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_6d5dc12
        or eax, 0xFFFFFFFF
        ret 
        public_6d5dc12 : nop
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6d5dbe0)
    }
}

#undef public_6d5dbf5
#undef public_6d5dc07
#undef public_6d5dc12
