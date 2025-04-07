#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bece30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

PROC_DECLARE(0x6bece30, internal_6bece30, public_6bece30);
extern "C" NAKED register_t __cdecl internal_6bece30()
{
    __asm
    {
        push 0x50
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x48], dl
        mov byte ptr ds : [eax+0x49], 0
        ret 8
        UNREACHABLE_TRAP(0x6bece30)
    }
}
