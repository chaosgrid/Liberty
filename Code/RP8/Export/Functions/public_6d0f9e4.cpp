#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0376f);
CLANG_FORWARD_PROC_SYMBOL(public_6d038ba);

#define public_6d0fa50 _public_6d0fa50
#define public_6d0fa62 _public_6d0fa62

PROC_DECLARE(0x6d0f9e4, internal_6d0f9e4, public_6d0f9e4);
extern "C" NAKED register_t __cdecl internal_6d0f9e4()
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
        jne public_6d0fa50
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
/*FIXUP push offset public_6d68568 @0x6d0fa28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68568
        push 0xDF4
/*FIXUP push offset public_6d685c0 @0x6d0fa32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d685c0
/*FIXUP push offset public_6d6860c @0x6d0fa37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6860c
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0fa62
        public_6d0fa50 : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d0376f
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d038ba
        xor eax, eax
        public_6d0fa62 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d0f9e4)
    }
}

#undef public_6d0fa50
#undef public_6d0fa62
