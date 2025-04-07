#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f70580);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f746e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);

#define public_6f705b7 _public_6f705b7
#define public_6f70600 _public_6f70600
#define public_6f70680 _public_6f70680
#define public_6f706d0 _public_6f706d0
#define public_6f706e2 _public_6f706e2
#define public_6f706ec _public_6f706ec
#define public_6f7071e _public_6f7071e
#define public_6f70720 _public_6f70720
#define public_6f7072d _public_6f7072d
#define public_6f70746 _public_6f70746
#define public_6f70755 _public_6f70755
#define public_6f707ac _public_6f707ac
#define public_6f707bf _public_6f707bf
#define public_6f707d8 _public_6f707d8
#define public_6f707df _public_6f707df
#define public_6f707e3 _public_6f707e3
#define public_6f707fe _public_6f707fe
#define public_6f70810 _public_6f70810
#define public_6f70830 _public_6f70830
#define public_6f70850 _public_6f70850
#define public_6f70873 _public_6f70873
#define public_6f70882 _public_6f70882
#define public_6f70898 _public_6f70898
#define public_6f708b5 _public_6f708b5
#define public_6f70900 _public_6f70900
#define public_6f709d0 _public_6f709d0
#define public_6f70a06 _public_6f70a06
#define public_6f70a17 _public_6f70a17
#define public_6f70a34 _public_6f70a34
#define public_6f70ae0 _public_6f70ae0
#define public_6f70ae2 _public_6f70ae2
#define public_6f70aff _public_6f70aff
#define public_6f70b09 _public_6f70b09
#define public_6f70b1e _public_6f70b1e
#define public_6f70b20 _public_6f70b20
#define public_6f70b35 _public_6f70b35
#define public_6f70b37 _public_6f70b37
#define public_6f70b82 _public_6f70b82
#define public_6f70b84 _public_6f70b84
#define public_6f70bc9 _public_6f70bc9
#define public_6f70c01 _public_6f70c01
#define public_6f70c20 _public_6f70c20
#define public_6f70c97 _public_6f70c97
#define public_6f70ceb _public_6f70ceb
#define public_6f70cfd _public_6f70cfd
#define public_6f70d23 _public_6f70d23
#define public_6f70d61 _public_6f70d61
#define public_6f70d86 _public_6f70d86
#define public_6f70da4 _public_6f70da4
#define public_6f70dbd _public_6f70dbd

