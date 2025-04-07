#include "Common-PCH.h"


#define public_62f68d9 _public_62f68d9
#define public_62f68f0 _public_62f68f0
#define public_62f6908 _public_62f6908

PROC_DECLARE(0x62f68c0, internal_62f68c0, public_62f68c0);
extern "C" NAKED register_t __cdecl internal_62f68c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC0]
        test edx, edx
        je public_62f68d9
        mov eax, dword ptr ds : [ecx+0xC4]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jne public_62f68f0
        public_62f68d9 : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_62f6908
        cmp eax, 0x17
        jg public_62f6908
        mov eax, dword ptr ds : [eax*4+public_63ecc38]
        ret 4
        public_62f68f0 : nop
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jl public_62f6908
        cmp edx, eax
        jg public_62f6908
        mov eax, dword ptr ds : [ecx+0xC0]
        mov eax, dword ptr ds : [eax+edx*4]
        ret 4
        public_62f6908 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62f68c0)
    }
}

#undef public_62f68d9
#undef public_62f68f0
#undef public_62f6908
