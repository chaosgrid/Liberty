#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be58c0);
CLANG_FORWARD_PROC_SYMBOL(public_6be5900);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be58ea _public_6be58ea

PROC_DECLARE(0x6be58c0, internal_6be58c0, public_6be58c0);
extern "C" NAKED register_t __cdecl internal_6be58c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be58ea
        mov ecx, eax
        call public_6be5900
        test eax, eax
        je public_6be58ea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be58ea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be58c0)
    }
}

#undef public_6be58ea
