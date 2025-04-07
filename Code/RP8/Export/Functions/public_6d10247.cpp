#include "RP8-PCH.h"


#define public_6d102b5 _public_6d102b5
#define public_6d1030a _public_6d1030a
#define public_6d10312 _public_6d10312
#define public_6d1031c _public_6d1031c

PROC_DECLARE(0x6d10247, internal_6d10247, public_6d10247);
extern "C" NAKED register_t __cdecl internal_6d10247()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d102b5
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
/*FIXUP push offset public_6d68b20 @0x6d1028d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68b20
        push 0xE75
/*FIXUP push offset public_6d68b70 @0x6d10297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68b70
/*FIXUP push offset public_6d68bbc @0x6d1029c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68bbc
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d1031c
        public_6d102b5 : nop
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x354], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d10312
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx*8+0x1F94]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d1030a
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+4], 1
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx], 0
        public_6d1030a : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        public_6d10312 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        public_6d1031c : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d10247)
    }
}

#undef public_6d102b5
#undef public_6d1030a
#undef public_6d10312
#undef public_6d1031c
