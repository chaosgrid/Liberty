#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53610);
CLANG_FORWARD_PROC_SYMBOL(public_6f53650);

PROC_DECLARE(0x6f53650, internal_6f53650, public_6f53650);
extern "C" NAKED register_t __cdecl internal_6f53650()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f53610
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        add esp, 4
        shl eax, 4
        mov eax, dword ptr ds : [eax+ecx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53650)
    }
}
