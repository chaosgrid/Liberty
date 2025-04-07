#include "RP8-PCH.h"


#define public_6d082a2 _public_6d082a2
#define public_6d082c9 _public_6d082c9
#define public_6d082cb _public_6d082cb

PROC_DECLARE(0x6d0823e, internal_6d0823e, public_6d0823e);
extern "C" NAKED register_t __cdecl internal_6d0823e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d082a2
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
/*FIXUP push offset public_6d64e1c @0x6d0827b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64e1c
        push 0x6D9
/*FIXUP push offset public_6d64e58 @0x6d08285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64e58
/*FIXUP push offset public_6d64ea4 @0x6d0828a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64ea4
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d082cb
        public_6d082a2 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jl public_6d082c9
        cmp dword ptr ss : [ebp+0xC], 0xE
        jg public_6d082c9
        mov ecx, dword ptr ss : [ebp+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+ecx+0x354]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], edx
        public_6d082c9 : nop
        xor eax, eax
        public_6d082cb : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0823e)
    }
}

#undef public_6d082a2
#undef public_6d082c9
#undef public_6d082cb
