#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8080);
CLANG_FORWARD_PROC_SYMBOL(public_6d08940);

#define public_6d02d37 _public_6d02d37

PROC_DECLARE(0x6d02d10, internal_6d02d10, public_6d02d10);
extern "C" NAKED register_t __cdecl internal_6d02d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ce8080
        test al, al
        je public_6d02d37
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        call public_6d08940
        mov al, 1
        pop esi
        ret 8
        public_6d02d37 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d02d10)
    }
}

#undef public_6d02d37
