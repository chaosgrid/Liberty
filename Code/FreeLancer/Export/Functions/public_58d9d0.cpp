#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c481a);

#define public_58da04 _public_58da04
#define public_58da12 _public_58da12
#define public_58da21 _public_58da21
#define public_58da2f _public_58da2f
#define public_58dab0 _public_58dab0
#define public_58dadd _public_58dadd
#define public_58db61 _public_58db61
#define public_58db6a _public_58db6a
#define public_58db8f _public_58db8f
#define public_58db99 _public_58db99
#define public_58dba7 _public_58dba7
#define public_58dbd0 _public_58dbd0
#define public_58dbfd _public_58dbfd
#define public_58dc80 _public_58dc80
#define public_58dc89 _public_58dc89
#define public_58dcb9 _public_58dcb9
#define public_58dcc4 _public_58dcc4
#define public_58dcd3 _public_58dcd3
#define public_58dd00 _public_58dd00
#define public_58dd19 _public_58dd19
#define public_58dd20 _public_58dd20
#define public_58dd50 _public_58dd50
#define public_58dd7d _public_58dd7d
#define public_58de28 _public_58de28
#define public_58de56 _public_58de56
#define public_58dee8 _public_58dee8
#define public_58df11 _public_58df11
#define public_58df65 _public_58df65
#define public_58df8d _public_58df8d
#define public_58dfaa _public_58dfaa
#define public_58dfd4 _public_58dfd4
#define public_58dfe7 _public_58dfe7

