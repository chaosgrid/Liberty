#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9d90);
CLANG_FORWARD_PROC_SYMBOL(public_6beaab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9dba _public_6be9dba

PROC_DECLARE(0x6be9d90, internal_6be9d90, public_6be9d90);
extern "C" NAKED register_t __cdecl internal_6be9d90()
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
        je public_6be9dba
        mov ecx, eax
        call public_6beaab0
        test eax, eax
        je public_6be9dba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9dba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9d90)
    }
}

#undef public_6be9dba
