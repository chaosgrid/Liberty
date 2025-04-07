#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb50);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f603d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60760);
CLANG_FORWARD_PROC_SYMBOL(public_6f60790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f60457 _public_6f60457
#define public_6f6051a _public_6f6051a
#define public_6f6054c _public_6f6054c
#define public_6f6056d _public_6f6056d
#define public_6f6059f _public_6f6059f
#define public_6f6060e _public_6f6060e
#define public_6f6069f _public_6f6069f
#define public_6f606df _public_6f606df

PROC_DECLARE(0x6f603d0, internal_6f603d0, public_6f603d0);
extern "C" NAKED register_t __cdecl internal_6f603d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax]
        sub esp, 0xB0
        test cl, 0x20
        je public_6f60457
        call dword ptr ds : [public_6fb3370]
        mov edx, dword ptr ss : [esp+0xC0]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        fmul dword ptr ds : [public_6fb4448]
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        fmul qword ptr ds : [public_6fbbc38]
        mov dword ptr ss : [esp+0x24], 0
        fadd dword ptr ds : [public_6fbbc30]
        fstp dword ptr ss : [esp+0x20]
        call public_6f0bb80
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0xC
        add ecx, 0xB4
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xB0
        ret 
        public_6f60457 : nop
        mov eax, dword ptr ss : [esp+0xBC]
        cmp eax, 3
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xBC]
        push esi
        mov esi, dword ptr ss : [esp+0xD0]
        push edi
        lea ebx, ss:[ebp+0x90]
        mov ecx, 9
        mov edi, ebx
        rep movsd
        je public_6f6056d
        cmp eax, 4
        je public_6f6056d
        cmp eax, 5
        je public_6f6056d
        fld dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x1C]
        fstp dword ptr ss : [esp+0x28]
        fld qword ptr ds : [public_6fb74e8]
        fsin 
        fstp dword ptr ss : [esp+0x1C]
        call public_6f0bb50
        fdivr dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x20]
        lea edx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        fld qword ptr ds : [public_6fb74e8]
        fcos 
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edx
        fstp dword ptr ss : [esp+0x50]
        call public_6f60760
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_6fd1c70]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_6f6051a
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6051a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x78]
        lea edi, ss:[esp+0x54]
        rep movsd
        jne public_6f6054c
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6054c : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x78]
        mov edi, ebx
        rep movsd
        public_6f6056d : nop
        mov edx, dword ptr ss : [ebp+0x74]
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
/*FIXUP push offset public_6fbbc28 @0x6f6057e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbc28
        call dword ptr ds : [public_6fb356c]
        mov eax, dword ptr ds : [public_6fd1c70]
        add esp, 0x10
        test eax, eax
        jne public_6f6059f
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6059f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0xD0]
        fadd dword ptr ss : [ebp+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f6060e
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6060e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        push ebx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+0x18]
        sub esp, 0xC
        mov ecx, 9
        lea esi, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        lea edi, ss:[esp+0xA8]
        fld dword ptr ss : [ebp+4]
        rep movsd
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x44]
        call public_6eb7810
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+8]
        push eax
        mov eax, dword ptr ds : [ebx+0x1C]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        push eax
        mov eax, dword ptr ds : [ebx+0x18]
        push ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push edx
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x78]
        call public_6f60790
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        jne public_6f6069f
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6069f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        jne public_6f606df
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f606df : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        push ebx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        pop edi
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        add eax, 0xB4
        fadd dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        pop esi
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x6f603d0)
    }
}

#undef public_6f60457
#undef public_6f6051a
#undef public_6f6054c
#undef public_6f6056d
#undef public_6f6059f
#undef public_6f6060e
#undef public_6f6069f
#undef public_6f606df
