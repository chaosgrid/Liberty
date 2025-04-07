#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303680);

#define public_630369a _public_630369a

PROC_DECLARE(0x6303680, internal_6303680, public_6303680);
extern "C" NAKED register_t __cdecl internal_6303680()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        call dword ptr ds : [esi+4]
        add esp, 8
        test al, al
        je public_630369a
        inc dword ptr ds : [esi]
        public_630369a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6303680)
    }
}

#undef public_630369a
