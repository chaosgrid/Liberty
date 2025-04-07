#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11170);

PROC_DECLARE(0x6f11170, internal_6f11170, public_6f11170);
extern "C" NAKED register_t __cdecl internal_6f11170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6f11170)
    }
}