PROC_DECLARE(0x6f70580, internal_6f70580, public_6f70580);
extern "C" NAKED register_t __cdecl internal_6f70580()
{
    __asm
    {
        sub esp, 0x120
        push esi
        call dword ptr ds : [public_6fb36a0]
        neg al
        sbb al, al
        inc al
        mov byte ptr ss : [esp+7], al
        call public_6f75f20
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], eax
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x4C], esi
        je public_6f70dbd
        push ebx
        push ebp
        push edi
        public_6f705b7 : nop
        lea ecx, ds:[eax+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        call public_6f78ee0
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        mov dword ptr ss : [esp+0x4C], eax
        je public_6f70da4
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 2
        test ecx, ecx
        je public_6f70da4
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x34], ecx
        je public_6f70da4
        lea ebx, ds:[ebx]
        public_6f70600 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_6f70d86
        lea eax, ss:[esp+0x80]
        push eax
        call public_6eb70f0
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x48]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x7F31E0
        push 0x459C4000
        lea eax, ss:[esp+0x8C]
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        push 0x20
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call dword ptr ds : [public_6fb3460]
        add esp, 0x1C
        mov ecx, esi
        call public_6f746e0
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], 0
        jbe public_6f707fe
        mov esi, offset public_6fd1d70
        lea esp, ss:[esp]
        public_6f70680 : nop
        xor eax, eax
        mov dword ptr ds : [esi-4], 0
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        mov byte ptr ds : [esi-0x18], 1
        mov byte ptr ds : [esi+0x48], 0
        mov ecx, 0x20
        lea edi, ds:[esi+0x4C]
        rep stosd
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+eax*4+0xB0]
        mov edi, dword ptr ss : [esp+0x4C]
        lea ebp, ss:[esp+eax*4+0xB0]
        mov dword ptr ds : [esi-0x14], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edi+8]
        je public_6f706ec
        lea esp, ss:[esp]
        public_6f706d0 : nop
        mov edx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+0x10]
        test edx, edx
        je public_6f706e2
        cmp dword ptr ds : [edx+4], ecx
        jne public_6f706e2
        mov byte ptr ds : [esi+0x48], 1
        public_6f706e2 : nop
        mov edx, dword ptr ds : [edi+8]
        add eax, 4
        cmp eax, edx
        jne public_6f706d0
        public_6f706ec : nop
        mov eax, dword ptr ds : [esi-0x14]
        test eax, eax
        je public_6f707e3
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        xor bl, bl
        call public_6f73990
        test eax, eax
        je public_6f7072d
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_6f70720
        mov ecx, dword ptr ds : [eax+0x1B4]
        test ecx, ecx
        je public_6f7071e
        cmp ecx, 1
        jne public_6f70720
        public_6f7071e : nop
        mov bl, 1
        public_6f70720 : nop
        mov ecx, eax
        call public_6f57710
        test al, al
        je public_6f7072d
        mov bl, 1
        public_6f7072d : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6f70755
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f70755
        mov edx, dword ptr ss : [ebp]
        public_6f70746 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f707df
        add eax, 4
        cmp eax, ecx
        jne public_6f70746
        public_6f70755 : nop
        test bl, bl
        jne public_6f707df
        mov edx, dword ptr ds : [esi-0x14]
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ds:[esi-0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        lea edi, ds:[esi-4]
        mov ebp, eax
        mov eax, dword ptr ds : [esi-0x14]
        push edi
        push eax
        mov dword ptr ds : [edi], 0
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ds : [edi]
        add esp, 0x14
        test eax, 0xFDFF
        je public_6f707ac
        mov ecx, dword ptr ds : [esi-0x14]
        lea edi, ds:[esi+4]
        push edi
        push ecx
        call dword ptr ds : [public_6fb33f0]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_6f707bf
        public_6f707ac : nop
        mov edx, dword ptr ds : [esi-0x14]
        lea edi, ds:[esi+4]
        push edi
        push edx
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        mov ebx, eax
        public_6f707bf : nop
        mov eax, esi
        push eax
        push edi
        call dword ptr ds : [public_6fb366c]
        add esp, 8
        test ebp, ebp
        jne public_6f707d8
        test ebx, ebx
        jne public_6f707d8
        test eax, eax
        je public_6f707e3
        public_6f707d8 : nop
        mov dword ptr ds : [esi-0x14], 0
        public_6f707df : nop
        mov byte ptr ds : [esi-0x18], 0
        public_6f707e3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        inc eax
        add esi, 0xE4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jb public_6f70680
        public_6f707fe : nop
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6f70898
        xor ebx, ebx
        xor ebp, ebp
        public_6f70810 : nop
        mov dl, byte ptr ss : [ebp+public_6fd1d58]
        test dl, dl
        je public_6f70882
        mov edx, dword ptr ss : [ebp+public_6fd1d5c]
        test edx, edx
        je public_6f70882
        xor esi, esi
        test ecx, ecx
        jbe public_6f70882
        mov edi, offset public_6fd1d58
        nop 
        public_6f70830 : nop
        cmp byte ptr ds : [edi], 0
        je public_6f70873
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6f70873
        cmp eax, esi
        jne public_6f70850
        lea ecx, ds:[ebx+esi]
        mov dword ptr ds : [ecx*4+public_6fd1dbc], 0
        jmp public_6f70873
        public_6f70850 : nop
        lea edx, ds:[ebx+esi]
        lea eax, ds : [edx*4+public_6fd1dbc]
        push eax
        lea ecx, ds:[edi+0x1C]
        push ecx
        lea edx, ss : [ebp+public_6fd1d74]
        push edx
        call dword ptr ds : [public_6fb365c]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        public_6f70873 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        inc esi
        add edi, 0xE4
        cmp esi, ecx
        jb public_6f70830
        public_6f70882 : nop
        inc eax
        add ebp, 0xE4
        add ebx, 0x39
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_6f70810
        public_6f70898 : nop
        test ecx, ecx
        mov dword ptr ss : [esp+0x44], 0
        jbe public_6f70d86
        mov dword ptr ss : [esp+0x18], 0
        mov ebp, offset public_6fd1d5c
        public_6f708b5 : nop
        mov al, byte ptr ss : [ebp-4]
        test al, al
        je public_6f70d61
        cmp dword ptr ss : [ebp], 0
        je public_6f70d61
        cmp dword ptr ss : [ebp+0x14], 0xFFFFFFFF
        je public_6f70d61
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0
        jbe public_6f70d61
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[ebp+0x60]
        mov dword ptr ss : [esp+0x38], 0x54
        mov esi, offset public_6fd1d60
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x3C], edx
        public_6f70900 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [esp+0x44], eax
        je public_6f70d23
        mov al, byte ptr ds : [esi-8]
        test al, al
        je public_6f70d23
        mov eax, dword ptr ds : [esi-4]
        test eax, eax
        je public_6f70d23
        fld dword ptr ss : [ebp+4]
        mov eax, 0x5F3759DF
        fsub dword ptr ds : [esi]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ss : [ebp+0xC]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbd10]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_6f70d23
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbbd80]
        fnstsw ax
        test ah, 5
        jnp public_6f70d23
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], 0
        jbe public_6f70d23
        lea ecx, ds:[esi+0x5C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edi, offset public_6fd1d68
        lea ebx, ds:[ebx]
        public_6f709d0 : nop
        mov edx, dword ptr ss : [esp+0x28]
        cmp dword ptr ss : [esp+0x20], edx
        je public_6f70cfd
        mov al, byte ptr ds : [edi-0x10]
        test al, al
        je public_6f70cfd
        mov eax, dword ptr ds : [edi-0xC]
        test eax, eax
        je public_6f70cfd
        mov al, byte ptr ds : [esi+0x58]
        test al, al
        je public_6f70a06
        mov al, byte ptr ds : [edi+0x50]
        test al, al
        jne public_6f70cfd
        public_6f70a06 : nop
        mov ebx, dword ptr ds : [esi+0x10]
        cmp ebx, 0xFFFFFFFF
        jne public_6f70a17
        cmp dword ptr ds : [edi+8], ebx
        je public_6f70cfd
        public_6f70a17 : nop
        mov al, byte ptr ss : [ebp+0x10]
        test al, al
        jns public_6f70a34
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        js public_6f70cfd
        mov al, byte ptr ds : [edi+4]
        test al, al
        js public_6f70cfd
        public_6f70a34 : nop
        fld dword ptr ds : [esi]
        mov ecx, 0x5F3759DF
        fsub dword ptr ds : [edi-8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi-4]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbd10]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_6f70cfd
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edx+eax]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 5
        jnp public_6f70cfd
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [edx+edi]
        fst dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 0x41
        jp public_6f70ae0
        mov al, 1
        jmp public_6f70ae2
        public_6f70ae0 : nop
        xor al, al
        public_6f70ae2 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, 0xFFFFFFFF
        lea edx, ds:[edi+8]
        jne public_6f70aff
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 0x41
        jnp public_6f70b09
        jmp public_6f70cfd
        public_6f70aff : nop
        test al, al
        fstp st(0)
        je public_6f70cfd
        public_6f70b09 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbbd80]
        fnstsw ax
        test ah, 1
        jne public_6f70b1e
        mov cl, 1
        jmp public_6f70b20
        public_6f70b1e : nop
        xor cl, cl
        public_6f70b20 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbbd80]
        fnstsw ax
        test ah, 1
        jne public_6f70b35
        mov al, 1
        jmp public_6f70b37
        public_6f70b35 : nop
        xor al, al
        public_6f70b37 : nop
        cmp ebx, 0xFFFFFFFF
        jne public_6f70c20
        test al, al
        je public_6f70cfd
        lea eax, ss:[esp+0x48]
        push eax
        push edx
        lea ebx, ds:[esi+0x14]
        push ebx
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x60]
        add esp, 0xC
        fabs 
        fld qword ptr ds : [public_6fbbd88]
        fadd st(0), st
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f70b82
        mov al, 1
        jmp public_6f70b84
        public_6f70b82 : nop
        xor al, al
        public_6f70b84 : nop
        test al, al
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+0x48]
        mov dword ptr ss : [esp+0x64], edx
        jne public_6f70bc9
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbbd84]
        fnstsw ax
        test ah, 1
        je public_6f70cfd
        mov eax, dword ptr ds : [public_6fd1d50]
        push eax
        lea ecx, ss:[ebp+0x18]
        push ebx
        push ecx
        call dword ptr ds : [public_6fb33f4]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi-0xC]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], eax
        jmp public_6f70c01
        public_6f70bc9 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbbd84]
        fnstsw ax
        test ah, 1
        je public_6f70cfd
        mov ecx, dword ptr ds : [public_6fd1d50]
        push ecx
        lea edx, ds:[edi+0xC]
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        call dword ptr ds : [public_6fb33f4]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi-4]
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        public_6f70c01 : nop
        add esp, 0xC
        lea eax, ss:[esp+0x5C]
        push eax
        push 0x1003
