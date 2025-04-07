#include "RP8-PCH.h"


#define public_6d0afba _public_6d0afba
#define public_6d0b097 _public_6d0b097

PROC_DECLARE(0x6d0af55, internal_6d0af55, public_6d0af55);
extern "C" NAKED register_t __cdecl internal_6d0af55()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0afba
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
/*FIXUP push offset public_6d664f8 @0x6d0af90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d664f8
        push 0xA79
/*FIXUP push offset public_6d66528 @0x6d0af9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66528
/*FIXUP push offset public_6d66574 @0x6d0af9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66574
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0b097
        public_6d0afba : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6d70500], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_6d70510], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6d70520], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [public_6d70504], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [public_6d70514], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [public_6d70524], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [public_6d70508], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [public_6d70518], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ds : [public_6d70528], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [public_6d70530], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [public_6d70534], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [public_6d70538], eax
        mov dword ptr ds : [public_6d7052c], 0
        mov dword ptr ds : [public_6d7051c], 0
        mov dword ptr ds : [public_6d7050c], 0
        mov dword ptr ds : [public_6d7053c], 0x3F800000
/*FIXUP push offset public_6d70500 @0x6d0b06d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d70500
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 0x100
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x94]
        public_6d0b097 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0af55)
    }
}

#undef public_6d0afba
#undef public_6d0b097
