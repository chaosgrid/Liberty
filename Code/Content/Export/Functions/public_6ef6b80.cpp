#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef6b97 _public_6ef6b97
#define public_6ef6ba7 _public_6ef6ba7

PROC_DECLARE(0x6ef6b80, internal_6ef6b80, public_6ef6b80);
extern "C" NAKED register_t __cdecl internal_6ef6b80()
{
    __asm
    {
        push 0x50C
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6ef6b97
        mov ecx, eax
        public_6ef6b97 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ef6ba7
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ef6ba7 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ef6b80)
    }
}

#undef public_6ef6b97
#undef public_6ef6ba7