/*FIXUP push offset public_6fd1c74 @0x6f70c0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        call public_6f24070
        add esp, 0xC
        jmp public_6f70cfd
        public_6f70c20 : nop
        test cl, cl
        je public_6f70c97
        test al, al
        jne public_6f70cfd
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbbd84]
        fnstsw ax
        test ah, 1
        je public_6f70cfd
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 0x41
        jnp public_6f70cfd
        mov ecx, dword ptr ds : [public_6fd1d50]
        push ecx
        lea edx, ds:[edi+0xC]
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        call dword ptr ds : [public_6fb33f4]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi-4]
        mov dword ptr ss : [esp+0x88], edx
        lea edx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], ecx
        push edx
        jmp public_6f70ceb
        public_6f70c97 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbbd84]
        fnstsw ax
        test ah, 1
        je public_6f70cfd
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 0x41
        jnp public_6f70cfd
        mov eax, dword ptr ds : [public_6fd1d50]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        lea edx, ss:[ebp+0x18]
        push edx
        call dword ptr ds : [public_6fb33f4]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+0x48]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi-4]
        mov dword ptr ss : [esp+0x7C], ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x78], eax
        push ecx
        public_6f70ceb : nop
        push 0x1003
/*FIXUP push offset public_6fd1c74 @0x6f70cf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        call public_6f24070
        add esp, 0x18
        public_6f70cfd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        add ecx, 4
        inc eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add edi, 0xE4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jb public_6f709d0
        public_6f70d23 : nop
        mov ebx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x38]
        mov edx, 4
        add ebx, edx
        mov dword ptr ss : [esp+0x40], ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        inc eax
        add edi, edx
        sub ebx, 0xE4
        add esi, 0xE4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], ebx
        jb public_6f70900
        public_6f70d61 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x18]
        inc eax
        add esi, 0xE4
        add ebp, 0xE4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x18], esi
        jb public_6f708b5
        public_6f70d86 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [edx+8]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x34], eax
        jne public_6f70600
        mov esi, dword ptr ss : [esp+0x58]
        public_6f70da4 : nop
        lea ecx, ss:[esp+0x50]
        call public_6f24610
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f705b7
        pop edi
        pop ebp
        pop ebx
        public_6f70dbd : nop
        pop esi
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x6f70580)
    }
}

#undef public_6f705b7
#undef public_6f70600
#undef public_6f70680
#undef public_6f706d0
#undef public_6f706e2
#undef public_6f706ec
#undef public_6f7071e
#undef public_6f70720
#undef public_6f7072d
#undef public_6f70746
#undef public_6f70755
#undef public_6f707ac
#undef public_6f707bf
#undef public_6f707d8
#undef public_6f707df
#undef public_6f707e3
#undef public_6f707fe
#undef public_6f70810
#undef public_6f70830
#undef public_6f70850
#undef public_6f70873
#undef public_6f70882
#undef public_6f70898
#undef public_6f708b5
#undef public_6f70900
#undef public_6f709d0
#undef public_6f70a06
#undef public_6f70a17
#undef public_6f70a34
#undef public_6f70ae0
#undef public_6f70ae2
#undef public_6f70aff
#undef public_6f70b09
#undef public_6f70b1e
#undef public_6f70b20
#undef public_6f70b35
#undef public_6f70b37
#undef public_6f70b82
#undef public_6f70b84
#undef public_6f70bc9
#undef public_6f70c01
#undef public_6f70c20
#undef public_6f70c97
#undef public_6f70ceb
#undef public_6f70cfd
#undef public_6f70d23
#undef public_6f70d61
#undef public_6f70d86
#undef public_6f70da4
#undef public_6f70dbd
