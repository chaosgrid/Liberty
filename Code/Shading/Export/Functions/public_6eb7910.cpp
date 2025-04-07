#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7910);

PROC_DECLARE(0x6eb7910, internal_6eb7910, public_6eb7910);
extern "C" NAKED register_t __cdecl internal_6eb7910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[esi+8]
        push edi
        push ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb7910)
    }
}
