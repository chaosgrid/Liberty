#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805850);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x6805850, internal_6805850, public_6805850);
extern "C" NAKED register_t __cdecl internal_6805850()
{
    __asm
    {
        push 0x30
        push 0
        call public_68065d0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        add esp, 8
        cmp ecx, 0xFFFFFFFF
        sete dl
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        dec edx
        and edx, ecx
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [public_680e604]
        inc dword ptr ds : [ecx+0x78]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6805850)
    }
}
