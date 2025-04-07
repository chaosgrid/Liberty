#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01110);

#define public_6d01149 _public_6d01149

PROC_DECLARE(0x6d01110, internal_6d01110, public_6d01110);
extern "C" NAKED register_t __cdecl internal_6d01110()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xB8]
        sub esp, 0xC
        test al, al
        jne public_6d01149
        mov eax, 1
        lea edx, ss:[esp]
        mov byte ptr ds : [ecx+0xB8], al
        mov dword ptr ss : [esp], eax
        mov byte ptr ss : [esp+4], al
        mov byte ptr ss : [esp+5], al
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+0x194]
        public_6d01149 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d01110)
    }
}

#undef public_6d01149
