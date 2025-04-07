#include "RP8-PCH.h"


#define public_6d0f77b _public_6d0f77b
#define public_6d0f780 _public_6d0f780

PROC_DECLARE(0x6d0f70f, internal_6d0f70f, public_6d0f70f);
extern "C" NAKED register_t __cdecl internal_6d0f70f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0f77b
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-4], eax
/*FIXUP push offset public_6d68278 @0x6d0f753*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68278
        push 0xDB8
/*FIXUP push offset public_6d682c0 @0x6d0f75d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d682c0
/*FIXUP push offset public_6d6830c @0x6d0f762*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6830c
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f780
        public_6d0f77b : nop
        mov eax, 0xFFFFFFF9
        public_6d0f780 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0f70f)
    }
}

#undef public_6d0f77b
#undef public_6d0f780
