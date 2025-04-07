#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274b40);
CLANG_FORWARD_PROC_SYMBOL(public_62783e0);
CLANG_FORWARD_PROC_SYMBOL(public_6278640);
CLANG_FORWARD_PROC_SYMBOL(public_62788b0);
CLANG_FORWARD_PROC_SYMBOL(public_6278b30);
CLANG_FORWARD_PROC_SYMBOL(public_6278e20);
CLANG_FORWARD_PROC_SYMBOL(public_627a710);
CLANG_FORWARD_PROC_SYMBOL(public_627b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_627b8f0);
CLANG_FORWARD_PROC_SYMBOL(public_627ba10);
CLANG_FORWARD_PROC_SYMBOL(public_627bc60);
CLANG_FORWARD_PROC_SYMBOL(public_627bd60);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_631c750);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6274b86 _public_6274b86
#define public_6274c52 _public_6274c52
#define public_6274c73 _public_6274c73
#define public_6274ca8 _public_6274ca8
#define public_6274cc4 _public_6274cc4
#define public_6274ce7 _public_6274ce7
#define public_6274d23 _public_6274d23
#define public_6274d44 _public_6274d44
#define public_6274dd3 _public_6274dd3
#define public_6274e7b _public_6274e7b
#define public_6274edc _public_6274edc
#define public_6274f76 _public_6274f76
#define public_6274f9d _public_6274f9d
#define public_6274fc9 _public_6274fc9
#define public_627500a _public_627500a
#define public_62750a4 _public_62750a4
#define public_62750cb _public_62750cb
#define public_62750f7 _public_62750f7
#define public_6275161 _public_6275161
#define public_62751a5 _public_62751a5
#define public_62751f8 _public_62751f8
#define public_6275211 _public_6275211
#define public_6275220 _public_6275220
#define public_6275232 _public_6275232
#define public_627523d _public_627523d
#define public_6275291 _public_6275291
#define public_6275294 _public_6275294

PROC_DECLARE(0x6274b40, internal_6274b40, public_6274b40);
extern "C" NAKED register_t __cdecl internal_6274b40()
{
    __asm
    {
        sub esp, 0x168
        mov eax, dword ptr ss : [esp+0x16C]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_627b8f0
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6275294
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x18], 0
        jle public_6275211
        public_6274b86 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        mov ebp, eax
        lea edx, ss:[ebp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x7C], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x80], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x84], edx
        lea esi, ss:[ebp+0x14]
        mov ecx, 9
        lea edi, ss:[esp+0x88]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov eax, dword ptr ss : [ebp+0x38]
        mov dl, byte ptr ss : [ebp+0x40]
        mov edi, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [esp+0x17C]
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ss : [ebp+0x41]
        push ecx
        push ebp
        mov byte ptr ss : [esp+0x29], dl
        mov byte ptr ss : [esp+0x2B], al
        call public_627bd60
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, esi
        shr eax, 2
        and al, 1
