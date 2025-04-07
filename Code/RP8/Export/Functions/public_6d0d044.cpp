#include "RP8-PCH.h"


#define public_6d0d0a8 _public_6d0d0a8
#define public_6d0d0d1 _public_6d0d0d1

PROC_DECLARE(0x6d0d044, internal_6d0d044, public_6d0d044);
extern "C" NAKED register_t __cdecl internal_6d0d044()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d0a8
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d66fd0 @0x6d0d081*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fd0
        push 0xBAD
/*FIXUP push offset public_6d67000 @0x6d0d08b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67000
/*FIXUP push offset public_6d6704c @0x6d0d090*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6704c
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d0d1
        public_6d0d0a8 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0xB4]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-4]
        public_6d0d0d1 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0d044)
    }
}

#undef public_6d0d0a8
#undef public_6d0d0d1
