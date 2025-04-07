#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68e40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f68e40, internal_6f68e40, public_6f68e40);
extern "C" NAKED register_t __cdecl internal_6f68e40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f68e40)
    }
}
