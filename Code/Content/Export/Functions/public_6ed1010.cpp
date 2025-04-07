#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed1024 _public_6ed1024
#define public_6ed1034 _public_6ed1034

PROC_DECLARE(0x6ed1010, internal_6ed1010, public_6ed1010);
extern "C" NAKED register_t __cdecl internal_6ed1010()
{
    __asm
    {
        push 0x40
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6ed1024
        mov ecx, eax
        public_6ed1024 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ed1034
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ed1034 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ed1010)
    }
}

#undef public_6ed1024
#undef public_6ed1034
