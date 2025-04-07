#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63723c0);
CLANG_FORWARD_PROC_SYMBOL(public_6372880);
CLANG_FORWARD_PROC_SYMBOL(public_6372a30);
CLANG_FORWARD_PROC_SYMBOL(public_6372f10);
CLANG_FORWARD_PROC_SYMBOL(public_6373210);
CLANG_FORWARD_PROC_SYMBOL(public_63735c0);
CLANG_FORWARD_PROC_SYMBOL(public_6373f50);
CLANG_FORWARD_PROC_SYMBOL(public_6374470);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637d790);
CLANG_FORWARD_PROC_SYMBOL(public_637e950);
CLANG_FORWARD_PROC_SYMBOL(public_6380640);
CLANG_FORWARD_PROC_SYMBOL(public_6382210);
CLANG_FORWARD_PROC_SYMBOL(public_6383840);
CLANG_FORWARD_PROC_SYMBOL(public_63848a0);

#define public_6372a80 _public_6372a80
#define public_6372a88 _public_6372a88
#define public_6372a95 _public_6372a95
#define public_6372aa2 _public_6372aa2
#define public_6372aaa _public_6372aaa
#define public_6372abc _public_6372abc
#define public_6372af0 _public_6372af0
#define public_6372b1b _public_6372b1b
#define public_6372b39 _public_6372b39
#define public_6372ba6 _public_6372ba6
#define public_6372c10 _public_6372c10
#define public_6372c12 _public_6372c12
#define public_6372c23 _public_6372c23
#define public_6372c33 _public_6372c33
#define public_6372c5d _public_6372c5d
#define public_6372c80 _public_6372c80
#define public_6372c86 _public_6372c86
#define public_6372ce1 _public_6372ce1
#define public_6372cf0 _public_6372cf0
#define public_6372cfb _public_6372cfb
#define public_6372d13 _public_6372d13
#define public_6372d2a _public_6372d2a
#define public_6372d7a _public_6372d7a
#define public_6372dac _public_6372dac
#define public_6372dd4 _public_6372dd4
#define public_6372dea _public_6372dea
#define public_6372e84 _public_6372e84
#define public_6372eb7 _public_6372eb7
#define public_6372ec6 _public_6372ec6
#define public_6372efb _public_6372efb

PROC_DECLARE(0x6372a30, internal_6372a30, public_6372a30);
extern "C" NAKED register_t __cdecl internal_6372a30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x18
        mov eax, dword ptr ds : [public_658b060]
        push ebx
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        mov dword ptr ds : [public_658b870], 0xFFFFFFFF
        mov dword ptr ds : [public_658b940], ebp
        mov dword ptr ds : [public_658b858], ebp
        mov dword ptr ds : [public_658b85c], ebp
        mov dword ptr ds : [public_658b854], ebp
        mov dword ptr ds : [public_658b8e4], ebp
        mov dword ptr ds : [public_658b8e0], ebp
        mov dword ptr ds : [public_658b880], ebp
        jle public_6372a80
        dec eax
        push eax
        jmp public_6372a88
        public_6372a80 : nop
        jge public_6372a95
        or ecx, 0xFFFFFFFF
        sub ecx, eax
        push ecx
        public_6372a88 : nop
        call public_6373f50
        add esp, 4
        mov dword ptr ds : [public_658b064], eax
        public_6372a95 : nop
        mov eax, dword ptr ds : [public_658b06c]
        cmp eax, ebp
        jle public_6372aa2
        dec eax
        push eax
        jmp public_6372aaa
        public_6372aa2 : nop
        jge public_6372abc
        or edx, 0xFFFFFFFF
        sub edx, eax
        push edx
        public_6372aaa : nop
        call public_6373f50
        mov dword ptr ds : [public_658b070], eax
        mov eax, dword ptr ds : [public_658b06c]
        add esp, 4
        public_6372abc : nop
        cmp dword ptr ds : [public_658b060], ebp
        je public_6372af0
        mov eax, dword ptr ds : [public_658b064]
        cmp eax, dword ptr ds : [public_658b258]
        jb public_6372b1b
        mov ecx, dword ptr ds : [public_658b254]
        dec ecx
        push ecx
        call public_6373f50
        mov ecx, dword ptr ds : [public_658b064]
        add esp, 4
        cmp ecx, eax
        ja public_6372b1b
        mov eax, dword ptr ds : [public_658b06c]
        public_6372af0 : nop
        cmp eax, ebp
        je public_6372b39
        mov edx, dword ptr ds : [public_658b070]
        cmp edx, dword ptr ds : [public_658b258]
        jb public_6372b1b
        mov eax, dword ptr ds : [public_658b254]
        dec eax
        push eax
        call public_6373f50
        mov ecx, dword ptr ds : [public_658b070]
        add esp, 4
        cmp ecx, eax
        jbe public_6372b39
        public_6372b1b : nop
        mov ecx, dword ptr ds : [public_658b254]
        dec ecx
        push ecx
