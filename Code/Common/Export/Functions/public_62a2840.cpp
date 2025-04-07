#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2840);
CLANG_FORWARD_PROC_SYMBOL(public_62b5850);

PROC_DECLARE(0x62a2840, internal_62a2840, public_62a2840);
extern "C" NAKED register_t __cdecl internal_62a2840()
{
    __asm
    {
        push esi
        push 0x1003
        mov esi, ecx
        call public_62b5850
        xor eax, eax
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi], offset public_639db94
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62a2840)
    }
}
