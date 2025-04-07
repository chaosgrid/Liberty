#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4618e);
CLANG_FORWARD_PROC_SYMBOL(public_6d46304);
CLANG_FORWARD_PROC_SYMBOL(public_6d46396);

PROC_DECLARE(0x6d46396, internal_6d46396, public_6d46396);
extern "C" NAKED register_t __cdecl internal_6d46396()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        call public_6d4618e
        mov ebx, esi
        call public_6d46304
        mov eax, dword ptr ds : [esi+0x194]
        push esi
        call dword ptr ds : [eax]
        lea edi, ds:[esi+0x184]
        mov eax, dword ptr ds : [edi]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        mov ecx, dword ptr ds : [esi+0x18C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d46396)
    }
}
