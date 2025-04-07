#include "Common-PCH.h"

PROC_DECLARE(0x632e740, internal_632e740, public_632e740);
extern "C" NAKED register_t __cdecl internal_632e740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        xor edx, edx
        add esp, 8
        test eax, eax
        setl dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x632e740)
    }
}
