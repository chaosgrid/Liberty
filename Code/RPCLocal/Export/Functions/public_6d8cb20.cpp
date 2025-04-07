#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb20);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8cb34 _public_6d8cb34
#define public_6d8cb44 _public_6d8cb44

PROC_DECLARE(0x6d8cb20, internal_6d8cb20, public_6d8cb20);
extern "C" NAKED register_t __cdecl internal_6d8cb20()
{
    __asm
    {
        push 0xC
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6d8cb34
        mov ecx, eax
        public_6d8cb34 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d8cb44
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6d8cb44 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6d8cb20)
    }
}

#undef public_6d8cb34
#undef public_6d8cb44
