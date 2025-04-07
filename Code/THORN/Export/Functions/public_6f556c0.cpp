#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);

#define public_6f556d5 _public_6f556d5

PROC_DECLARE(0x6f556c0, internal_6f556c0, public_6f556c0);
extern "C" NAKED register_t __cdecl internal_6f556c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f556d5
        push 0
        push 0
        call public_6f4b840
        add esp, 8
        ret 
        public_6f556d5 : nop
        push esi
        call public_6f4b6c0
        mov esi, dword ptr ds : [public_6f5a0ec]
        call esi
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_6f5a0e8]
        push eax
        call public_6f4b790
        call esi
        fild dword ptr ds : [eax]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f556c0)
    }
}

#undef public_6f556d5
