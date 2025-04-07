#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62770a0);

#define public_6277c63 _public_6277c63

PROC_DECLARE(0x6277c50, internal_6277c50, public_6277c50);
extern "C" NAKED register_t __cdecl internal_6277c50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        jne public_6277c63
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_62770a0
        public_6277c63 : nop
        mov byte ptr ds : [esi+8], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6277c50)
    }
}

#undef public_6277c63
