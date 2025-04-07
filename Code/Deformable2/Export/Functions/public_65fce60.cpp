#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65f9d70);
CLANG_FORWARD_PROC_SYMBOL(public_65fadb0);
CLANG_FORWARD_PROC_SYMBOL(public_65faef0);
CLANG_FORWARD_PROC_SYMBOL(public_65fafc0);
CLANG_FORWARD_PROC_SYMBOL(public_65fbd30);
CLANG_FORWARD_PROC_SYMBOL(public_65fbdf0);
CLANG_FORWARD_PROC_SYMBOL(public_65fce60);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65fcec6 _public_65fcec6
#define public_65fceda _public_65fceda
#define public_65fcf68 _public_65fcf68
#define public_65fd001 _public_65fd001
#define public_65fd027 _public_65fd027
#define public_65fd040 _public_65fd040
#define public_65fd0b8 _public_65fd0b8
#define public_65fd0cb _public_65fd0cb
#define public_65fd10c _public_65fd10c
#define public_65fd172 _public_65fd172
#define public_65fd1e7 _public_65fd1e7
#define public_65fd230 _public_65fd230
#define public_65fd266 _public_65fd266
#define public_65fd2c1 _public_65fd2c1
#define public_65fd2fc _public_65fd2fc
#define public_65fd366 _public_65fd366
#define public_65fd379 _public_65fd379
#define public_65fd391 _public_65fd391
#define public_65fd3e8 _public_65fd3e8
#define public_65fd3f0 _public_65fd3f0
#define public_65fd412 _public_65fd412
#define public_65fd41e _public_65fd41e
#define public_65fd426 _public_65fd426
#define public_65fd490 _public_65fd490
#define public_65fd4b5 _public_65fd4b5
#define public_65fd4f6 _public_65fd4f6
#define public_65fd518 _public_65fd518
#define public_65fd57e _public_65fd57e
#define public_65fd592 _public_65fd592
#define public_65fd5f8 _public_65fd5f8
#define public_65fd653 _public_65fd653
#define public_65fd655 _public_65fd655
#define public_65fd674 _public_65fd674
#define public_65fd6df _public_65fd6df
#define public_65fd730 _public_65fd730
#define public_65fd755 _public_65fd755
#define public_65fd7c0 _public_65fd7c0
#define public_65fd813 _public_65fd813
#define public_65fd87c _public_65fd87c
#define public_65fd89e _public_65fd89e
#define public_65fd8e2 _public_65fd8e2
#define public_65fd96d _public_65fd96d
#define public_65fd9c5 _public_65fd9c5
#define public_65fd9e4 _public_65fd9e4
#define public_65fda4f _public_65fda4f
#define public_65fda60 _public_65fda60
#define public_65fda7b _public_65fda7b
#define public_65fdaab _public_65fdaab
#define public_65fdadc _public_65fdadc
#define public_65fdb10 _public_65fdb10
#define public_65fdb27 _public_65fdb27
#define public_65fdba4 _public_65fdba4
#define public_65fdbe6 _public_65fdbe6
#define public_65fdc2e _public_65fdc2e
#define public_65fdc49 _public_65fdc49

