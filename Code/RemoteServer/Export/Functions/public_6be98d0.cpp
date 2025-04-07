#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be98d0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be98fd _public_6be98fd

PROC_DECLARE(0x6be98d0, internal_6be98d0, public_6be98d0);
extern "C" NAKED register_t __cdecl internal_6be98d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xA4
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be98fd
        mov ecx, eax
        call public_6beb8c0
        test eax, eax
        je public_6be98fd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be98fd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be98d0)
    }
}

#undef public_6be98fd
