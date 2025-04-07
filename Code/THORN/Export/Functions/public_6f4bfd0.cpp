#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e850);

PROC_DECLARE(0x6f4bfd0, internal_6f4bfd0, public_6f4bfd0);
extern "C" NAKED register_t __cdecl internal_6f4bfd0()
{
    __asm
    {
        push 1
        call public_6f4aff0
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        sub edx, 0x10
        push edx
        call public_6f4e850
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        add edx, 0xFFFFFFF0
        add esp, 0xC
        mov dword ptr ds : [ecx], edx
        ret 
        UNREACHABLE_TRAP(0x6f4bfd0)
    }
}