/*FIXUP push offset public_6399eec @0x6274c04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399eec
        mov byte ptr ss : [esp+0x2E], al
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, esi
        push edx
        shr ebx, 1
        push eax
        and bl, 1
        call public_627bc60
        add esp, 0x14
        cmp edi, 1
        mov esi, eax
        jne public_6274dd3
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_639a294 @0x6274c35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a294
        push ebp
        push ecx
        mov byte ptr ss : [esp+0x1E], 1
        call public_627bc60
        add esp, 0xC
        test eax, eax
        je public_6274c52
        mov byte ptr ss : [esp+0x12], 0
        public_6274c52 : nop
        mov edx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_639a288 @0x6274c56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a288
        push ebp
        push edx
        mov byte ptr ss : [esp+0x1D], 0
        call public_627bc60
        add esp, 0xC
        test eax, eax
        je public_6274c73
        mov byte ptr ss : [esp+0x11], 1
        public_6274c73 : nop
        test esi, esi
        jne public_6274ca8
        mov ecx, dword ptr ss : [esp+0x17C]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push 0x293
/*FIXUP push offset public_639a188 @0x6274c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a208 @0x6274c93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a208
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_62751f8
        public_6274ca8 : nop
        push esi
        call public_631c750
        mov cl, byte ptr ss : [esp+0x15]
        mov edi, eax
        add esp, 4
        test edi, edi
        mov byte ptr ss : [esp+0x11], cl
        jne public_6274cc4
        mov byte ptr ss : [esp+0x11], 1
        public_6274cc4 : nop
        mov edx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_639a200 @0x6274cc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a200
        push ebp
        push edx
        call public_627bc60
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x5C], eax
        jne public_6274ce7
        mov dword ptr ss : [esp+0x5C], offset public_63997b0
        public_6274ce7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_639a1f4 @0x6274ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a1f4
        push ebp
        push eax
        mov dword ptr ss : [esp+0x64], 0
        call public_627bc60
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_6274d23
        mov ecx, dword ptr ss : [esp+0x17C]
        push ecx
        push esi
        call public_627a710
        push esi
        call public_630d3f0
        add esp, 0xC
        mov dword ptr ss : [esp+0x58], eax
        public_6274d23 : nop
        mov edx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_639a1e4 @0x6274d27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a1e4
        push ebp
        push edx
        mov byte ptr ss : [esp+0x1F], 0
        call public_627bc60
        add esp, 0xC
        test eax, eax
        je public_6274d44
        mov byte ptr ss : [esp+0x13], 1
        public_6274d44 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+0x154]
        call public_62788b0
        mov ecx, dword ptr ss : [esp+0x68]
        mov ebp, eax
        push ecx
        push ebp
        call public_6334400
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        lea eax, ss:[ebp+4]
        push eax
        call public_6334400
        mov dl, byte ptr ss : [esp+0x22]
        mov al, byte ptr ss : [esp+0x21]
        mov dword ptr ss : [ebp+8], edi
        lea edi, ss:[ebp+0xC]
        mov ecx, 0xC
        lea esi, ss:[esp+0x8C]
        rep movsd
        mov cl, byte ptr ss : [esp+0x32]
        mov byte ptr ss : [ebp+0x3D], cl
        mov cl, byte ptr ss : [esp+0x31]
        mov byte ptr ss : [ebp+0x3E], dl
        mov dl, byte ptr ss : [esp+0x33]
        mov byte ptr ss : [ebp+0x40], cl
        mov ecx, dword ptr ss : [esp+0x6C]
        mov byte ptr ss : [ebp+0x41], dl
        mov byte ptr ss : [ebp+0x3F], al
        mov eax, dword ptr ss : [esp+0x74]
        push ecx
        lea edx, ss:[ebp+0x48]
        push edx
        mov byte ptr ss : [ebp+0x3C], bl
        mov dword ptr ss : [ebp+0x44], eax
        call public_6334400
        mov eax, dword ptr ss : [esp+0x70]
        mov cl, byte ptr ss : [esp+0x2B]
        add esp, 0x18
        mov dword ptr ss : [ebp+0x4C], eax
        mov byte ptr ss : [ebp+0x50], cl
        jmp public_62751f8
        public_6274dd3 : nop
        mov ebx, 3
        cmp edi, ebx
        jne public_6274e7b
        add ebp, 0x44
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x74], ecx
        lea ecx, ss:[ebp+0x134]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x78], edx
        call public_62783e0
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push ebx
        call public_6334400
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x7C]
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x84]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ebx+0x34], ecx
        add esp, 8
        lea ecx, ss:[ebp+0x164]
        mov dword ptr ds : [ebx+0x38], edx
        mov dword ptr ds : [ebx+0x3C], eax
        call public_6278b30
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        push ebx
        call public_6334400
        add esp, 8
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x7C]
        rep movsd
        push ebp
        lea ecx, ds:[ebx+0x34]
        call public_627b2b0
        jmp public_62751f8
        public_6274e7b : nop
        cmp edi, 5
        jne public_6275161
        lea esi, ss:[ebp+0x44]
        mov ecx, 0x24
        lea edi, ss:[esp+0xAC]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x38]
        mov esi, dword ptr ds : [public_639902c]
/*FIXUP push offset public_639a1d4 @0x6274e9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a1d4
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6274fc9
        cmp dword ptr ss : [esp+0xD4], ebx
        mov esi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0xE4], 1
        jne public_6274f76
        mov eax, dword ptr ds : [public_63fbbc0]
        test eax, eax
        jne public_6274edc
        call public_6391cf0
        mov dword ptr ds : [public_63fbbc0], eax
        public_6274edc : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        faddp 
        mov dword ptr ss : [esp+0x3C], ecx
        fld dword ptr ss : [esp+0x30]
        lea edx, ds:[esi+0xF4]
        fmul dword ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0xE5], 1
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx], eax
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+8], eax
        fstp st(0)
        jmp public_6274f9d
        public_6274f76 : nop
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x80]
        lea ecx, ds:[esi+0xE8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ecx+4], eax
        mov byte ptr ds : [esi+0xE5], 0
        mov dword ptr ds : [ecx+8], edx
        public_6274f9d : nop
        mov eax, dword ptr ss : [esp+0xD8]
        mov ecx, dword ptr ss : [esp+0xDC]
        mov edx, dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [esi+0x100], eax
        mov dword ptr ds : [esi+0x104], ecx
        mov dword ptr ds : [esi+0x108], edx
        jmp public_62751f8
        public_6274fc9 : nop
        mov eax, dword ptr ss : [ebp+0x38]
/*FIXUP push offset public_639a1c0 @0x6274fcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a1c0
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_62750f7
        cmp dword ptr ss : [esp+0xD4], ebx
        mov esi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x10C], 1
        jne public_62750a4
        mov eax, dword ptr ds : [public_63fbbc0]
        test eax, eax
        jne public_627500a
        call public_6391cf0
        mov dword ptr ds : [public_63fbbc0], eax
        public_627500a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xB8]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], ecx
        faddp 
        mov dword ptr ss : [esp+0x48], edx
        fld dword ptr ss : [esp+0x4C]
        lea eax, ds:[esi+0x11C]
        fmul dword ptr ss : [esp+0x4C]
        mov byte ptr ds : [esi+0x10D], 1
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+8], ecx
        fstp st(0)
        jmp public_62750cb
        public_62750a4 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x80]
        lea edx, ds:[esi+0x110]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [edx+4], ecx
        mov byte ptr ds : [esi+0x10D], 0
        mov dword ptr ds : [edx+8], eax
        public_62750cb : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [esi+0x128], ecx
        mov dword ptr ds : [esi+0x12C], edx
        mov dword ptr ds : [esi+0x130], eax
        jmp public_62751f8
        public_62750f7 : nop
        mov eax, dword ptr ss : [esp+0xCC]
        test eax, eax
        je public_62751f8
        mov ecx, dword ptr ss : [esp+0x14]
        mov bl, byte ptr ss : [ebp+0x40]
        add ecx, 0x144
        call public_6278640
        mov ecx, 0xC
        lea esi, ss:[esp+0x7C]
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0xB8]
        lea edx, ds:[eax+0x30]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0xBC]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0xC0]
        mov dword ptr ds : [edx+8], ecx
        lea edi, ds:[eax+0x3C]
        mov ecx, 0x1A
        lea esi, ss:[esp+0xD4]
        rep movsd
        mov byte ptr ds : [eax+0xA4], bl
        jmp public_62751f8
        public_6275161 : nop
        cmp edi, 7
        jne public_62751a5
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+0x164]
        call public_6278b30
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push ebx
        call public_6334400
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x84]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        push ecx
        lea ecx, ds:[ebx+0x34]
        call public_627b2b0
        jmp public_62751f8
        public_62751a5 : nop
        cmp edi, 9
        jne public_62751f8
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ss:[ebp+0x44]
        mov ecx, 0xF
        lea edi, ss:[esp+0x13C]
        rep movsd
        fild dword ptr ss : [esp+0x13C]
        fmul qword ptr ds : [public_639a1b8]
        fstp dword ptr ds : [eax+0xD8]
        fild dword ptr ss : [esp+0x140]
        fmul qword ptr ds : [public_639a1b8]
        fstp dword ptr ds : [eax+0xDC]
        fild dword ptr ss : [esp+0x144]
        fmul qword ptr ds : [public_639a1b8]
        fstp dword ptr ds : [eax+0xE0]
        public_62751f8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x60]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_6274b86
        mov esi, dword ptr ss : [esp+0x14]
        public_6275211 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        call public_627ba10
        add esp, 4
        xor edx, edx
        public_6275220 : nop
        mov ecx, dword ptr ds : [esi+0x168]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6275232
        xor eax, eax
        jmp public_627523d
        public_6275232 : nop
        mov eax, dword ptr ds : [esi+0x16C]
        sub eax, ecx
        sar eax, 2
        public_627523d : nop
        cmp edx, eax
        jge public_6275294
        mov eax, dword ptr ds : [esi+0x168]
        mov ebx, dword ptr ds : [eax+edx*4]
        mov al, byte ptr ds : [ebx+0x34]
        test al, al
        je public_6275291
        lea ecx, ds:[esi+0x174]
        call public_6278e20
        mov ecx, dword ptr ds : [ebx]
        mov ebp, eax
        push ecx
        push ebp
        call public_6334400
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0x34], edx
        mov eax, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x38], eax
        mov cl, byte ptr ds : [ebx+0x35]
        add esp, 8
        mov byte ptr ss : [ebp+0x3C], cl
        public_6275291 : nop
        inc edx
        jmp public_6275220
        public_6275294 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x168
        ret 4
        UNREACHABLE_TRAP(0x6274b40)
    }
}

#undef public_6274b86
#undef public_6274c52
#undef public_6274c73
#undef public_6274ca8
#undef public_6274cc4
#undef public_6274ce7
#undef public_6274d23
#undef public_6274d44
#undef public_6274dd3
#undef public_6274e7b
#undef public_6274edc
#undef public_6274f76
#undef public_6274f9d
#undef public_6274fc9
#undef public_627500a
#undef public_62750a4
#undef public_62750cb
#undef public_62750f7
#undef public_6275161
#undef public_62751a5
#undef public_62751f8
#undef public_6275211
#undef public_6275220
#undef public_6275232
#undef public_627523d
#undef public_6275291
#undef public_6275294
