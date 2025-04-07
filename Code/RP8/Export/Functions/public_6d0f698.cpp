#include "RP8-PCH.h"


#define public_6d0f704 _public_6d0f704
#define public_6d0f709 _public_6d0f709

PROC_DECLARE(0x6d0f698, internal_6d0f698, public_6d0f698);
extern "C" NAKED register_t __cdecl internal_6d0f698()
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
        jne public_6d0f704
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
/*FIXUP push offset public_6d681c8 @0x6d0f6dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d681c8
        push 0xDB4
/*FIXUP push offset public_6d68210 @0x6d0f6e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68210
/*FIXUP push offset public_6d6825c @0x6d0f6eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6825c
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f709
        public_6d0f704 : nop
        mov eax, 0xFFFFFFF9
        public_6d0f709 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d0f698)
    }
}

#undef public_6d0f704
#undef public_6d0f709
