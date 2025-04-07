#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

PROC_DECLARE(0x620c160, internal_620c160, public_620c160);
extern "C" NAKED register_t __cdecl internal_620c160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x620c160)
    }
}
