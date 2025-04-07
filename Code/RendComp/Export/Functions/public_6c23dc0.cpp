#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

PROC_DECLARE(0x6c23dc0, internal_6c23dc0, public_6c23dc0);
extern "C" NAKED register_t __cdecl internal_6c23dc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_6c34ea0
        xor edx, edx
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        add esp, 8
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c23dc0)
    }
}
