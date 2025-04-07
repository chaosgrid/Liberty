#include "THORN-PCH.h"


#define public_6f39b20 _public_6f39b20
#define public_6f39b2c _public_6f39b2c
#define public_6f39b32 _public_6f39b32

PROC_DECLARE(0x6f39b00, internal_6f39b00, public_6f39b00);
extern "C" NAKED register_t __cdecl internal_6f39b00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xBC]
        mov edx, dword ptr ds : [ecx+0xC0]
        xor ecx, ecx
        cmp eax, edx
        push esi
        je public_6f39b2c
        mov esi, dword ptr ss : [esp+0xC]
        nop 
        lea esp, ss:[esp]
        public_6f39b20 : nop
        cmp ecx, esi
        jae public_6f39b32
        add eax, 4
        inc ecx
        cmp eax, edx
        jne public_6f39b20
        public_6f39b2c : nop
        xor eax, eax
        pop esi
        ret 8
        public_6f39b32 : nop
        cmp eax, edx
        je public_6f39b2c
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f39b00)
    }
}

#undef public_6f39b20
#undef public_6f39b2c
#undef public_6f39b32
