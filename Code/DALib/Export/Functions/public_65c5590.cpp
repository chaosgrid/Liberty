#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5590);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

PROC_DECLARE(0x65c5590, internal_65c5590, public_65c5590);
extern "C" NAKED register_t __cdecl internal_65c5590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65c5590)
    }
}