PROC_DECLARE(0x58d9d0, internal_58d9d0, public_58d9d0);
extern "C" NAKED register_t __cdecl internal_58d9d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_5c481a @0x58d9d5*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c481a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE0
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x4B4]
        xor ebx, ebx
        cmp ecx, ebx
        jne public_58da04
        mov dword ptr ss : [ebp-0x14], ebx
        jmp public_58da12
        public_58da04 : nop
        mov eax, dword ptr ds : [edi+0x4B8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [ebp-0x14], eax
        public_58da12 : nop
        mov ecx, dword ptr ds : [edi+0x4A4]
        cmp ecx, ebx
        jne public_58da21
        mov dword ptr ss : [ebp-0x1C], ebx
        jmp public_58da2f
        public_58da21 : nop
        mov eax, dword ptr ds : [edi+0x4A8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [ebp-0x1C], eax
        public_58da2f : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        lea eax, ds:[eax*4+4]
        mov dword ptr ss : [ebp-0x28], eax
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[ecx*4+4]
        mov dword ptr ss : [ebp-0x6C], eax
        add eax, 3
        and eax, 0xFFFFFFFC
        mov dword ptr ss : [ebp-0x10], esp
        call public_5b7e90
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov esi, esp
        lea edx, ss:[ebp-0xBC]
        push edx
        push eax
        mov dword ptr ss : [ebp-0x50], esi
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x64]
        push edx
        lea edx, ss:[ebp-0x5C]
        push edx
        lea edx, ss:[ebp-0x68]
        push edx
        lea edx, ss:[ebp-0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [ebp-0x14]
        mov edx, eax
        test edx, edx
        mov dword ptr ss : [ebp-0x14], edx
        jle public_58dba7
        lea esp, ss:[esp]
        public_58dab0 : nop
        mov eax, dword ptr ds : [edi+0x4B4]
        fld dword ptr ds : [eax+ebx*4]
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        fstp dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x44], 0
        mov dword ptr ss : [ebp-0x40], 0
        jne public_58dadd
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58dadd : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp-0x48]
        push ecx
        lea ecx, ds:[edi+0x3C]
        push ecx
        lea ecx, ss:[ebp-0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp-0x30]
        fld dword ptr ss : [ebp-0x2C]
        fld dword ptr ss : [ebp-0x8C]
        fmul st, st(3)
        fld dword ptr ss : [ebp-0x84]
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [ebp-0x88]
        fmul st, st(3)
        faddp 
        fadd dword ptr ss : [ebp-0x80]
        fstp dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-0xB4]
        fmul st, st(1)
        fld dword ptr ss : [ebp-0xB8]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [ebp-0xBC]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [ebp-0xB0]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_58db6a
        test ebx, ebx
        fstp st(0)
        jle public_58db61
        mov edx, dword ptr ds : [esi+ebx*4-4]
        mov dword ptr ds : [esi+ebx*4], edx
        jmp public_58db99
        public_58db61 : nop
        mov dword ptr ds : [esi+ebx*4], 0
        jmp public_58db99
        public_58db6a : nop
        test ebx, ebx
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [ebp-0x18]
        fmulp 
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fimul dword ptr ss : [ebp-0x5C]
        fmul dword ptr ds : [public_5c75e0]
        fiadd dword ptr ss : [ebp-0x58]
        jle public_58db8f
        fisub dword ptr ds : [esi]
        public_58db8f : nop
        call public_5b7ec0
        fstp st(0)
        mov dword ptr ds : [esi+ebx*4], eax
        public_58db99 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        inc ebx
        cmp ebx, eax
        jl public_58dab0
        mov edx, eax
        public_58dba7 : nop
        mov eax, dword ptr ds : [edi+0x358]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+esi-4], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ss : [ebp-0x20], eax
        jle public_58dcd3
        lea ebx, ds:[ebx]
        public_58dbd0 : nop
        mov eax, dword ptr ds : [edi+0x4A4]
        fld dword ptr ds : [eax+ebx*4]
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        fstp dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x34], 0
        mov dword ptr ss : [ebp-0x2C], 0
        jne public_58dbfd
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58dbfd : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea ecx, ds:[edi+0x3C]
        push ecx
        lea ecx, ss:[ebp-0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [ebp-0x48]
        fld dword ptr ss : [ebp-0x44]
        fld dword ptr ss : [ebp-0x40]
        fld dword ptr ss : [ebp-0x8C]
        fmul st, st(3)
        fld dword ptr ss : [ebp-0x88]
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul dword ptr ss : [ebp-0x84]
        faddp 
        fadd dword ptr ss : [ebp-0x80]
        fstp dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-0xAC]
        fmulp st(3), st
        fld dword ptr ss : [ebp-0xA8]
        fmul st, st(2)
        faddp st(3), st
        fmul dword ptr ss : [ebp-0xA4]
        faddp st(2), st
        fxch 
        fadd dword ptr ss : [ebp-0xA0]
        fstp st(1)
        fld dword ptr ss : [ebp-0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_58dc89
        test ebx, ebx
        fstp st(0)
        mov eax, dword ptr ss : [ebp-0x10]
        jle public_58dc80
        mov edx, dword ptr ds : [eax+ebx*4-4]
        mov dword ptr ds : [eax+ebx*4], edx
        jmp public_58dcc4
        public_58dc80 : nop
        mov dword ptr ds : [eax+ebx*4], 0
        jmp public_58dcc4
        public_58dc89 : nop
        test ebx, ebx
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [ebp-0x18]
        fmulp 
        fadd dword ptr ds : [public_5c75dc]
        fimul dword ptr ss : [ebp-0x64]
        fmul dword ptr ds : [public_5c75e0]
        fiadd dword ptr ss : [ebp-0x68]
        jle public_58dcb9
        mov esi, dword ptr ss : [ebp-0x10]
        fisub dword ptr ds : [esi]
        call public_5b7ec0
        mov dword ptr ds : [esi+ebx*4], eax
        jmp public_58dcc4
        public_58dcb9 : nop
        call public_5b7ec0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+ebx*4], eax
        public_58dcc4 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        inc ebx
        cmp ebx, eax
        jl public_58dbd0
        mov edx, dword ptr ss : [ebp-0x14]
        public_58dcd3 : nop
        mov ecx, dword ptr ds : [edi+0x35C]
        mov esi, dword ptr ss : [ebp-0x28]
        mov ebx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [esi+ebx-4], ecx
        xor esi, esi
        test eax, eax
        mov dword ptr ds : [ebx], 0
        jle public_58dfe7
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x28], eax
        lea esp, ss:[esp]
        public_58dd00 : nop
        xor ecx, ecx
        test edx, edx
        mov dword ptr ss : [ebp-0x10], ecx
        jle public_58dfd4
        mov eax, esi
        imul eax, 0x1C
        add esi, edx
        mov dword ptr ss : [ebp-0x70], esi
        jmp public_58dd20
        public_58dd19 : nop
        mov eax, dword ptr ss : [ebp-0x7C]
        mov ecx, dword ptr ss : [ebp-0x10]
        nop 
        public_58dd20 : nop
        mov edx, eax
        add eax, 0x1C
        mov dword ptr ss : [ebp-0x7C], eax
        mov eax, dword ptr ds : [edi+0x494]
        lea esi, ds:[edx+eax]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x20], esi
        add esi, 0xC
        cmp edx, eax
        mov dword ptr ss : [ebp-0x54], eax
        mov dword ptr ss : [ebp-0x60], edx
        mov dword ptr ss : [ebp-0x24], edx
        je public_58dd7d
        lea esp, ss:[esp]
        public_58dd50 : nop
        push 0
        lea edx, ss:[ebp-0xC0]
        push edx
        lea ecx, ss:[ebp-0x24]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[ebp-0xC4]
        push ecx
        mov ecx, esi
        call public_46d680
        mov edx, dword ptr ss : [ebp-0x54]
        cmp dword ptr ss : [ebp-0x24], edx
        jne public_58dd50
        mov ecx, dword ptr ss : [ebp-0x10]
        public_58dd7d : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov dl, byte ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edi+0x574]
        test dl, dl
        mov edx, dword ptr ds : [ebx]
        je public_58de56
        add edx, eax
        mov dword ptr ss : [ebp-0x34], edx
        mov edx, dword ptr ds : [ebx+4]
        sub edx, eax
        mov eax, dword ptr ds : [edi+0x570]
        mov dword ptr ss : [ebp-0x2C], edx
        mov edx, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [edx+ecx*4]
        add ecx, eax
        mov dword ptr ss : [ebp-0x38], ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+edx-4]
        sub edx, eax
        lea eax, ss:[ebp-0x38]
        push eax
        lea ecx, ss:[ebp-0xEC]
        mov dword ptr ss : [ebp-0x30], edx
        call dword ptr ds : [public_5c6c64]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+4]
        push eax
        push ebx
        mov ecx, esi
        mov byte ptr ss : [ebp-4], 1
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x1C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0
        je public_58de28
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x1C], 0
        public_58de28 : nop
        lea ecx, ss:[ebp-0xEC]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c6c60]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ss : [ebp-0x30]
        xor eax, eax
        mov al, byte ptr ds : [edi+0x54C]
        push 1
        push 0
        push eax
        mov eax, dword ptr ss : [ebp-0x38]
        jmp public_58df11
        public_58de56 : nop
        add edx, eax
        mov dword ptr ss : [ebp-0x48], edx
        mov edx, dword ptr ds : [ebx+4]
        sub edx, eax
        mov eax, dword ptr ds : [edi+0x570]
        mov dword ptr ss : [ebp-0x40], edx
        mov edx, dword ptr ss : [ebp-0x50]
        mov ebx, dword ptr ds : [edx+ecx*4]
        mov ecx, dword ptr ds : [edx+ecx*4+4]
        sub ecx, eax
        lea edx, ss:[ebp-0x4C]
        add ebx, eax
        mov dword ptr ss : [ebp-0x44], ecx
        push edx
        lea ecx, ss:[ebp-0xD8]
        mov dword ptr ss : [ebp-0x4C], ebx
        call dword ptr ds : [public_5c6c64]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+4]
        push eax
        push ebx
        mov ecx, esi
        mov byte ptr ss : [ebp-4], 3
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x3C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x3C]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 2
        je public_58dee8
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x3C], 0
        public_58dee8 : nop
        lea ecx, ss:[ebp-0xD8]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c6c60]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp-0x44]
        xor eax, eax
        mov al, byte ptr ds : [edi+0x54C]
        push 1
        push 0
        push eax
        mov eax, dword ptr ss : [ebp-0x4C]
        public_58df11 : nop
        push ecx
        push eax
        sub edx, eax
        mov eax, dword ptr ss : [ebp-0x20]
        push esi
        push edx
        push eax
        lea eax, ds:[edi+0x384]
        push eax
        call dword ptr ds : [public_5c6c38]
        mov eax, dword ptr ds : [public_5c62cc]
        add esp, 0x24
        mov dword ptr ss : [ebp-0x74], esi
        mov dword ptr ss : [ebp-0x78], eax
        lea ecx, ss:[ebp-0x78]
        mov dword ptr ss : [ebp-4], 4
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0x24], eax
        mov esi, dword ptr ds : [edi+0x378]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [ebp-4], 5
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_58df65
        mov ebx, eax
        public_58df65 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp-0x54], esi
        mov dword ptr ss : [ebp-0x60], esi
        test esi, esi
        mov ebx, dword ptr ss : [ebp-0x24]
        mov byte ptr ss : [ebp-4], 6
        je public_58df8d
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi], eax
        public_58df8d : nop
        mov ecx, dword ptr ds : [edi+0x37C]
        inc ecx
        test ebx, ebx
        mov dword ptr ds : [edi+0x37C], ecx
        mov byte ptr ss : [ebp-4], 4
        je public_58dfaa
        mov eax, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [eax]
        public_58dfaa : nop
        lea ecx, ss:[ebp-0x78]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov ebx, dword ptr ss : [ebp-0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x10], eax
        jl public_58dd19
        mov esi, dword ptr ss : [ebp-0x70]
        mov edx, ecx
        public_58dfd4 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        add ebx, 4
        dec eax
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x28], eax
        jne public_58dd00
        public_58dfe7 : nop
        mov al, 1
        lea esp, ss:[ebp-0xF8]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x58d9d0)
    }
}

#undef public_58da04
#undef public_58da12
#undef public_58da21
#undef public_58da2f
#undef public_58dab0
#undef public_58dadd
#undef public_58db61
#undef public_58db6a
#undef public_58db8f
#undef public_58db99
#undef public_58dba7
#undef public_58dbd0
#undef public_58dbfd
#undef public_58dc80
#undef public_58dc89
#undef public_58dcb9
#undef public_58dcc4
#undef public_58dcd3
#undef public_58dd00
#undef public_58dd19
#undef public_58dd20
#undef public_58dd50
#undef public_58dd7d
#undef public_58de28
#undef public_58de56
#undef public_58dee8
#undef public_58df11
#undef public_58df65
#undef public_58df8d
#undef public_58dfaa
#undef public_58dfd4
#undef public_58dfe7
