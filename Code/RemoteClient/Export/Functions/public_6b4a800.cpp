#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a800);
CLANG_FORWARD_PROC_SYMBOL(public_6b4a840);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4a82d _public_6b4a82d

PROC_DECLARE(0x6b4a800, internal_6b4a800, public_6b4a800);
extern "C" NAKED register_t __cdecl internal_6b4a800()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xEC
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4a82d
        mov ecx, eax
        call public_6b4a840
        test eax, eax
        je public_6b4a82d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4a82d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4a800)
    }
}

#undef public_6b4a82d
