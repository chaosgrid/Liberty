#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_491f90);
CLANG_FORWARD_PROC_SYMBOL(public_496e50);
CLANG_FORWARD_PROC_SYMBOL(public_4975a0);
CLANG_FORWARD_PROC_SYMBOL(public_49a580);
CLANG_FORWARD_PROC_SYMBOL(public_49f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a0580);
CLANG_FORWARD_PROC_SYMBOL(public_4a0800);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c58e0);

#define public_496e77 _public_496e77
#define public_496f52 _public_496f52
#define public_496f8a _public_496f8a
#define public_496fea _public_496fea
#define public_49700a _public_49700a
#define public_497010 _public_497010
#define public_497020 _public_497020
#define public_497033 _public_497033
#define public_49703d _public_49703d
#define public_497043 _public_497043
#define public_497070 _public_497070
#define public_497143 _public_497143
#define public_497167 _public_497167
#define public_497177 _public_497177
#define public_497180 _public_497180
#define public_4971af _public_4971af
#define public_497219 _public_497219
#define public_497239 _public_497239
#define public_49723f _public_49723f
#define public_497245 _public_497245
#define public_497255 _public_497255
#define public_497268 _public_497268
#define public_497272 _public_497272
#define public_497278 _public_497278
#define public_497287 _public_497287
#define public_497299 _public_497299
#define public_4972b5 _public_4972b5
#define public_4972cf _public_4972cf
#define public_4972d6 _public_4972d6
#define public_4972ed _public_4972ed
#define public_49731c _public_49731c
#define public_497353 _public_497353

PROC_DECLARE(0x496e50, internal_496e50, public_496e50);
extern "C" NAKED register_t __cdecl internal_496e50()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x12], 0
        call public_4c4690
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_497020
        lea esi, ds:[edi+0x4B8]
        public_496e77 : nop
        cmp dword ptr ds : [esi], 0
        jne public_496f52
        fld dword ptr ds : [edi+0x7E8]
        push 0
        push 0
        fadd st(0), st
        push 0
        push 0
        push 0x219B
