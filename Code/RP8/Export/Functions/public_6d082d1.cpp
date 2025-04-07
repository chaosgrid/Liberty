#include "RP8-PCH.h"


#define public_6d0833a _public_6d0833a
#define public_6d0835f _public_6d0835f
#define public_6d08376 _public_6d08376
#define public_6d083c7 _public_6d083c7
#define public_6d083ca _public_6d083ca

PROC_DECLARE(0x6d082d1, internal_6d082d1, public_6d082d1);
extern "C" NAKED register_t __cdecl internal_6d082d1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d0833a
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d64ec0 @0x6d08310*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64ec0
        push 0x6EB
/*FIXUP push offset public_6d64ef8 @0x6d0831a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64ef8
/*FIXUP push offset public_6d64f44 @0x6d0831f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64f44
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d083ca
        public_6d0833a : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x198
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d0835f
        mov dword ptr ss : [ebp-0x18], 0
        jmp public_6d08376
        public_6d0835f : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-0x18], eax
        public_6d08376 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A8]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6d083c7
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x1A8], 0
        jb public_6d083c7
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x19C]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1A8]
        imul edx, 0x520
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, edx
        mov dword ptr ss : [ebp-8], eax
        mov ecx, 0x148
        mov esi, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp+0xC]
        rep movsd
        mov dword ptr ss : [ebp-4], 0
        public_6d083c7 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d083ca : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d082d1)
    }
}

#undef public_6d0833a
#undef public_6d0835f
#undef public_6d08376
#undef public_6d083c7
#undef public_6d083ca
