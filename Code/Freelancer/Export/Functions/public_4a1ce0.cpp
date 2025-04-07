#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ce0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4a1db1 _public_4a1db1
#define public_4a1f72 _public_4a1f72
#define public_4a1fa3 _public_4a1fa3
#define public_4a1fb7 _public_4a1fb7
#define public_4a1fd8 _public_4a1fd8
#define public_4a1fda _public_4a1fda
#define public_4a2010 _public_4a2010
#define public_4a2148 _public_4a2148
#define public_4a21ce _public_4a21ce
#define public_4a21e9 _public_4a21e9

PROC_DECLARE(0x4a1ce0, internal_4a1ce0, public_4a1ce0);
extern "C" NAKED register_t __cdecl internal_4a1ce0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        push edi
        je public_4a21e9
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4a21e9
        mov eax, dword ptr ds : [public_67204c]
        test eax, eax
        je public_4a21e9
        mov ecx, dword ptr ds : [public_672050]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        je public_4a21e9
        cmp dword ptr ds : [esi+0x8A0], 0xFFFFFFFF
        jne public_4a1db1
        push 0
        push 0
        lea edi, ds:[esi+0x89C]
/*FIXUP push offset public_5d3f58 @0x4a1d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3f58
        mov ecx, edi
        call public_59ec80
        movzx ecx, byte ptr ds : [public_679bac]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x14]
        movzx edx, byte ptr ds : [public_679bad]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x18]
        movzx eax, byte ptr ds : [public_679bae]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x1C]
        movzx ecx, byte ptr ds : [public_679baf]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x24]
        public_4a1db1 : nop
        lea edi, ds:[esi+0x418]
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ds : [public_5c75e0]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x3C]
        fmul dword ptr ds : [public_5c75e0]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ds : [esi+0x3F8]
        lea ecx, ds:[esi+0x46C]
        fsub dword ptr ds : [public_5c75dc]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0xC]
        sub esp, 0xC
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], ecx
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [esi+0x3F8]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x2C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        lea ecx, ss:[esp+0x54]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ds : [edi]
        fld dword ptr ds : [esi+0x3F8]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x1C], eax
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ds : [esi+0x7E4]
        je public_4a1fb7
        fld dword ptr ds : [esi+0x4A8]
        fdiv dword ptr ds : [esi+0x4A0]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4a1f72
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4a1f72 : nop
        fld st(1)
        fdivrp 
        fld dword ptr ds : [esi+0x490]
        fadd dword ptr ds : [esi+0x4A0]
        fdivr dword ptr ds : [esi+0x4A8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4a1fa3
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4a1fa3 : nop
        fxch st(2)
        fdiv st, st(2)
        fsub st, st(1)
        fmul dword ptr ds : [esi+0x47C]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        jmp public_4a1fda
        public_4a1fb7 : nop
        fld dword ptr ds : [esi+0x3F8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4a1fd8
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4a1fd8 : nop
        fdivp 
        public_4a1fda : nop
        test ebx, ebx
        fld dword ptr ds : [esi+0x4AC]
        fadd st(0), st
        fdivr st, st(1)
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d3e4c]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jle public_4a21e9
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ds:[ecx]
        public_4a2010 : nop
        mov edx, dword ptr ds : [public_67204c]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x7E0]
        lea edi, ds:[eax+edx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp dword ptr ds : [edi+0x10], eax
        jne public_4a21ce
        fld dword ptr ds : [esi+0xF48]
        mov ecx, dword ptr ss : [esp+0x20]
        fld st(0)
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], ecx
        fxch 
        mov dword ptr ss : [esp+0x3C], edx
        fmul dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], eax
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x84], 0
        fadd dword ptr ds : [esi+0x4A8]
        mov dword ptr ss : [esp+0x80], 0
        fld dword ptr ds : [esi+0x4A8]
        mov dword ptr ss : [esp+0x7C], 0
        fadd st(0), st
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x6C], 0
        fdivp 
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0x3F800000
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+0x4AC]
        fld dword ptr ds : [esi+0x4AC]
        fadd st(0), st
        fdivp 
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x4C]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x28]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x2C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x30]
        fld qword ptr ds : [public_5c8ba8]
        mov eax, dword ptr ss : [esp+0x30]
        fcos 
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov dword ptr ss : [esp+0x48], 0xBF0CCCCC
        fld qword ptr ds : [public_5c8ba8]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x58]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x68]
        jne public_4a2148
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_4a2148 : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x7C], edi
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8A0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x8A0]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ds : [esi+0x8A0]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x308
        push 0x3F800000
        push edx
        lea edx, ds:[esi+0xC80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_4a21ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 0x18
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_4a2010
        pop ebp
        public_4a21e9 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x4a1ce0)
    }
}

#undef public_4a1db1
#undef public_4a1f72
#undef public_4a1fa3
#undef public_4a1fb7
#undef public_4a1fd8
#undef public_4a1fda
#undef public_4a2010
#undef public_4a2148
#undef public_4a21ce
#undef public_4a21e9
