#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5300);
CLANG_FORWARD_PROC_SYMBOL(public_6be5340);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be532d _public_6be532d

PROC_DECLARE(0x6be5300, internal_6be5300, public_6be5300);
extern "C" NAKED register_t __cdecl internal_6be5300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xEC
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be532d
        mov ecx, eax
        call public_6be5340
        test eax, eax
        je public_6be532d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be532d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5300)
    }
}

#undef public_6be532d
