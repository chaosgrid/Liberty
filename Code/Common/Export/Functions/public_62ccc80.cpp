#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb540);
CLANG_FORWARD_PROC_SYMBOL(public_62ec970);

#define public_62ccca2 _public_62ccca2
#define public_62ccca4 _public_62ccca4
#define public_62ccccb _public_62ccccb
#define public_62cccdc _public_62cccdc

PROC_DECLARE(0x62ccc80, internal_62ccc80, public_62ccc80);
extern "C" NAKED register_t __cdecl internal_62ccc80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cb540
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cccdc
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cccdc
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccca2
        add eax, 0xFFFFFFF8
        jmp public_62ccca4
        public_62ccca2 : nop
        xor eax, eax
        public_62ccca4 : nop
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccccb
        mov ecx, dword ptr ds : [esi+0x24]
        add eax, 0xFFFFFFF8
        push eax
        add ecx, 0x1364
        call public_62ec970
        pop esi
        ret 
        public_62ccccb : nop
        mov ecx, dword ptr ds : [esi+0x24]
        xor eax, eax
        push eax
        add ecx, 0x1364
        call public_62ec970
        public_62cccdc : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ccc80)
    }
}

#undef public_62ccca2
#undef public_62ccca4
#undef public_62ccccb
#undef public_62cccdc
