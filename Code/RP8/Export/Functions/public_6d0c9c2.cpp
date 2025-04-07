#include "RP8-PCH.h"


#define public_6d0ca2b _public_6d0ca2b
#define public_6d0cb1b _public_6d0cb1b
#define public_6d0cb1d _public_6d0cb1d

PROC_DECLARE(0x6d0c9c2, internal_6d0c9c2, public_6d0c9c2);
extern "C" NAKED register_t __cdecl internal_6d0c9c2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ca2b
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x44]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x44]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x44], ecx
/*FIXUP push offset public_6d66b10 @0x6d0ca01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b10
        push 0xB27
/*FIXUP push offset public_6d66b40 @0x6d0ca0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b40
/*FIXUP push offset public_6d66b8c @0x6d0ca10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b8c
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0cb1d
        public_6d0ca2b : nop
        mov ecx, 0x10
        xor eax, eax
        lea edi, ss:[ebp-0x40]
        rep stosd
        fld dword ptr ss : [ebp+0x10]
        fsub dword ptr ss : [ebp+0xC]
        fdivr qword ptr ds : [public_6d5e490]
        fstp dword ptr ss : [ebp-0x40]
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ss : [ebp+0x14]
        fdivr qword ptr ds : [public_6d5e490]
        fstp dword ptr ss : [ebp-0x2C]
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ss : [ebp+0x1C]
        fdivr qword ptr ds : [public_6d5e490]
        fstp dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp+0x10]
        fadd dword ptr ss : [ebp+0xC]
        fchs 
        fld dword ptr ss : [ebp+0x10]
        fsub dword ptr ss : [ebp+0xC]
        fdivp 
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp+0x14]
        fadd dword ptr ss : [ebp+0x18]
        fchs 
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ss : [ebp+0x14]
        fdivp 
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0x1C]
        fchs 
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ss : [ebp+0x1C]
        fdivp 
        fstp dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], 0x3F800000
        mov dword ptr ss : [ebp-0x54], 3
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2284
        mov dword ptr ss : [ebp-0x4C], eax
        mov ecx, 0x10
        lea esi, ss:[ebp-0x40]
        mov edi, dword ptr ss : [ebp-0x4C]
        rep movsd
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [ecx+0x40], 0
        xor edx, edx
        test edx, edx
        je public_6d0cb1b
        mov eax, dword ptr ss : [ebp-0x4C]
        movzx ecx, byte ptr ds : [eax+0x40]
        test ecx, ecx
        jne public_6d0cb1b
        mov edx, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [edx+0x41], 0
        mov eax, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ss : [ebp-0x4C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x50]
        push edx
        call dword ptr ds : [ecx+0x94]
        mov dword ptr ss : [ebp-0x48], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x48], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [ecx+0x40], al
        public_6d0cb1b : nop
        xor eax, eax
        public_6d0cb1d : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x1C
        UNREACHABLE_TRAP(0x6d0c9c2)
    }
}

#undef public_6d0ca2b
#undef public_6d0cb1b
#undef public_6d0cb1d
