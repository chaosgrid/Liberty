#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b3b0);

#define public_6d1b3d3 _public_6d1b3d3
#define public_6d1b440 _public_6d1b440
#define public_6d1b448 _public_6d1b448
#define public_6d1b477 _public_6d1b477

PROC_DECLARE(0x6d1b3b0, internal_6d1b3b0, public_6d1b3b0);
extern "C" NAKED register_t __cdecl internal_6d1b3b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax+4]
        test ecx, ecx
        je public_6d1b3d3
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp+0x10]
        jne public_6d1b3d3
        jmp public_6d1b477
        public_6d1b3d3 : nop
        mov dword ptr ss : [ebp-8], 0
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d1b448
        mov ecx, dword ptr ss : [ebp+0x10]
        xor edx, edx
        cmp dword ptr ds : [ecx], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d1b440
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
/*FIXUP push offset public_6d6ae50 @0x6d1b41e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae50
        push 0x139
/*FIXUP push offset public_6d6ae00 @0x6d1b428*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d1b42d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d1b440 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        public_6d1b448 : nop
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0xF4]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d1b477
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [ecx+4], 1
        public_6d1b477 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b3b0)
    }
}

#undef public_6d1b3d3
#undef public_6d1b440
#undef public_6d1b448
#undef public_6d1b477
