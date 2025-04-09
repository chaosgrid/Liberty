#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401130);

PROC_DECLARE(0x401130, internal_401130, public_401130);
extern "C" NAKED register_t __cdecl internal_401130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [public_5c6d24]
        xor edx, edx
        add esp, 8
        test eax, eax
        setl dl
        mov al, dl
        ret 8
        UNREACHABLE_TRAP(0x401130)
    }
}
