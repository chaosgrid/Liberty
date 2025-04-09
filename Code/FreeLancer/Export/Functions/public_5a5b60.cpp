#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a6620);

PROC_DECLARE(0x5a5b60, internal_5a5b60, public_5a5b60);
extern "C" NAKED register_t __cdecl internal_5a5b60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov ecx, offset public_67294c
        call public_5a6620
        movzx ecx, byte ptr ds : [esi+0x20]
        imul ecx, 0x1C
        mov edi, eax
        lea eax, ds:[esi+4]
        push eax
        add ecx, dword ptr ds : [edi+4]
        call dword ptr ds : [public_5c628c]
        movzx ecx, byte ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [edi+4]
        imul ecx, 0x1C
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        mov dword ptr ds : [ecx+edx+0x18], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a5b60)
    }
}
