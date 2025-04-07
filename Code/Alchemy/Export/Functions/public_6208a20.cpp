#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208a20);

PROC_DECLARE(0x6208a20, internal_6208a20, public_6208a20);
/* CHUNK of public_6206850 */
extern "C" NAKED register_t __cdecl internal_6208a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208a20)
    }
}
