#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806960);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_68070c0);

#define public_68070e5 _public_68070e5
#define public_68070fb _public_68070fb
#define public_6807110 _public_6807110

PROC_DECLARE(0x68070c0, internal_68070c0, public_68070c0);
extern "C" NAKED register_t __cdecl internal_68070c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        sub eax, 0
        je public_68070fb
        dec eax
        je public_68070e5
        sub eax, 2
        jne public_6807110
        mov eax, dword ptr ss : [esp+4]
        push 0xFFFFFFFD
        push 0x1A
        push eax
        call public_6806960
        add esp, 0xC
        ret 
        public_68070e5 : nop
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
        push ecx
        push 0x17
        push edx
        call public_6806ed0
        add esp, 0x10
        ret 
        public_68070fb : nop
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
        push eax
        push 0x19
        push ecx
        call public_6806ed0
        add esp, 0x10
        public_6807110 : nop
        ret 
        UNREACHABLE_TRAP(0x68070c0)
    }
}

#undef public_68070e5
#undef public_68070fb
#undef public_6807110
