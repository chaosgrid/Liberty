#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a140);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51a156 _public_51a156

PROC_DECLARE(0x51a140, internal_51a140, public_51a140);
extern "C" NAKED register_t __cdecl internal_51a140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_675220]
        sub esp, 0x24
        test eax, eax
        jne public_51a156
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51a156 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x51a140)
    }
}

#undef public_51a156
