#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_636ca00);

PROC_DECLARE(0x636ca00, internal_636ca00, public_636ca00);
extern "C" NAKED register_t __cdecl internal_636ca00()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0x200
        mov word ptr ds : [esi], 0x80
        mov word ptr ds : [esi+2], 0
        call public_6343f70
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ca00)
    }
}
