#include "Common-PCH.h"


#define public_62c08a0 _public_62c08a0
#define public_62c08b9 _public_62c08b9
#define public_62c08bc _public_62c08bc

PROC_DECLARE(0x62c0870, internal_62c0870, public_62c0870);
extern "C" NAKED register_t __cdecl internal_62c0870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62c08b9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c08b9
        mov ecx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx+0x8C]
        cmp eax, edx
        je public_62c08b9
        mov edi, edi
        public_62c08a0 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, 1
        je public_62c08bc
        cmp ecx, 6
        je public_62c08bc
        cmp ecx, 7
        je public_62c08bc
        add eax, 0x10
        cmp eax, edx
        jne public_62c08a0
        public_62c08b9 : nop
        xor al, al
        ret 
        public_62c08bc : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62c0870)
    }
}

#undef public_62c08a0
#undef public_62c08b9
#undef public_62c08bc
