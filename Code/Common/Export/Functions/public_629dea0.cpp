#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_629deb6 _public_629deb6

PROC_DECLARE(0x629dea0, internal_629dea0, public_629dea0);
extern "C" NAKED register_t __cdecl internal_629dea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+8]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_629deb6
        push edi
        call public_6341610
        public_629deb6 : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629dea0)
    }
}

#undef public_629deb6
