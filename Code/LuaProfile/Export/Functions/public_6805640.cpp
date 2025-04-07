#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805640);
CLANG_FORWARD_PROC_SYMBOL(public_6805680);

PROC_DECLARE(0x6805640, internal_6805640, public_6805640);
extern "C" NAKED register_t __cdecl internal_6805640()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        push esi
        mov eax, ecx
        mov esi, 0x1F
        div esi
        add edx, esi
        lea eax, ds:[edx+edx*2]
        mov edx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [edx+0x60]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        push ecx
        call public_6805680
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805640)
    }
}
