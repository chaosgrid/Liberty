#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ab68);

PROC_DECLARE(0x6d5ab68, internal_6d5ab68, public_6d5ab68);
extern "C" NAKED register_t __cdecl internal_6d5ab68()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6d6ee58]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6d6ee5c]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6d6ee60
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_6d6fe60
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d5ab68)
    }
}
