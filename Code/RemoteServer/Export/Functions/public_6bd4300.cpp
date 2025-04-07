#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4300);

PROC_DECLARE(0x6bd4300, internal_6bd4300, public_6bd4300);
extern "C" NAKED register_t __cdecl internal_6bd4300()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[ecx+0x2C]
        mov ecx, 0xD
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd4300)
    }
}
