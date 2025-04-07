#include "RP8-PCH.h"


#define public_6d10144 _public_6d10144
#define public_6d1019b _public_6d1019b
#define public_6d10208 _public_6d10208
#define public_6d10210 _public_6d10210
#define public_6d1023f _public_6d1023f
#define public_6d10241 _public_6d10241

PROC_DECLARE(0x6d100d3, internal_6d100d3, public_6d100d3);
extern "C" NAKED register_t __cdecl internal_6d100d3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d10144
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
/*FIXUP push offset public_6d68a68 @0x6d10119*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a68
        push 0xE67
/*FIXUP push offset public_6d68ab8 @0x6d10123*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68ab8
/*FIXUP push offset public_6d68b04 @0x6d10128*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68b04
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d10241
        public_6d10144 : nop
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x354], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d1023f
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+eax*8+0x1F94]
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x18]
        movzx ecx, byte ptr ds : [eax+4]
        test ecx, ecx
        je public_6d1019b
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6d1019b
        jmp public_6d1023f
        public_6d1019b : nop
        mov dword ptr ss : [ebp-0x10], 0
        cmp dword ptr ss : [ebp-4], 0
        je public_6d10210
        mov ecx, dword ptr ss : [ebp-4]
        xor edx, edx
        cmp dword ptr ds : [ecx], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d10208
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x14]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x14]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x14], ecx
/*FIXUP push offset public_6d6ae50 @0x6d101e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae50
        push 0x139
/*FIXUP push offset public_6d6ae00 @0x6d101f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d101f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d10208 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d10210 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call dword ptr ds : [eax+0xF4]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jl public_6d1023f
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov byte ptr ds : [ecx+4], 1
        public_6d1023f : nop
        xor eax, eax
        public_6d10241 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d100d3)
    }
}

#undef public_6d10144
#undef public_6d1019b
#undef public_6d10208
#undef public_6d10210
#undef public_6d1023f
#undef public_6d10241
