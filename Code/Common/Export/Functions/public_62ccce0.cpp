#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec970);

#define public_62ccd02 _public_62ccd02
#define public_62ccd04 _public_62ccd04
#define public_62ccd20 _public_62ccd20

PROC_DECLARE(0x62ccce0, internal_62ccce0, public_62ccce0);
extern "C" NAKED register_t __cdecl internal_62ccce0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cb5e0
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccd20
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ccd20
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccd02
        add eax, 0xFFFFFFF8
        jmp public_62ccd04
        public_62ccd02 : nop
        xor eax, eax
        public_62ccd04 : nop
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x1364
        call public_62ec970
        public_62ccd20 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ccce0)
    }
}

#undef public_62ccd02
#undef public_62ccd04
#undef public_62ccd20