/*FIXUP push offset public_63f09b4 @0x6372b23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f09b4
        call public_6356960
        push ebp
        push ebp
        push 1
        call public_6378600
        add esp, 0x14
        public_6372b39 : nop
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658b254]
        mov ecx, dword ptr ds : [public_658b258]
        push edx
        push eax
        push ecx
        call public_6383840
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_658b1e0]
        add esp, 0xC
        cmp eax, ebp
        je public_6372ba6
        mov edx, dword ptr ds : [public_658b6c4]
        mov eax, dword ptr ds : [public_658b6c0]
        mov ecx, dword ptr ds : [public_658b6b4]
        push edx
        mov edx, dword ptr ds : [public_658b6b0]
        push eax
        mov eax, dword ptr ds : [public_658b6ec]
        push ecx
        mov ecx, dword ptr ds : [public_658b6e8]
        push edx
        mov edx, dword ptr ds : [public_658b24c]
        push eax
        mov eax, dword ptr ds : [public_658b254]
        push ecx
        mov ecx, dword ptr ds : [public_658b258]
        push edx
        push eax
        push ecx
        call public_63848a0
        add esp, 0x24
        public_6372ba6 : nop
        call public_6382210
        cmp dword ptr ds : [public_658b050], ebp
        je public_6372c80
        mov eax, dword ptr ds : [public_658b678]
        mov edx, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [eax+edx*8-8]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_6372c86
        mov ecx, dword ptr ds : [public_658b67c]
        fld qword ptr ds : [ecx+edx*8-8]
        fcomp qword ptr ds : [public_63a5930]
        fnstsw ax
        test ah, 1
        je public_6372c86
        mov esi, dword ptr ds : [public_658b1f0]
        mov edi, dword ptr ds : [public_658b068]
        mov ebx, dword ptr ds : [public_658b058]
        mov ecx, 0x1B
        mov eax, offset public_658b184
        jmp public_6372c12
        public_6372c10 : nop
        xor ebp, ebp
        public_6372c12 : nop
        cmp dword ptr ds : [eax], 7
        jne public_6372c23
        cmp ebx, ebp
        jge public_6372c23
        cmp edi, ebp
        jne public_6372c23
        cmp esi, ebp
        je public_6372c33
        public_6372c23 : nop
        mov ebp, eax
        dec ecx
        sub eax, 4
        cmp ebp, offset public_658b118
        jne public_6372c10
        xor ebp, ebp
        public_6372c33 : nop
        cmp ecx, ebp
        jge public_6372c86
        mov eax, dword ptr ds : [public_658b21c]
        fld qword ptr ds : [public_658b688]
        cmp eax, ebp
        je public_6372c5d
        mov eax, dword ptr ds : [public_658b67c]
        fadd st(0), st
        fstp qword ptr ds : [eax+edx*8-8]
        mov dword ptr ds : [public_658b068], 1
        jmp public_6372c80
        public_6372c5d : nop
        fmul qword ptr ds : [public_63a5928]
        mov ecx, dword ptr ds : [public_658b678]
        fstp qword ptr ds : [ecx+edx*8-8]
        mov eax, dword ptr ds : [public_658b068]
        cmp eax, ebp
        jne public_6372c80
        mov dword ptr ds : [public_658b1f0], 1
        public_6372c80 : nop
        mov edx, dword ptr ds : [public_658b24c]
        public_6372c86 : nop
        mov eax, dword ptr ds : [public_658b254]
        mov ecx, dword ptr ds : [public_658b258]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        push edx
        call public_6373210
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6372f10
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b258]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        call public_637e950
        mov eax, dword ptr ds : [public_658b10c]
        mov ecx, dword ptr ds : [public_658b200]
        add esp, 0x20
        cmp eax, ebp
        jne public_6372ce1
        cmp ecx, ebp
        jne public_6372cf0
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, ebp
        je public_6372d2a
        jmp public_6372cfb
        public_6372ce1 : nop
        cmp ecx, ebp
        jne public_6372cf0
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, ebp
        je public_6372d13
        jmp public_6372cfb
        public_6372cf0 : nop
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, ebp
        jne public_6372cfb
        mov eax, ecx
/*FIXUP public_6372cfb : nop
        push offset public_658b268 @0x6372cfb*/
  FIXUP public_6372cfb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x6372d00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
        push eax
