#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f83f10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f83f26 _public_6f83f26

PROC_DECLARE(0x6f83f10, internal_6f83f10, public_6f83f10);
extern "C" NAKED register_t __cdecl internal_6f83f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd3b34]
        sub esp, 0x24
        test eax, eax
        jne public_6f83f26
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd3b34], eax
        public_6f83f26 : nop
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
        UNREACHABLE_TRAP(0x6f83f10)
    }
}

#undef public_6f83f26
