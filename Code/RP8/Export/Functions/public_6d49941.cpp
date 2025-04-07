#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49941);

PROC_DECLARE(0x6d49941, internal_6d49941, public_6d49941);
extern "C" NAKED register_t __cdecl internal_6d49941()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x30
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d49941)
    }
}
