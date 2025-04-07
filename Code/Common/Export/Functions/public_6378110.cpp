#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378110);

PROC_DECLARE(0x6378110, internal_6378110, public_6378110);
extern "C" NAKED register_t __cdecl internal_6378110()
{
    __asm
    {
        push edi
        xor eax, eax
        mov ecx, 0x1A
        mov edi, offset public_658b960
        rep stosd
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_658b994], eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6378110)
    }
}
