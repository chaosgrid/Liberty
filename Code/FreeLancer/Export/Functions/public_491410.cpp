#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_491410);
CLANG_FORWARD_PROC_SYMBOL(public_491be0);
CLANG_FORWARD_PROC_SYMBOL(public_491f90);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4914a3 _public_4914a3
#define public_4914b0 _public_4914b0
#define public_491569 _public_491569

PROC_DECLARE(0x491410, internal_491410, public_491410);
extern "C" NAKED register_t __cdecl internal_491410()
{
    __asm
    {
        sub esp, 0x244
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_491be0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x7E4]
        push 0
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push 0
        push 0x219A
/*FIXUP push offset public_5d3d00 @0x491447*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3d00
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+4], eax
        push 0
        mov dword ptr ds : [ecx+8], edx
        push 2
        mov ecx, ebx
        call public_491f90
        mov dword ptr ds : [ebx+0x4B4], eax
        mov dword ptr ds : [eax+0x6C], 0xBF800000
        mov eax, dword ptr ds : [ebx+0x7D0]
        test eax, eax
        je public_4914a3
        mov ecx, dword ptr ds : [ebx+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov esi, eax
        call public_4c4830
        cmp esi, eax
        je public_4914a3
        mov ecx, dword ptr ds : [ebx+0x4B4]
        mov byte ptr ds : [ecx+0x48], 0
        public_4914a3 : nop
        xor ebp, ebp
        add ebx, 0x948
        nop 
        lea esp, ss:[esp]
        public_4914b0 : nop
        push ebp
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_5d3ccc @0x4914b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3ccc
        push edx
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        push 1
        push 0
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ds:[ebx-0x18]
        call public_59ec80
        movzx ecx, byte ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ebx-4]
        movzx edx, byte ptr ds : [public_679ba5]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ebx]
        movzx eax, byte ptr ds : [public_679ba6]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ebx+4]
        movzx ecx, byte ptr ds : [public_679ba7]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ebx-0x14]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x24]
        rep movsd
        jne public_491569
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_491569 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x3F19999A
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [ebx-0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        inc ebp
        add ebx, 0x28
        cmp ebp, 0xA
        jl public_4914b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x244
        ret 
        UNREACHABLE_TRAP(0x491410)
    }
}

#undef public_4914a3
#undef public_4914b0
#undef public_491569
