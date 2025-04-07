#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f55630);

#define public_6f55666 _public_6f55666

PROC_DECLARE(0x6f55630, internal_6f55630, public_6f55630);
extern "C" NAKED register_t __cdecl internal_6f55630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a0b8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, eax
        je public_6f55666
        add eax, 0x20
        cmp esi, eax
        je public_6f55666
        push edi
        call public_6f55610
        push esi
        mov edi, eax
        call dword ptr ds : [public_6f5a0a4]
        push edi
        push esi
        call public_6f4b840
        dec edi
        push edi
        call public_6f4b9f0
        add esp, 0x10
        pop edi
        public_6f55666 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55630)
    }
}

#undef public_6f55666
