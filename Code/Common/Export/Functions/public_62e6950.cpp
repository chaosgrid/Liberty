#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6950);
CLANG_FORWARD_PROC_SYMBOL(public_62e72d0);
CLANG_FORWARD_PROC_SYMBOL(public_62eb6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecfb0);

#define public_62e6987 _public_62e6987

PROC_DECLARE(0x62e6950, internal_62e6950, public_62e6950);
extern "C" NAKED register_t __cdecl internal_62e6950()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x12C]
        call public_62eb6c0
        lea ecx, ds:[esi+0x34]
        call public_62e72d0
        lea ecx, ds:[esi+0x14A8]
        call public_62ecfb0
        mov eax, dword ptr ds : [esi+0x136C]
        test eax, eax
        je public_62e6987
        mov al, byte ptr ds : [eax+0x1958]
        mov byte ptr ds : [esi+0x1427], al
        public_62e6987 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62e6950)
    }
}

#undef public_62e6987
