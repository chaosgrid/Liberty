#include "RP8-PCH.h"


#define public_6d084c3 _public_6d084c3
#define public_6d084ec _public_6d084ec

PROC_DECLARE(0x6d08461, internal_6d08461, public_6d08461);
extern "C" NAKED register_t __cdecl internal_6d08461()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d084c3
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d65008 @0x6d0849c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65008
        push 0x716
/*FIXUP push offset public_6d65040 @0x6d084a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65040
/*FIXUP push offset public_6d6508c @0x6d084ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6508c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d084ec
        public_6d084c3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1A8]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x12C]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        public_6d084ec : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d08461)
    }
}

#undef public_6d084c3
#undef public_6d084ec
