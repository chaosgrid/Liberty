#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8810);
CLANG_FORWARD_PROC_SYMBOL(public_62e8820);

#define public_62c7d25 _public_62c7d25
#define public_62c7d3b _public_62c7d3b
#define public_62c7d56 _public_62c7d56

PROC_DECLARE(0x62c7d00, internal_62c7d00, public_62c7d00);
extern "C" NAKED register_t __cdecl internal_62c7d00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ds : [esi+0x2B4], 0
        mov cl, byte ptr ds : [eax+0x1958]
        test cl, cl
        je public_62c7d25
        lea ecx, ds:[eax+0x34]
        call public_62e8810
        mov byte ptr ds : [esi+0x2B4], al
        public_62c7d25 : nop
        mov al, byte ptr ds : [esi+0x2B4]
        test al, al
        je public_62c7d3b
        mov eax, dword ptr ds : [esi+0x2A8]
        mov dword ptr ds : [esi+0x2B0], eax
        public_62c7d3b : nop
        mov al, byte ptr ds : [esi+0x2B5]
        test al, al
        jne public_62c7d56
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8820
        mov byte ptr ds : [esi+0x2B5], al
        public_62c7d56 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62c7d00)
    }
}

#undef public_62c7d25
#undef public_62c7d3b
#undef public_62c7d56
