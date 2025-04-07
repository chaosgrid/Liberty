#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378a40);
CLANG_FORWARD_PROC_SYMBOL(public_637a060);

#define public_637a06f _public_637a06f

PROC_DECLARE(0x637a060, internal_637a060, public_637a060);
extern "C" NAKED register_t __cdecl internal_637a060()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        lea esi, ds:[ebx+0x1C]
        mov edi, 3
        public_637a06f : nop
        mov dword ptr ds : [esi+4], ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], esi
        call public_6378a40
        mov dword ptr ds : [esi+0x14], eax
        add esi, 0x24
        dec edi
        jne public_637a06f
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637a060)
    }
}

#undef public_637a06f
