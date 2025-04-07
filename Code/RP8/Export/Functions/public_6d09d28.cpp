#include "RP8-PCH.h"


#define public_6d09d99 _public_6d09d99
#define public_6d09dd3 _public_6d09dd3
#define public_6d09e0d _public_6d09e0d
#define public_6d09e13 _public_6d09e13
#define public_6d09e35 _public_6d09e35
#define public_6d09e3b _public_6d09e3b
#define public_6d09e57 _public_6d09e57
#define public_6d09ea0 _public_6d09ea0
#define public_6d09ef6 _public_6d09ef6
#define public_6d09f8d _public_6d09f8d
#define public_6d09f90 _public_6d09f90

PROC_DECLARE(0x6d09d28, internal_6d09d28, public_6d09d28);
extern "C" NAKED register_t __cdecl internal_6d09d28()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d09d99
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x34]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x34]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x34], eax
/*FIXUP push offset public_6d65978 @0x6d09d6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65978
        push 0x98A
/*FIXUP push offset public_6d659b8 @0x6d09d78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d659b8
/*FIXUP push offset public_6d65a04 @0x6d09d7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65a04
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d09f90
        public_6d09d99 : nop
        mov dword ptr ss : [ebp-0x38], 0
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x274], 0
        jne public_6d09dd3
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x244]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x240]
        push ecx
        push 0
        push 0
        lea edx, ss:[ebp-0x2C]
        push edx
        call dword ptr ds : [public_6d5e164]
        jmp public_6d09e57
        public_6d09dd3 : nop
        lea eax, ss:[ebp-0x2C]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x240]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x244]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x26C]
        cmp eax, dword ptr ss : [ebp-0x3C]
        jae public_6d09e0d
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x26C]
        mov dword ptr ss : [ebp-0x50], edx
        jmp public_6d09e13
        public_6d09e0d : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x50], eax
        public_6d09e13 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x270]
        cmp eax, dword ptr ss : [ebp-0x40]
        jae public_6d09e35
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x270]
        mov dword ptr ss : [ebp-0x54], edx
        jmp public_6d09e3b
        public_6d09e35 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x54], eax
        public_6d09e3b : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        push edx
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        push 0
        push 0
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        call dword ptr ds : [public_6d5e164]
        public_6d09e57 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-8], edx
        mov dword ptr ss : [ebp-0x44], 0
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x274], 0
        jne public_6d09ea0
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x260]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x244]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x240]
        push eax
        push 0
        push 0
        lea ecx, ss:[ebp-0x18]
        push ecx
        call dword ptr ds : [public_6d5e164]
        jmp public_6d09ef6
        public_6d09ea0 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x274]
        mov dword ptr ss : [ebp-4], eax
        lea ecx, ss:[ebp-0x18]
        mov dword ptr ss : [ebp-0x44], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x264]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x268]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, dword ptr ds : [eax+0x270]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x48]
        add eax, dword ptr ds : [edx+0x26C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x48]
        push edx
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call dword ptr ds : [public_6d5e164]
        public_6d09ef6 : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x30], ecx
        push 0
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0x88760868
        jne public_6d09f8d
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ds : [ecx+0x128]
        shr dl, 2
        and dl, 1
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d09f8d
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 0x88760868
        jne public_6d09f8d
        push 0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x238
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x260]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d09f8d : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        public_6d09f90 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d09d28)
    }
}

#undef public_6d09d99
#undef public_6d09dd3
#undef public_6d09e0d
#undef public_6d09e13
#undef public_6d09e35
#undef public_6d09e3b
#undef public_6d09e57
#undef public_6d09ea0
#undef public_6d09ef6
#undef public_6d09f8d
#undef public_6d09f90
