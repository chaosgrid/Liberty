#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41915e);

PROC_DECLARE(0x410720, internal_410720, public_410720);
extern "C" NAKED register_t __cdecl internal_410720()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        push edx
        call dword ptr ds : [eax+0x10]
        push edi
        mov ecx, esi
        call public_41915e
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x410720)
    }
}
