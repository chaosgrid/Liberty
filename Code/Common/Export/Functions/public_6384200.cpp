#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6384200);
CLANG_FORWARD_PROC_SYMBOL(public_63844f0);
CLANG_FORWARD_PROC_SYMBOL(public_6384ce0);

#define public_6384256 _public_6384256
#define public_6384286 _public_6384286
#define public_6384290 _public_6384290
#define public_63842a8 _public_63842a8
#define public_63842d6 _public_63842d6
#define public_63842dc _public_63842dc
#define public_6384312 _public_6384312
#define public_638434d _public_638434d
#define public_63843b5 _public_63843b5
#define public_63843fc _public_63843fc
#define public_6384409 _public_6384409
#define public_6384418 _public_6384418
#define public_6384431 _public_6384431
#define public_638444f _public_638444f
#define public_6384467 _public_6384467
#define public_6384469 _public_6384469
#define public_638446c _public_638446c
#define public_638447d _public_638447d
#define public_638448f _public_638448f
#define public_63844cd _public_63844cd
#define public_63844e4 _public_63844e4

PROC_DECLARE(0x6384200, internal_6384200, public_6384200);
extern "C" NAKED register_t __cdecl internal_6384200()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [public_658b254]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_658b250]
        mov ebp, edi
        inc edi
        push edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_6377e60
        mov ecx, edi
        mov edx, ecx
        mov esi, eax
        shr ecx, 2
        xor eax, eax
        mov edi, esi
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [public_658b250]
        add esp, 4
        xor ecx, ecx
        test eax, eax
        jle public_6384290
        public_6384256 : nop
        mov eax, dword ptr ds : [public_658b684]
        fld qword ptr ds : [eax+ecx*8]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        je public_6384286
        mov edx, dword ptr ds : [public_658b680]
        fld qword ptr ds : [edx+ecx*8]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        je public_6384286
        mov byte ptr ds : [ecx+esi], 0xFF
        dec ebp
        public_6384286 : nop
        mov eax, dword ptr ds : [public_658b250]
        inc ecx
        cmp ecx, eax
        jl public_6384256
        public_6384290 : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_63842a8
        mov byte ptr ds : [ecx+esi], 1
        mov eax, dword ptr ds : [public_658b028]
        inc ebp
        test eax, eax
        je public_63842a8
        inc ebx
        public_63842a8 : nop
        mov eax, dword ptr ds : [public_658b24c]
        cmp ebp, eax
        je public_63842d6
        mov edi, dword ptr ds : [public_63991e8]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ebp
/*FIXUP push offset public_63f731c @0x63842be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f731c
        push eax
        call edi
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x1C
        jmp public_63842dc
        public_63842d6 : nop
        mov edi, dword ptr ds : [public_63991e8]
        public_63842dc : nop
        imul ebx, ebp
        shl ebx, 3
        push ebx
        call public_6343f70
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_6384312
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63f72e4 @0x63842fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f72e4
        push edx
        call edi
        push ebx
        push ebx
        push 4
        call public_6378600
        add esp, 0x18
        public_6384312 : nop
        mov eax, dword ptr ds : [public_658b250]
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b258]
        push ebp
        push ebx
        push eax
        push ecx
        push edx
        inc eax
        push eax
        push esi
        call public_63844f0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x1C
        cmp eax, 1
        jl public_638434d
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f72b0 @0x6384342*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f72b0
        push eax
        call edi
        add esp, 8
        public_638434d : nop
        mov ecx, dword ptr ds : [public_658b250]
        lea eax, ds:[ecx+1]
        mov ecx, dword ptr ds : [public_658b684]
        lea edi, ss:[ebp+1]
        push edi
        push ecx
        push eax
        push 1
        push ecx
        push eax
        push esi
        call public_63844f0
        mov ecx, dword ptr ds : [public_658b680]
        mov edx, dword ptr ds : [public_658b250]
        push edi
        push ecx
        lea eax, ds:[edx+1]
        push eax
        push 1
        push ecx
        push eax
        push esi
        call public_63844f0
        mov eax, dword ptr ds : [public_658b250]
        inc eax
        push eax
        push esi
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b25c]
        xor edi, edi
        add esp, 0x40
        cmp eax, edi
        je public_63843b5
        mov eax, dword ptr ds : [public_658b258]
        cmp eax, edi
        je public_63843b5
        push eax
        call public_6343fb0
        add esp, 4
        public_63843b5 : nop
        cmp dword ptr ds : [public_658b050], edi
        mov dword ptr ds : [public_658b258], ebx
        mov dword ptr ds : [public_658b25c], 1
        je public_63844e4
        cmp dword ptr ds : [public_658b028], edi
        je public_63844cd
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        imul edx, dword ptr ds : [public_658b254]
        dec eax
        mov ecx, ebx
        lea ebx, ds:[ebx+edx*8]
        mov edx, eax
        dec eax
        test edx, edx
        je public_6384409
        lea edx, ds:[ebx+eax*8]
        inc eax
        public_63843fc : nop
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        dec eax
        sub edx, 8
        cmp eax, edi
        ja public_63843fc
        public_6384409 : nop
        mov eax, dword ptr ds : [public_658b254]
        mov edx, eax
        dec eax
        test edx, edx
        je public_638446c
        lea esi, ds:[eax+1]
        public_6384418 : nop
        mov eax, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [public_63a58b0]
        lea edx, ds:[eax-1]
        mov eax, edx
        dec edx
        test eax, eax
        je public_638444f
        lea eax, ds:[ebx+edx*8]
        inc edx
        public_6384431 : nop
        fld qword ptr ds : [ecx]
        add ecx, 8
        fld st(0)
        dec edx
        fmul st, st(1)
        sub eax, 8
        cmp edx, edi
        faddp st(2), st
        fstp st(0)
        fld qword ptr ds : [eax+8]
        fadd qword ptr ds : [ecx-8]
        fstp qword ptr ds : [eax+8]
        ja public_6384431
        public_638444f : nop
        fst qword ptr ds : [ecx]
        add ecx, 8
        fld qword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6384467
        fstp qword ptr ss : [esp+0x10]
        jmp public_6384469
        public_6384467 : nop
        fstp st(0)
        public_6384469 : nop
        dec esi
        jne public_6384418
        public_638446c : nop
        mov edx, dword ptr ds : [public_658b24c]
        lea eax, ds:[edx-1]
        mov edx, eax
        dec eax
        test edx, edx
        je public_638448f
        inc eax
        public_638447d : nop
        fild dword ptr ds : [public_658b254]
        add ecx, 8
        dec eax
        fdivr qword ptr ds : [ecx-8]
        fstp qword ptr ds : [ecx-8]
        jne public_638447d
        public_638448f : nop
        fld qword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_63a5a40]
        fstp qword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_658b254]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, edi
        mov dword ptr ds : [public_658b254], ecx
        je public_63844e4
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f7270 @0x63844b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7270
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63844cd : nop
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b24c]
        push ebx
        push ecx
        push edx
        call public_6384ce0
        add esp, 0xC
        public_63844e4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6384200)
    }
}

#undef public_6384256
#undef public_6384286
#undef public_6384290
#undef public_63842a8
#undef public_63842d6
#undef public_63842dc
#undef public_6384312
#undef public_638434d
#undef public_63843b5
#undef public_63843fc
#undef public_6384409
#undef public_6384418
#undef public_6384431
#undef public_638444f
#undef public_6384467
#undef public_6384469
#undef public_638446c
#undef public_638447d
#undef public_638448f
#undef public_63844cd
#undef public_63844e4
