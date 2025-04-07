#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0f37 _public_6ed0f37
#define public_6ed0f47 _public_6ed0f47

PROC_DECLARE(0x6ed0f20, internal_6ed0f20, public_6ed0f20);
extern "C" NAKED register_t __cdecl internal_6ed0f20()
{
    __asm
    {
        push 0x98
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6ed0f37
        mov ecx, eax
        public_6ed0f37 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ed0f47
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ed0f47 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ed0f20)
    }
}

#undef public_6ed0f37
#undef public_6ed0f47
