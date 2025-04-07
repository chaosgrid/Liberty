#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fb80);
CLANG_FORWARD_PROC_SYMBOL(public_63809e0);
CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_6381ce0);

#define public_6381d24 _public_6381d24
#define public_6381d3b _public_6381d3b
#define public_6381d45 _public_6381d45
#define public_6381d7e _public_6381d7e
#define public_6381d9c _public_6381d9c
#define public_6381df2 _public_6381df2
#define public_6381e03 _public_6381e03
#define public_6381e31 _public_6381e31
#define public_6381e41 _public_6381e41

PROC_DECLARE(0x6381ce0, internal_6381ce0, public_6381ce0);
extern "C" NAKED register_t __cdecl internal_6381ce0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov ecx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        lea edi, ds:[ebx-1]
        push edi
        push esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        call public_63809e0
        mov ecx, edi
        add esp, 0x14
        mov eax, ecx
        dec ecx
        test eax, eax
        je public_6381d45
        lea edx, ds:[esi+ecx*4]
        public_6381d24 : nop
        mov eax, dword ptr ds : [edx]
        fld qword ptr ds : [eax+ecx*8]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_6381d3b
        xor dword ptr ss : [esp+0x10], 1
        public_6381d3b : nop
        mov eax, ecx
        dec ecx
        sub edx, 4
        test eax, eax
        jne public_6381d24
        public_6381d45 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        cmp dword ptr ds : [ecx], 0
        je public_6381d9c
        mov ecx, dword ptr ds : [public_658bd90]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bd90], ecx
        je public_6381d7e
        mov edx, dword ptr ds : [public_658b870]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f69a0 @0x6381d6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f69a0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6381d7e : nop
        mov esi, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edx
        push ebx
        push edi
        push eax
        call public_637fb80
        add esp, 0x18
        jmp public_6381df2
        public_6381d9c : nop
        mov esi, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edx
        push ebx
        push edi
        push eax
        call public_637fb80
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        test eax, eax
        je public_6381e03
        mov ecx, dword ptr ds : [public_658bd90]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bd90], ecx
        je public_6381df2
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63f6944 @0x6381de3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6944
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6381df2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6381e03
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], 1
        public_6381e03 : nop
        push 0
        push 0
        push 1
        push ebx
        push esi
        call public_6380f60
        mov eax, dword ptr ss : [ebp+0x10]
        fld qword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x1C]
        fmul qword ptr ds : [esi]
        add esp, 0x14
        add esi, 8
        add eax, 8
        mov ecx, edi
        fchs 
        dec ecx
        fstp qword ptr ds : [edx]
        test edi, edi
        je public_6381e41
        sub esi, eax
        inc ecx
        public_6381e31 : nop
        fld qword ptr ds : [esi+eax]
        add eax, 8
        dec ecx
        fmul qword ptr ds : [eax-8]
        fsubr qword ptr ds : [edx]
        fstp qword ptr ds : [edx]
        jne public_6381e31
        public_6381e41 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6381ce0)
    }
}

#undef public_6381d24
#undef public_6381d3b
#undef public_6381d45
#undef public_6381d7e
#undef public_6381d9c
#undef public_6381df2
#undef public_6381e03
#undef public_6381e31
#undef public_6381e41
