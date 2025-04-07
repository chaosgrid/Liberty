#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6eb5630, internal_6eb5630, public_6eb5630);
extern "C" NAKED register_t __cdecl internal_6eb5630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push 0x34
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb5630)
    }
}
