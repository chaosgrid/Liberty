#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ff0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4ff0a0, internal_4ff0a0, public_4ff0a0);
/* CHUNK of public_4670c0 */
extern "C" NAKED register_t __cdecl internal_4ff0a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        push eax
        call public_5b7e1d
        xor edi, edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4ff0a0)
    }
}
