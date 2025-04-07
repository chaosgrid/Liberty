#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1760);

#define public_62bf9ce _public_62bf9ce

PROC_DECLARE(0x62bf9a0, internal_62bf9a0, public_62bf9a0);
extern "C" NAKED register_t __cdecl internal_62bf9a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bf9ce
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bf9ce
        push esi
        xor esi, esi
        call public_62b1760
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx], al
        mov eax, esi
        pop esi
        public_62bf9ce : nop
        ret 4
        UNREACHABLE_TRAP(0x62bf9a0)
    }
}

#undef public_62bf9ce
