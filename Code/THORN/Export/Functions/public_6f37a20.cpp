#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a20);

PROC_DECLARE(0x6f37a20, internal_6f37a20, public_6f37a20);
extern "C" NAKED register_t __cdecl internal_6f37a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6f37a20)
    }
}