PROC_DECLARE(0x65fce60, internal_65fce60, public_65fce60);
extern "C" NAKED register_t __cdecl internal_65fce60()
{
    __asm
    {
        sub esp, 0xC1C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [ebx+0x40]
        lea edx, ds:[edx+edx*2]
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, eax
        shr ecx, 5
        and cl, 1
        shr eax, 6
        and al, 1
        mov dl, cl
        neg dl
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x13], cl
        mov byte ptr ss : [esp+0x12], al
        sbb edx, edx
        and edx, 3
        mov esi, edx
        mov dl, al
        neg dl
        mov dword ptr ss : [esp+0x54], esi
        sbb edx, edx
        and edx, 3
        add edx, esi
        test al, al
        mov dword ptr ss : [esp+0x58], edx
        je public_65fcec6
        mov eax, dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ss : [esp+0x40]
        imul eax, 0xFFFFFFFD
        add ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        jmp public_65fceda
        public_65fcec6 : nop
        test cl, cl
        je public_65fceda
        mov ecx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ss : [esp+0x40]
        imul ecx, 0xFFFFFFFD
        add eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        public_65fceda : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_66032a8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_66032ac], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_66032b0], eax
        mov dword ptr ds : [public_660326c], eax
        mov eax, dword ptr ds : [public_6603134]
        mov dword ptr ds : [public_6603264], ecx
        mov dword ptr ds : [public_6603268], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov ecx, 9
        mov edi, offset public_66032e8
        rep movsd
        mov ecx, 9
        mov esi, offset public_66032e8
        mov edi, offset public_66031b0
        rep movsd
        mov eax, dword ptr ds : [ebx+0x40]
        xor ebp, ebp
        test eax, eax
        jle public_65fd001
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x20], offset public_66031d4
        mov dword ptr ss : [esp+0x28], offset public_6603270
        public_65fcf68 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        add ecx, edi
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0xCC]
        mov ecx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edx+ebp*4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov ecx, 9
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x40]
        inc ebp
        add esi, 0x10
        add edx, 0xC
        add ecx, 0x24
        cmp ebp, eax
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x20], ecx
        jl public_65fcf68
        public_65fd001 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ebp, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x70], ebp
        je public_65fd027
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], ecx
        public_65fd027 : nop
        mov cl, byte ptr ss : [esp+0x12]
        test cl, cl
        je public_65fd040
        mov esi, dword ptr ds : [ebx+0x24]
        mov ecx, 9
        lea edi, ss:[esp+0x2C4]
        rep movsd
        public_65fd040 : nop
        test al, al
        mov byte ptr ss : [esp+0x11], 0
        je public_65fd0b8
        fld dword ptr ss : [esp+0x64]
        lea edx, ss:[ebp+ebp*2]
        fsub dword ptr ds : [edx*4+public_660326c]
        lea eax, ds : [edx*4+public_6603264]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_65f4580
        fld dword ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x11], 1
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_66013d0]
        fnstsw ax
        test ah, 0x41
        je public_65fd0b8
        mov byte ptr ss : [esp+0x11], 0
        public_65fd0b8 : nop
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd0cb
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd0cb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C4]
        push edx
        lea edx, ss:[esp+0x11C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_65fd172
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_65fdc49
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd10c
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd10c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+ebp*8]
        lea edx, ds : [edx*4+public_66031b0]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x118]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_65fbdf0
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        add esp, 0xC
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jne public_65fdc49
        public_65fd172 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x58]
        lea esi, ds:[ecx+eax]
        mov dword ptr ss : [esp+0x550], eax
        mov dword ptr ss : [esp+0x9DC], eax
        mov dword ptr ss : [esp+0x798], eax
        mov dword ptr ss : [esp+0x28C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[ebp+ebp*2]
        mov edx, 1
        shl eax, 2
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x54C], ecx
        mov dword ptr ss : [esp+0x9E0], ecx
        mov dword ptr ss : [esp+0x794], esi
        mov dword ptr ss : [esp+0x18C], ecx
        mov dword ptr ss : [esp+0x9C], edx
        mov dword ptr ss : [esp+0x68], eax
        public_65fd1e7 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [ebp+0x40]
        inc eax
        mov edi, 1
        cmp eax, edi
        mov dword ptr ss : [esp+0x2C], 0x40000000
        mov dword ptr ss : [esp+0x6C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], eax
        jle public_65fd391
        lea esi, ss:[esp+0x314]
        mov dword ptr ss : [esp+0x14], offset public_66031d4
        sub esi, 0xC
        lea ebx, ds:[ebx]
        public_65fd230 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_65fd2fc
        mov edx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov ebx, eax
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd266
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd266 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        add ebx, 4
        push ebx
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [ebp+0x2C]
        mov cl, byte ptr ds : [eax+edi-1]
        test cl, cl
        je public_65fd2c1
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi-4]
        fstp dword ptr ds : [esi-4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [esi+0x28]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [esi+0x58]
        fstp dword ptr ds : [esi+0x58]
        fld dword ptr ds : [esi+0x5C]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ds : [esi+0x5C]
        jmp public_65fd2fc
        public_65fd2c1 : nop
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x48]
        fchs 
        fstp dword ptr ds : [esi+0xC]
        xor eax, eax
        fld dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+0x6C], eax
        fchs 
        mov dword ptr ds : [esi+0x38], eax
        fstp dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+4], eax
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        fchs 
        mov dword ptr ds : [esi+8], ecx
        fstp dword ptr ds : [esi+0x68]
        mov dword ptr ds : [esi+0x3C], edx
        mov dword ptr ds : [esi+0x64], eax
        public_65fd2fc : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_65fd366
        mov ecx, dword ptr ss : [ebp+0x2C]
        mov al, byte ptr ds : [ecx+edi-1]
        test al, al
        jne public_65fd366
        mov eax, dword ptr ss : [esp+0x54]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+edx*4]
        shl eax, 2
        xor ecx, ecx
        mov edx, 0x3F800000
        mov dword ptr ss : [esp+eax+0x30C], edx
        mov dword ptr ss : [esp+eax+0x310], ecx
        mov dword ptr ss : [esp+eax+0x314], ecx
        mov dword ptr ss : [esp+eax+0x33C], ecx
        mov dword ptr ss : [esp+eax+0x340], edx
        mov dword ptr ss : [esp+eax+0x344], ecx
        mov dword ptr ss : [esp+eax+0x36C], ecx
        mov dword ptr ss : [esp+eax+0x370], ecx
        mov dword ptr ss : [esp+eax+0x374], edx
        public_65fd366 : nop
        mov ecx, dword ptr ss : [ebp+0x2C]
        mov al, byte ptr ds : [ecx+edi-1]
        test al, al
        jne public_65fd379
        add dword ptr ss : [esp+0x18], 3
        add esi, 0xC
        public_65fd379 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        inc edi
        add ecx, 0x24
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], ecx
        jl public_65fd230
        public_65fd391 : nop
        lea edx, ss:[esp+0x79C]
        push edx
        lea ecx, ss:[esp+0x310]
        call public_65f9d70
        lea eax, ss:[esp+0x554]
        push eax
        lea ecx, ss:[esp+0x310]
        push ecx
        lea edx, ss:[esp+0x7A4]
        push edx
        call public_65faef0
        fld dword ptr ss : [ebp+0x38]
        mov edi, dword ptr ss : [esp+0x7A0]
        fld st(0)
        mov eax, dword ptr ss : [esp+0x7A4]
        fmul st, st(1)
        add esp, 0xC
        xor esi, esi
        test edi, edi
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jle public_65fd426
        xor edx, edx
        public_65fd3e8 : nop
        xor ecx, ecx
        test eax, eax
        jle public_65fd41e
        mov edi, edi
        public_65fd3f0 : nop
        cmp esi, ecx
        jne public_65fd412
        fld dword ptr ss : [esp+0x1C]
        lea eax, ds:[edx+ecx]
        fadd dword ptr ss : [esp+eax*4+0x554]
        lea eax, ss:[esp+eax*4+0x554]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x798]
        public_65fd412 : nop
        inc ecx
        cmp ecx, eax
        jl public_65fd3f0
        mov edi, dword ptr ss : [esp+0x794]
        public_65fd41e : nop
        inc esi
        add edx, 0xC
        cmp esi, edi
        jl public_65fd3e8
        public_65fd426 : nop
        lea ecx, ss:[esp+0x9E4]
        push ecx
        lea ecx, ss:[esp+0x558]
        mov dword ptr ss : [esp+0xC28], eax
        mov dword ptr ss : [esp+0xC2C], edi
        call public_65fadb0
        mov eax, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ss : [esp+0x40]
        shr eax, 7
        not al
        and al, 1
        mov dword ptr ss : [esp+0x2C0], edx
        mov byte ptr ss : [esp+0x11], al
        je public_65fd592
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        jle public_65fd592
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x294]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        public_65fd490 : nop
        mov edx, dword ptr ds : [ecx+0x2C]
        cmp byte ptr ds : [eax+edx], 0
        jne public_65fd57e
        mov esi, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_66033a8]
        add esi, ebp
        test eax, eax
        jne public_65fd4b5
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd4b5 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea ebx, ss : [ebp+public_66031d4]
        lea edx, ds:[ebx-0x24]
        push edx
        lea edx, ss:[esp+0xD8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0xD0]
        lea edi, ss:[esp+0x2E8]
        rep movsd
        jne public_65fd4f6
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd4f6 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x1E8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd518
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd518 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2E8]
        push edx
        lea edx, ss:[esp+0x1C8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x1C4]
        push eax
        lea ecx, ss:[esp+0x1E8]
        push ecx
        lea edx, ss:[esp+0xCC]
        push edx
        call public_65fbdf0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [eax-4], ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax], edx
        add esp, 0xC
        add eax, 0xC
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x18]
        public_65fd57e : nop
        mov edx, dword ptr ss : [esp+0x44]
        inc eax
        add ebp, 0x24
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fd490
        public_65fd592 : nop
        fld dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_6601338]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ds : [esi+public_6603264]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [esi+public_6603268]
        mov dword ptr ss : [esp+0x34], edx
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x78]
        fsub dword ptr ds : [esi+public_660326c]
        mov dword ptr ss : [esp+0x38], eax
        cmp dword ptr ss : [esp+0x20], 1
        fstp dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x3C], ecx
        lea eax, ss:[esp+0x9C]
        jl public_65fd5f8
        lea eax, ss:[esp+0x20]
        public_65fd5f8 : nop
        fild dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [esp+0x13]
        mov edx, dword ptr ss : [esp+0x58]
        fdivr dword ptr ds : [public_66011e0]
        dec ecx
        test al, al
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x158], edx
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x3C]
        je public_65fd653
        mov eax, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x130]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x128], eax
        mov dword ptr ss : [esp+0x12C], ecx
        jmp public_65fd655
        public_65fd653 : nop
        fstp st(0)
        public_65fd655 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_65fd6df
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd674
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd674 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ecx*8]
        lea ecx, ds : [ecx*4+public_66031b0]
        push ecx
        lea ecx, ss:[esp+0x1D8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        lea edx, ss:[esp+0x118]
        push edx
        lea eax, ss:[esp+0x1D8]
        push eax
        lea ecx, ss:[esp+0x114]
        push ecx
        call public_65fbdf0
        fld dword ptr ss : [esp+0x118]
        mov eax, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+eax*4+0x134]
        add esp, 0xC
        fld dword ptr ss : [esp+0x110]
        fstp dword ptr ss : [esp+eax*4+0x12C]
        fld dword ptr ss : [esp+0x114]
        fstp dword ptr ss : [esp+eax*4+0x130]
        public_65fd6df : nop
        mov edx, dword ptr ss : [esp+0x158]
        lea eax, ss:[esp+0x190]
        push eax
        lea ecx, ss:[esp+0x12C]
        push ecx
        lea ecx, ss:[esp+0x7A4]
        mov dword ptr ss : [esp+0x1C8], edx
        call public_65fafc0
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_65fd755
        mov edx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edx+0x38]
        mov ecx, dword ptr ss : [esp+0x1C0]
        fmul dword ptr ds : [public_66013c0]
        xor eax, eax
        test ecx, ecx
        fstp dword ptr ss : [esp+0x1C]
        jle public_65fd755
        nop 
        public_65fd730 : nop
        fld dword ptr ss : [esp+0x1C]
        inc eax
        fmul dword ptr ss : [esp+eax*4+0x28C]
        fadd dword ptr ss : [esp+eax*4+0x18C]
        fstp dword ptr ss : [esp+eax*4+0x18C]
        mov ecx, dword ptr ss : [esp+0x1C0]
        cmp eax, ecx
        jl public_65fd730
        public_65fd755 : nop
        lea eax, ss:[esp+0x25C]
        push eax
        lea ecx, ss:[esp+0x194]
        push ecx
        lea ecx, ss:[esp+0x9EC]
        call public_65fafc0
        lea eax, ds : [esi+public_6603264]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x18], 0
        jle public_65fd96d
        lea eax, ss:[esp+0x264]
        mov ebp, offset public_66032b0
        mov dword ptr ss : [esp+0x14], eax
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_65fd7c0 : nop
        mov edi, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx+esi*4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0x2C]
        cmp byte ptr ds : [esi+eax], 0
        jne public_65fd813
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        fstp dword ptr ss : [esp+0xAC]
        fld dword ptr ds : [eax-0x10]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ds : [eax-0xC]
        fstp dword ptr ss : [esp+0xB4]
        public_65fd813 : nop
        fld dword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0xF4]
        fmul dword ptr ds : [public_6601328]
        push ecx
        lea edx, ss:[esp+0x250]
        push edx
        fstp dword ptr ss : [esp+0xFC]
        fld dword ptr ss : [esp+0xB8]
        fmul dword ptr ds : [public_6601328]
        fstp dword ptr ss : [esp+0x100]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [public_6601328]
        fstp dword ptr ss : [esp+0x104]
        call public_65fbd30
        mov esi, eax
        mov eax, dword ptr ds : [public_66033a8]
        add esp, 8
        test eax, eax
        jne public_65fd87c
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd87c : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x22C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd89e
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd89e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds : [ebx+public_66031d4]
        push edx
        lea edx, ss:[esp+0x22C]
        push edx
        lea edx, ss:[esp+0x20C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        lea edi, ds : [ebx+public_660330c]
        mov ecx, 9
        lea esi, ss:[esp+0x204]
        rep movsd
        jne public_65fd8e2
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd8e2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        add edx, 4
        push edx
        lea edx, ds : [ebx+public_66032e8]
        push edx
        lea edx, ss:[esp+0x108]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x100]
        fadd dword ptr ss : [ebp-8]
        lea eax, ss:[ebp+4]
        add ebx, 0x24
        add ebp, 0xC
        fstp dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x108]
        mov edx, dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xA8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x44]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fd7c0
        public_65fd96d : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_65fd9c5
        mov eax, dword ptr ss : [esp+0x68]
        fld dword ptr ds : [eax+public_66032a8]
        fsub dword ptr ss : [esp+0x90]
        fld dword ptr ds : [eax+public_66032ac]
        fsub dword ptr ss : [esp+0x94]
        fld dword ptr ds : [eax+public_66032b0]
        fsub dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x88]
        fxch 
        fstp dword ptr ss : [esp+0x15C]
        mov dword ptr ss : [esp+0x164], edx
        fstp dword ptr ss : [esp+0x160]
        public_65fd9c5 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_65fda4f
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fd9e4
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fd9e4 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ecx*8]
        lea ecx, ds : [ecx*4+public_66032e8]
        push ecx
        lea ecx, ss:[esp+0x1F8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        lea edx, ss:[esp+0x118]
        push edx
        lea eax, ss:[esp+0x1F8]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_65fbdf0
        fld dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+eax*4+0x168]
        add esp, 0xC
        fld dword ptr ss : [esp+0xBC]
        fstp dword ptr ss : [esp+eax*4+0x160]
        fld dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+eax*4+0x164]
        public_65fda4f : nop
        mov ecx, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [public_6601318]
        xor eax, eax
        test ecx, ecx
        jle public_65fda7b
        nop 
        public_65fda60 : nop
        fld dword ptr ss : [esp+eax*4+0x128]
        inc eax
        cmp eax, ecx
        fsub dword ptr ss : [esp+eax*4+0x158]
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jl public_65fda60
        public_65fda7b : nop
        fld dword ptr ss : [esp+0x6C]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x6C]
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jne public_65fdaab
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_66013b8]
        fnstsw ax
        test ah, 5
        jnp public_65fd592
        public_65fdaab : nop
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_66011e0]
        fsub dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x1C]
        jnp public_65fdadc
        lea eax, ss:[esp+0x28]
        public_65fdadc : nop
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        fsub qword ptr ds : [public_6601320]
        mov dword ptr ss : [esp+0x28], edx
        fabs 
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jnp public_65fdb10
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 1
        jne public_65fd1e7
        public_65fdb10 : nop
        mov eax, dword ptr ss : [esp+0x44]
        xor ebp, ebp
        cmp eax, ebp
        jle public_65fdc49
        mov dword ptr ss : [esp+0x2C], ebp
        mov ebx, offset public_6603300
        public_65fdb27 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax+0x2C]
        cmp byte ptr ds : [ecx+ebp], 0
        jne public_65fdc2e
        fld dword ptr ds : [ebx-0x18]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        fstp dword ptr ss : [esp+0xD0]
        fld dword ptr ds : [ebx-0xC]
        fstp dword ptr ss : [esp+0xD4]
        fld dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0xD8]
        fld dword ptr ds : [ebx-0x14]
        fstp dword ptr ss : [esp+0xDC]
        fld dword ptr ds : [ebx-8]
        fstp dword ptr ss : [esp+0xE0]
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0xE4]
        fld dword ptr ds : [ebx-0x10]
        fstp dword ptr ss : [esp+0xE8]
        fld dword ptr ds : [ebx-4]
        fstp dword ptr ss : [esp+0xEC]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0xF0]
        jne public_65fdba4
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fdba4 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0xD4]
        push ecx
        lea ecx, ss:[esp+0x20C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x204]
        lea edi, ss:[esp+0x228]
        rep movsd
        jne public_65fdbe6
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fdbe6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x228]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edx+0x1C]
        add eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+0xC], edx
        public_65fdc2e : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x44]
        inc ebp
        add ecx, 0x10
        add ebx, 0x24
        cmp ebp, eax
        mov dword ptr ss : [esp+0x2C], ecx
        jl public_65fdb27
        public_65fdc49 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC1C
        ret 
        UNREACHABLE_TRAP(0x65fce60)
    }
}

