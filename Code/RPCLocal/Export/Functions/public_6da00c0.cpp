#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da00c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da0be0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da00ed _public_6da00ed

PROC_DECLARE(0x6da00c0, internal_6da00c0, public_6da00c0);
extern "C" NAKED register_t __cdecl internal_6da00c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x220
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da00ed
        mov ecx, eax
        call public_6da0be0
        test eax, eax
        je public_6da00ed
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da00ed : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da00c0)
    }
}

#undef public_6da00ed
