#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2520);

PROC_DECLARE(0x65f2520, internal_65f2520, public_65f2520);
extern "C" NAKED register_t __cdecl internal_65f2520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x65f2520)
    }
}