#undef public_65fcec6
#undef public_65fceda
#undef public_65fcf68
#undef public_65fd001
#undef public_65fd027
#undef public_65fd040
#undef public_65fd0b8
#undef public_65fd0cb
#undef public_65fd10c
#undef public_65fd172
#undef public_65fd1e7
#undef public_65fd230
#undef public_65fd266
#undef public_65fd2c1
#undef public_65fd2fc
#undef public_65fd366
#undef public_65fd379
#undef public_65fd391
#undef public_65fd3e8
#undef public_65fd3f0
#undef public_65fd412
#undef public_65fd41e
#undef public_65fd426
#undef public_65fd490
#undef public_65fd4b5
#undef public_65fd4f6
#undef public_65fd518
#undef public_65fd57e
#undef public_65fd592
#undef public_65fd5f8
#undef public_65fd653
#undef public_65fd655
#undef public_65fd674
#undef public_65fd6df
#undef public_65fd730
#undef public_65fd755
#undef public_65fd7c0
#undef public_65fd813
#undef public_65fd87c
#undef public_65fd89e
#undef public_65fd8e2
#undef public_65fd96d
#undef public_65fd9c5
#undef public_65fd9e4
#undef public_65fda4f
#undef public_65fda60
#undef public_65fda7b
#undef public_65fdaab
#undef public_65fdadc
#undef public_65fdb10
#undef public_65fdb27
#undef public_65fdba4
#undef public_65fdbe6
#undef public_65fdc2e
#undef public_65fdc49
