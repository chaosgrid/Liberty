#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c33100);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e60);

#define public_6c33116 _public_6c33116

PROC_DECLARE(0x6c33100, internal_6c33100, public_6c33100);
extern "C" NAKED register_t __cdecl internal_6c33100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c37d48]
        sub esp, 0xC
        test eax, eax
        jne public_6c33116
        call public_6c34e60
        mov dword ptr ds : [public_6c37d48], eax
        public_6c33116 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6c33100)
    }
}

#undef public_6c33116