/*FIXUP push offset public_63f0994 @0x6372d06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0994
        call public_6356960
        add esp, 0x10
/*FIXUP public_6372d13 : nop
        push offset public_658b468 @0x6372d13*/
  FIXUP public_6372d13 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
/*FIXUP push offset public_63f3260 @0x6372d18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3260
/*FIXUP push offset public_63f0970 @0x6372d1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0970
        call public_6356960
        add esp, 0xC
        public_6372d2a : nop
        push ebp
        call public_6374470
        mov ecx, dword ptr ds : [public_658b810]
        add esp, 4
        mov dword ptr ds : [public_658b818], ecx
        call public_6372880
        cmp dword ptr ds : [public_658b0e8], ebp
        je public_6372d7a
        mov edx, dword ptr ds : [public_658b040]
        mov eax, dword ptr ds : [public_658b044]
        mov ecx, dword ptr ds : [public_658b0b0]
        mov dword ptr ds : [public_658b698], edx
        mov edx, dword ptr ds : [public_658b0b4]
        mov dword ptr ds : [public_658b69c], eax
        mov dword ptr ds : [public_658b690], ecx
        mov dword ptr ds : [public_658b694], edx
        public_6372d7a : nop
        cmp dword ptr ds : [public_658b0d8], ebp
        je public_6372ec6
        cmp dword ptr ds : [public_658b06c], ebp
        jle public_6372dac
        cmp dword ptr ds : [public_658b0a8], ebp
        je public_6372dac
/*FIXUP push offset public_63f08e8 @0x6372d96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f08e8
        call public_6356960
        push ebp
        push ebp
        push 1
        call public_6378600
        add esp, 0x10
        public_6372dac : nop
        cmp dword ptr ds : [public_658b068], ebp
        jne public_6372dea
        cmp dword ptr ds : [public_658b060], ebp
        jne public_6372dea
        cmp dword ptr ds : [public_658b0a0], ebp
        jne public_6372dd4
        cmp dword ptr ds : [public_658b0e8], ebp
        jne public_6372dd4
        cmp dword ptr ds : [public_658b070], ebp
        jne public_6372dea
/*FIXUP public_6372dd4 : nop
        push offset public_63f085c @0x6372dd4*/
  FIXUP public_6372dd4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f085c
        call public_6356960
        push ebp
        push ebp
        push 1
        call public_6378600
        add esp, 0x10
        public_6372dea : nop
        cmp dword ptr ds : [public_658b06c], ebp
        jle public_6372eb7
        cmp dword ptr ds : [public_658b0a8], ebp
        jne public_6372eb7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b070]
        push eax
        push ecx
        call public_63735c0
        add esp, 8
        test eax, eax
        jne public_6372eb7
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [public_658b810]
        lea eax, ss:[esp+0x20]
        push eax
        mov eax, dword ptr ds : [public_658b070]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        push eax
        call public_6380640
        mov edx, dword ptr ds : [public_658bb68]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x30]
        add edx, ecx
        add esp, 0x14
        cmp eax, ebp
        mov dword ptr ds : [public_658bb68], edx
        jne public_6372e84
        mov edx, dword ptr ds : [public_658b070]
        push edx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f0800 @0x6372e6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0800
        call public_6356960
        push ebp
        push ebp
        push 1
        call public_6378600
        add esp, 0x14
        public_6372e84 : nop
        mov eax, dword ptr ds : [public_658b070]
        push ebp
        push esi
        push eax
        call public_637d790
        add esp, 0xC
        test eax, eax
        jne public_6372eb7
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0x18]
        push edx
        call public_636ecc0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6372eb7 : nop
        mov eax, dword ptr ds : [public_658b810]
        push ebp
        push eax
        call public_63723c0
        add esp, 8
        public_6372ec6 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0x18]
        push edx
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        cmp eax, 1
        jl public_6372efb
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f07c4 @0x6372eec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f07c4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6372efb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6372a30)
    }
}

#undef public_6372a80
#undef public_6372a88
#undef public_6372a95
#undef public_6372aa2
#undef public_6372aaa
#undef public_6372abc
#undef public_6372af0
#undef public_6372b1b
#undef public_6372b39
#undef public_6372ba6
#undef public_6372c10
#undef public_6372c12
#undef public_6372c23
#undef public_6372c33
#undef public_6372c5d
#undef public_6372c80
#undef public_6372c86
#undef public_6372ce1
#undef public_6372cf0
#undef public_6372cfb
#undef public_6372d13
#undef public_6372d2a
#undef public_6372d7a
#undef public_6372dac
#undef public_6372dd4
#undef public_6372dea
#undef public_6372e84
#undef public_6372eb7
#undef public_6372ec6
#undef public_6372efb
