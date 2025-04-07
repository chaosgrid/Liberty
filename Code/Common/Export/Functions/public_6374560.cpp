#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6374560);
CLANG_FORWARD_PROC_SYMBOL(public_6374590);

PROC_DECLARE(0x6374560, internal_6374560, public_6374560);
extern "C" NAKED register_t __cdecl internal_6374560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        call public_6374590
        push esi
        mov edi, eax
        call public_636ecc0
        push edi
        mov dword ptr ds : [esi], edi
        call public_636edf0
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6374560)
    }
}
