#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1700);

#define public_62bf954 _public_62bf954

PROC_DECLARE(0x62bf910, internal_62bf910, public_62bf910);
extern "C" NAKED register_t __cdecl internal_62bf910()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        sub esp, 0xC
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bf954
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bf954
        push esi
        lea eax, ss:[esp+4]
        push eax
        xor esi, esi
        call public_62b1700
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, esi
        pop esi
        public_62bf954 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62bf910)
    }
}

#undef public_62bf954
