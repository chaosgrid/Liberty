#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6622db0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

PROC_DECLARE(0x6622db0, internal_6622db0, public_6622db0);
extern "C" NAKED register_t __cdecl internal_6622db0()
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
        xor ecx, ecx
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax+0x38], ecx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6622db0)
    }
}
