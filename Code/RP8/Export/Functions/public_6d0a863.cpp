#include "RP8-PCH.h"


#define public_6d0a8c5 _public_6d0a8c5
#define public_6d0a8ca _public_6d0a8ca

PROC_DECLARE(0x6d0a863, internal_6d0a863, public_6d0a863);
extern "C" NAKED register_t __cdecl internal_6d0a863()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0a8c5
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
/*FIXUP push offset public_6d66028 @0x6d0a89e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66028
        push 0xA17
/*FIXUP push offset public_6d66060 @0x6d0a8a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66060
/*FIXUP push offset public_6d660ac @0x6d0a8ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d660ac
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a8ca
        public_6d0a8c5 : nop
        mov eax, 0xFFFFFFF9
        public_6d0a8ca : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0a863)
    }
}

#undef public_6d0a8c5
#undef public_6d0a8ca
