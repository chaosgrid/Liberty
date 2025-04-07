#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3465e);

PROC_DECLARE(0x6f34640, internal_6f34640, public_6f34640);
extern "C" NAKED register_t __cdecl internal_6f34640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f3465e
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [edx]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f34640)
    }
}
