#include "RP8-PCH.h"


#define public_6d09957 _public_6d09957
#define public_6d0997a _public_6d0997a

PROC_DECLARE(0x6d098f3, internal_6d098f3, public_6d098f3);
extern "C" NAKED register_t __cdecl internal_6d098f3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d09957
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
/*FIXUP push offset public_6d657b0 @0x6d09930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d657b0
        push 0x935
/*FIXUP push offset public_6d657e8 @0x6d0993a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d657e8
/*FIXUP push offset public_6d65834 @0x6d0993f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65834
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0997a
        public_6d09957 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A8]
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x238
        mov ecx, 0xA
        mov edi, dword ptr ss : [ebp+0x10]
        rep movsd
        xor eax, eax
        public_6d0997a : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d098f3)
    }
}

#undef public_6d09957
#undef public_6d0997a
