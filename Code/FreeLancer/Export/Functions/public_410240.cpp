#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410240);

PROC_DECLARE(0x410240, internal_410240, public_410240);
extern "C" NAKED register_t __cdecl internal_410240()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        movzx esi, byte ptr ds : [ecx]
        push edi
        movzx edi, byte ptr ds : [ecx+1]
        movzx ecx, byte ptr ds : [ecx+2]
        or esi, 0xFFFFFF00
        shl esi, 8
        or esi, edi
        shl esi, 8
        or esi, ecx
        push esi
        push 0x8B
        push eax
        call dword ptr ds : [edx+0xF0]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x410240)
    }
}
