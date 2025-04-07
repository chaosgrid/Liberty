#include "Common-PCH.h"


#define public_62f5e59 _public_62f5e59
#define public_62f5e70 _public_62f5e70
#define public_62f5e88 _public_62f5e88

PROC_DECLARE(0x62f5e40, internal_62f5e40, public_62f5e40);
extern "C" NAKED register_t __cdecl internal_62f5e40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xAC]
        test edx, edx
        je public_62f5e59
        mov eax, dword ptr ds : [ecx+0xB0]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jne public_62f5e70
        public_62f5e59 : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_62f5e88
        cmp eax, 0x22
        jg public_62f5e88
        mov eax, dword ptr ds : [eax*4+public_63ecc98]
        ret 4
        public_62f5e70 : nop
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jl public_62f5e88
        cmp edx, eax
        jg public_62f5e88
        mov eax, dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [eax+edx*4]
        ret 4
        public_62f5e88 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62f5e40)
    }
}

#undef public_62f5e59
#undef public_62f5e70
#undef public_62f5e88
