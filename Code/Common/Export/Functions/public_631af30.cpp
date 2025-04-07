#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631af30, internal_631af30, public_631af30);
extern "C" NAKED register_t __cdecl internal_631af30()
{
    __asm
    {
        xor eax, eax
        push edi
        lea edi, ds:[ecx+0xC]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov dword ptr ds : [ecx+4], eax
        mov byte ptr ds : [ecx+8], al
        mov ecx, edi
        call public_630e270
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x631af30)
    }
}
