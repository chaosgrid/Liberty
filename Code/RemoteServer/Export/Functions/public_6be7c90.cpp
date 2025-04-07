#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7c90);
CLANG_FORWARD_PROC_SYMBOL(public_6be7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be7cba _public_6be7cba

PROC_DECLARE(0x6be7c90, internal_6be7c90, public_6be7c90);
extern "C" NAKED register_t __cdecl internal_6be7c90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x6C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be7cba
        mov ecx, eax
        call public_6be7cd0
        test eax, eax
        je public_6be7cba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be7cba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be7c90)
    }
}

#undef public_6be7cba
