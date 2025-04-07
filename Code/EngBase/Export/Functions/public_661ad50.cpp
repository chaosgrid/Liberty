#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661acd0);
CLANG_FORWARD_PROC_SYMBOL(public_661ad50);

PROC_DECLARE(0x661ad50, internal_661ad50, public_661ad50);
extern "C" NAKED register_t __cdecl internal_661ad50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        mov dword ptr ds : [ecx+8], 2
        mov dword ptr ds : [ecx+0x14], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0x24], eax
        mov dword ptr ds : [ecx], offset public_66294ac
        call public_661acd0
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x661ad50)
    }
}
