#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ee70);

PROC_DECLARE(0x6f4ee30, internal_6f4ee30, public_6f4ee30);
extern "C" NAKED register_t __cdecl internal_6f4ee30()
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
        mov edx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [edx+0x60]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        push ecx
        call public_6f4ee70
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4ee30)
    }
}