/*FIXUP push offset public_5d3e70 @0x496e95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3e70
        sub esp, 0x10
        fstp dword ptr ss : [esp+0xC]
        mov eax, esp
        mov dword ptr ss : [esp+0x58], 0
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x5C], 0
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x60], 0
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax+4], edx
        push 0
        mov dword ptr ds : [eax+8], ecx
        push 3
        mov ecx, edi
        call public_491f90
        mov dword ptr ds : [esi], eax
        lea ecx, ds:[ebx+1]
        mov dword ptr ds : [eax+0x54], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x58], ecx
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax+0x48], 1
        movzx ecx, byte ptr ds : [public_679b80]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ecx
        add eax, 8
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x14]
        movzx edx, byte ptr ds : [public_679b81]
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x18]
        movzx ecx, byte ptr ds : [public_679b82]
        mov dword ptr ss : [esp+0x1C], ecx
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x1C]
        movzx edx, byte ptr ds : [public_679b83]
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x24]
        public_496f52 : nop
        push ebx
        call public_4c46a0
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_49700a
        mov ecx, dword ptr ds : [edi+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp dword ptr ss : [ebp+0xC], eax
        jne public_49700a
        test ebx, ebx
        mov edx, dword ptr ss : [ebp+0x14]
        jle public_496f8a
        mov ecx, dword ptr ss : [esp+0x14]
        dec ecx
        cmp ebx, ecx
        jge public_496f8a
        xor edx, edx
        public_496f8a : nop
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x58], eax
        fld dword ptr ds : [edi+0xF48]
        fld st(0)
        fmul dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+0x24]
        fld st(0)
        fmul dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [ebp+8]
        mov ebp, dword ptr ds : [esi]
        lea ecx, ss:[ebp+0x30]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x44
        jp public_496fea
        fld dword ptr ss : [ebp+0x34]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x44
        jp public_496fea
        fld dword ptr ss : [ebp+0x38]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x44
        jp public_496fea
        cmp dword ptr ss : [ebp+0x54], edx
        je public_497010
        public_496fea : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x54], edx
        mov byte ptr ss : [esp+0x12], 1
        jmp public_497010
        public_49700a : nop
        mov edx, dword ptr ds : [esi]
        mov byte ptr ds : [edx+0x48], 0
        public_497010 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebx
        add esi, 4
        cmp ebx, eax
        jl public_496e77
        public_497020 : nop
        cmp eax, 0x63
        jge public_497043
        mov ecx, 0x63
        lea edx, ds:[edi+eax*4+0x4B8]
        sub ecx, eax
        public_497033 : nop
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_49703d
        mov byte ptr ds : [eax+0x48], 0
        public_49703d : nop
        add edx, 4
        dec ecx
        jne public_497033
        public_497043 : nop
        mov byte ptr ss : [esp+0x13], 0
        call public_4c4fb0
        mov ecx, eax
        xor ebp, ebp
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 1
        jle public_497255
        lea esi, ds:[edi+0x644]
        nop 
        lea esp, ss:[esp]
        public_497070 : nop
        cmp dword ptr ds : [esi], 0
        jne public_497143
        fld dword ptr ds : [edi+0x7E8]
        push 0
        push 0
        fadd st(0), st
        push 0
        push 0
        push 0x219B
/*FIXUP push offset public_5d3e70 @0x49708e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3e70
        sub esp, 0x10
        fstp dword ptr ss : [esp+0xC]
        mov eax, esp
        mov dword ptr ss : [esp+0x58], 0
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x5C], 0
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x60], 0
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax+4], edx
        push 0
        mov dword ptr ds : [eax+8], ecx
        push 4
        mov ecx, edi
        call public_491f90
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [eax+0x48], 0
        movzx edx, byte ptr ds : [public_679b80]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x20], edx
        add eax, 8
        mov byte ptr ss : [esp+0x13], 1
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x14]
        movzx ecx, byte ptr ds : [public_679b81]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x18]
        movzx edx, byte ptr ds : [public_679b82]
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x1C]
        movzx ecx, byte ptr ds : [public_679b83]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax+0x24]
        public_497143 : nop
        push ebp
        call public_4c4ff0
        mov edx, dword ptr ds : [eax+0x18]
        and edx, 0xF
        add esp, 4
        cmp edx, 0xA
        jne public_497167
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x54], ecx
        inc ecx
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_497180
        public_497167 : nop
        cmp edx, 9
        jne public_497177
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x54], 0
        jmp public_497180
        public_497177 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x54], 0xFFFFFFFF
        public_497180 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, eax
        call public_4c52d0
        test al, al
        jne public_4971af
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push ebp
        mov ecx, edi
        call public_4a0800
        test al, al
        je public_49723f
        public_4971af : nop
        mov ecx, dword ptr ds : [edi+0x7E0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        jne public_497239
        mov byte ptr ds : [eax+0x48], 1
        fld dword ptr ds : [edi+0xF48]
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi]
        fmul st, st(1)
        lea ecx, ds:[edx+0x30]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x44
        jp public_497219
        fld dword ptr ds : [edx+0x34]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x44
        jp public_497219
        fld dword ptr ds : [edx+0x38]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x44
        jnp public_497245
        public_497219 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov byte ptr ss : [esp+0x12], 1
        mov byte ptr ss : [esp+0x13], 1
        jmp public_497245
        public_497239 : nop
        mov byte ptr ds : [eax+0x48], 0
        jmp public_497245
        public_49723f : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx+0x48], 0
        public_497245 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebp
        add esi, 4
        cmp ebp, ecx
        jl public_497070
        public_497255 : nop
        cmp ecx, 0x63
        jge public_497278
        mov eax, 0x63
        lea edx, ds:[edi+ecx*4+0x644]
        sub eax, ecx
        public_497268 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_497272
        mov byte ptr ds : [ecx+0x48], 0
        public_497272 : nop
        add edx, 4
        dec eax
        jne public_497268
        public_497278 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_497287
        mov ecx, edi
        call public_4a0580
        public_497287 : nop
        call public_4c4690
        test eax, eax
        je public_497299
        call public_4c58e0
        test al, al
        jne public_4972d6
        public_497299 : nop
        call public_4c4690
        test eax, eax
        je public_4972b5
        mov al, byte ptr ds : [edi+0xBCC]
        test al, al
        je public_4972b5
        mov byte ptr ds : [edi+0xBCC], 0
        jmp public_4972cf
        public_4972b5 : nop
        call public_4c58e0
        test al, al
        je public_4972d6
        mov al, byte ptr ds : [edi+0xBCC]
        test al, al
        jne public_4972d6
        mov byte ptr ds : [edi+0xBCC], 1
        public_4972cf : nop
        mov ecx, edi
        call public_49f7a0
        public_4972d6 : nop
        mov al, byte ptr ds : [public_6720c9]
        test al, al
        je public_4972ed
        mov ecx, edi
        call public_49f7a0
        mov ecx, edi
        call public_49a580
        public_4972ed : nop
        call public_4c4690
        cmp dword ptr ds : [edi+0xC7C], eax
        je public_497353
        call public_4c4690
        mov dword ptr ds : [edi+0xC7C], eax
        call public_4c4690
        mov cl, byte ptr ds : [edi+0xBCC]
        neg eax
        sbb al, al
        inc al
        test cl, cl
        je public_49731c
        mov al, 1
        public_49731c : nop
        mov ecx, dword ptr ds : [edi+0x8FC]
        mov edx, dword ptr ds : [ecx]
        movzx esi, al
        push 0
        push esi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x900]
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, edi
        call public_49f7a0
        mov ecx, edi
        call public_4975a0
        public_497353 : nop
        mov al, byte ptr ss : [esp+0x12]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x496e50)
    }
}

#undef public_496e77
#undef public_496f52
#undef public_496f8a
#undef public_496fea
#undef public_49700a
#undef public_497010
#undef public_497020
#undef public_497033
#undef public_49703d
#undef public_497043
#undef public_497070
#undef public_497143
#undef public_497167
#undef public_497177
#undef public_497180
#undef public_4971af
#undef public_497219
#undef public_497239
#undef public_49723f
#undef public_497245
#undef public_497255
#undef public_497268
#undef public_497272
#undef public_497278
#undef public_497287
#undef public_497299
#undef public_4972b5
#undef public_4972cf
#undef public_4972d6
#undef public_4972ed
#undef public_49731c
#undef public_497353
