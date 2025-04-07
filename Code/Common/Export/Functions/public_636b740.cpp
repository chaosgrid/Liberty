#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636b5e0);
CLANG_FORWARD_PROC_SYMBOL(public_636b740);

PROC_DECLARE(0x636b740, internal_636b740, public_636b740);
extern "C" NAKED register_t __cdecl internal_636b740()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+2]
        mov edx, dword ptr ds : [eax+ecx*8+4]
        push edx
        mov ecx, esi
        call public_636b5e0
        mov eax, dword ptr ds : [esi+0x14]
        mov word ptr ds : [eax+2], 0
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636b740)
    }
}
