#include "RP8-PCH.h"


#define public_6d0addf _public_6d0addf
#define public_6d0ae1d _public_6d0ae1d

PROC_DECLARE(0x6d0ad7d, internal_6d0ad7d, public_6d0ad7d);
extern "C" NAKED register_t __cdecl internal_6d0ad7d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0addf
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
/*FIXUP push offset public_6d663c8 @0x6d0adb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d663c8
        push 0xA53
/*FIXUP push offset public_6d663f8 @0x6d0adc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d663f8
/*FIXUP push offset public_6d66444 @0x6d0adc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66444
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ae1d
        public_6d0addf : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+0x264], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0x268], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edx+0x26C], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx+0x270], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x274], ecx
        xor eax, eax
        public_6d0ae1d : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d0ad7d)
    }
}

#undef public_6d0addf
#undef public_6d0ae1d
