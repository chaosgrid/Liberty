#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a950);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a9a0);

PROC_DECLARE(0x6c2a950, internal_6c2a950, public_6c2a950);
extern "C" NAKED register_t __cdecl internal_6c2a950()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi], offset public_6c36308
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+8], eax
        call public_6c2a9a0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2a950)
    }
}
