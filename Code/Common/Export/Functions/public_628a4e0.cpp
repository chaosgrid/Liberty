#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_628a510);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);

#define public_628a509 _public_628a509

PROC_DECLARE(0x628a4e0, internal_628a4e0, public_628a4e0);
extern "C" NAKED register_t __cdecl internal_628a4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push esi
        push edi
        call public_628a510
        mov al, byte ptr ds : [esi+0x1D]
        add esp, 0xC
        test al, al
        je public_628a509
        push 1
        mov ecx, edi
        call public_62ad540
        public_628a509 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x628a4e0)
    }
}

#undef public_628a509
