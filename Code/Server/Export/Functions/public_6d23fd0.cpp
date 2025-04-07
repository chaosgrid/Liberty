#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);

PROC_DECLARE(0x6d23fd0, internal_6d23fd0, public_6d23fd0);
extern "C" NAKED register_t __cdecl internal_6d23fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], eax
        dec dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d23fd0)
    }
}
