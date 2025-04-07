#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52860);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52fc0);

#define public_6f52fe5 _public_6f52fe5
#define public_6f52ffb _public_6f52ffb
#define public_6f53010 _public_6f53010

PROC_DECLARE(0x6f52fc0, internal_6f52fc0, public_6f52fc0);
extern "C" NAKED register_t __cdecl internal_6f52fc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        sub eax, 0
        je public_6f52ffb
        dec eax
        je public_6f52fe5
        sub eax, 2
        jne public_6f53010
        mov eax, dword ptr ss : [esp+4]
        push 0xFFFFFFFD
        push 0x1A
        push eax
        call public_6f52860
        add esp, 0xC
        ret 
        public_6f52fe5 : nop
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
        push ecx
        push 0x17
        push edx
        call public_6f52dd0
        add esp, 0x10
        ret 
        public_6f52ffb : nop
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
        push eax
        push 0x19
        push ecx
        call public_6f52dd0
        add esp, 0x10
        public_6f53010 : nop
        ret 
        UNREACHABLE_TRAP(0x6f52fc0)
    }
}

#undef public_6f52fe5
#undef public_6f52ffb
#undef public_6f53010
