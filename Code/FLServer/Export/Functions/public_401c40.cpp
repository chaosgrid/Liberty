#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_401c68 _public_401c68

PROC_DECLARE(0x401c40, internal_401c40, public_401c40);
extern "C" NAKED register_t __cdecl internal_401c40()
{
    __asm
    {
        push esi
        lea esi, ds:[ecx-0x58]
        push edi
        lea edi, ds:[esi+0x58]
        mov ecx, edi
        call dword ptr ds : [public_41b844]
        mov ecx, edi
        call dword ptr ds : [public_41b858]
        test byte ptr ss : [esp+0xC], 1
        je public_401c68
        push esi
        call public_418978
        add esp, 4
        public_401c68 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x401c40)
    }
}

#undef public_401c68
