#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9d70);
CLANG_FORWARD_PROC_SYMBOL(public_65fadb0);
CLANG_FORWARD_PROC_SYMBOL(public_65faef0);
CLANG_FORWARD_PROC_SYMBOL(public_65fafc0);
CLANG_FORWARD_PROC_SYMBOL(public_65fbd30);
CLANG_FORWARD_PROC_SYMBOL(public_65fbdf0);
CLANG_FORWARD_PROC_SYMBOL(public_65fc000);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65fc032 _public_65fc032
#define public_65fc06d _public_65fc06d
#define public_65fc084 _public_65fc084
#define public_65fc091 _public_65fc091
#define public_65fc120 _public_65fc120
#define public_65fc1ce _public_65fc1ce
#define public_65fc1f4 _public_65fc1f4
#define public_65fc20d _public_65fc20d
#define public_65fc269 _public_65fc269
#define public_65fc27c _public_65fc27c
#define public_65fc2bd _public_65fc2bd
#define public_65fc323 _public_65fc323
#define public_65fc390 _public_65fc390
#define public_65fc398 _public_65fc398
#define public_65fc3b0 _public_65fc3b0
#define public_65fc3d6 _public_65fc3d6
#define public_65fc400 _public_65fc400
#define public_65fc429 _public_65fc429
#define public_65fc453 _public_65fc453
#define public_65fc499 _public_65fc499
#define public_65fc4d9 _public_65fc4d9
#define public_65fc50c _public_65fc50c
#define public_65fc57a _public_65fc57a
#define public_65fc58c _public_65fc58c
#define public_65fc5a0 _public_65fc5a0
#define public_65fc5f7 _public_65fc5f7
#define public_65fc600 _public_65fc600
#define public_65fc622 _public_65fc622
#define public_65fc62e _public_65fc62e
#define public_65fc636 _public_65fc636
#define public_65fc696 _public_65fc696
#define public_65fc6bb _public_65fc6bb
#define public_65fc6fc _public_65fc6fc
#define public_65fc71e _public_65fc71e
#define public_65fc784 _public_65fc784
#define public_65fc798 _public_65fc798
#define public_65fc7fe _public_65fc7fe
#define public_65fc859 _public_65fc859
#define public_65fc85b _public_65fc85b
#define public_65fc87a _public_65fc87a
#define public_65fc8e5 _public_65fc8e5
#define public_65fc935 _public_65fc935
#define public_65fc95a _public_65fc95a
#define public_65fc9c0 _public_65fc9c0
#define public_65fca13 _public_65fca13
#define public_65fca7c _public_65fca7c
#define public_65fca9e _public_65fca9e
#define public_65fcae2 _public_65fcae2
#define public_65fcb6d _public_65fcb6d
#define public_65fcbc5 _public_65fcbc5
#define public_65fcbe4 _public_65fcbe4
#define public_65fcc4f _public_65fcc4f
#define public_65fcc60 _public_65fcc60
#define public_65fcc7b _public_65fcc7b
#define public_65fccab _public_65fccab
#define public_65fccdc _public_65fccdc
#define public_65fcd10 _public_65fcd10
#define public_65fcd27 _public_65fcd27
#define public_65fcda4 _public_65fcda4
#define public_65fcde6 _public_65fcde6
#define public_65fce2e _public_65fce2e
#define public_65fce49 _public_65fce49

PROC_DECLARE(0x65fc000, internal_65fc000, public_65fc000);
extern "C" NAKED register_t __cdecl internal_65fc000()
{
    __asm
    {
        sub esp, 0xC28
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, eax
        push ebp
        shr edx, 5
        push esi
        and dl, 1
        shr eax, 6
        push edi
        mov edi, dword ptr ds : [ebx+0x40]
        and al, 1
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x13], dl
        mov byte ptr ss : [esp+0x11], al
        mov ecx, edi
        jne public_65fc032
        lea ecx, ds:[edi-1]
        public_65fc032 : nop
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [esp+0x38], ecx
        mov cl, dl
        neg cl
        sbb ecx, ecx
        and ecx, 3
        mov esi, ecx
        mov cl, al
        neg cl
        mov dword ptr ss : [esp+0x48], esi
        sbb ecx, ecx
        and ecx, 3
        add ecx, esi
        test al, al
        mov dword ptr ss : [esp+0x58], ecx
        je public_65fc06d
        mov edx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ss : [esp+0x38]
        imul edx, 0xFFFFFFFD
        add eax, edx
        mov dword ptr ss : [esp+0x38], eax
        jmp public_65fc091
        public_65fc06d : nop
        test dl, dl
        je public_65fc091
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        jle public_65fc084
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dl, byte ptr ds : [ecx+edi-1]
        test dl, dl
        je public_65fc084
        dec eax
        public_65fc084 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        imul eax, 0xFFFFFFFD
        add ecx, eax
        mov dword ptr ss : [esp+0x38], ecx
        public_65fc091 : nop
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
        jle public_65fc1ce
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x24], offset public_66031d4
        mov dword ptr ss : [esp+0x20], offset public_6603270
        nop 
        public_65fc120 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edi, dword ptr ss : [esp+0x1C]
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
        call dword ptr ds : [edx+0xC4]
        mov ecx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x20]
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
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov ecx, 9
        rep movsd
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx+0x40]
        inc ebp
        add esi, 0x10
        add edx, 0xC
        add ecx, 0x24
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], ecx
        jl public_65fc120
        public_65fc1ce : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ebp, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x64], ebp
        je public_65fc1f4
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], ecx
        public_65fc1f4 : nop
        mov cl, byte ptr ss : [esp+0x11]
        test cl, cl
        je public_65fc20d
        mov esi, dword ptr ds : [ebx+0x24]
        mov ecx, 9
        lea edi, ss:[esp+0x2D0]
        rep movsd
        public_65fc20d : nop
        test al, al
        mov byte ptr ss : [esp+0x12], 0
        je public_65fc269
        fld dword ptr ss : [esp+0x68]
        lea edx, ss:[ebp+ebp*2]
        fsub dword ptr ds : [edx*4+public_6603264]
        lea eax, ds : [edx*4+public_6603264]
        fld dword ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x12], 1
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp qword ptr ds : [public_66013d0]
        fnstsw ax
        test ah, 0x41
        je public_65fc269
        mov byte ptr ss : [esp+0x12], 0
        public_65fc269 : nop
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fc27c
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc27c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2D0]
        push edx
        lea edx, ss:[esp+0x128]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_65fc323
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_65fce49
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fc2bd
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc2bd : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+ebp*8]
        lea edx, ds : [edx*4+public_66031b0]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x124]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_65fbdf0
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jne public_65fce49
        public_65fc323 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x58]
        lea esi, ds:[ecx+eax]
        mov dword ptr ss : [esp+0x55C], eax
        mov dword ptr ss : [esp+0x9E8], eax
        mov dword ptr ss : [esp+0x7A4], eax
        mov dword ptr ss : [esp+0x298], eax
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        mov edx, 1
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x558], ecx
        mov dword ptr ss : [esp+0x9EC], ecx
        mov dword ptr ss : [esp+0x7A0], esi
        mov dword ptr ss : [esp+0x198], ecx
        je public_65fc390
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x30], eax
        jmp public_65fc398
        public_65fc390 : nop
        mov ebx, dword ptr ds : [ebx+0x40]
        dec ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_65fc398 : nop
        lea eax, ss:[ebp+ebp*2]
        shl eax, 2
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0x60], eax
        lea ebx, ds:[ebx]
        public_65fc3b0 : nop
        mov cl, byte ptr ss : [esp+0x11]
        mov ebx, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [ebx+0x40]
        xor eax, eax
        test cl, cl
        mov dword ptr ss : [esp+0x28], 0x40000000
        mov dword ptr ss : [esp+0x5C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x18], eax
        je public_65fc3d6
        inc ebp
        public_65fc3d6 : nop
        mov edi, 1
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], ebp
        jle public_65fc5a0
        mov ecx, dword ptr ss : [esp+0x48]
        lea esi, ss:[esp+0x320]
        mov dword ptr ss : [esp+0x2C], offset public_66031d4
        sub esi, 0xC
        lea ecx, ds:[ecx]
        public_65fc400 : nop
        mov dl, byte ptr ss : [esp+0x13]
        test dl, dl
        je public_65fc50c
        cmp edi, dword ptr ds : [ebx+0x40]
        jne public_65fc429
        fld dword ptr ds : [public_6601318]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x4C], 0
        jmp public_65fc499
        public_65fc429 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov ebp, eax
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fc453
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc453 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        add ebp, 4
        push ebp
        push edx
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0xC0]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x50], ecx
        fld dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x54], edx
        xor eax, eax
        public_65fc499 : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp byte ptr ds : [edx+edi-1], 0
        je public_65fc4d9
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi-4]
        fstp dword ptr ds : [esi-4]
        fld dword ptr ds : [esi]
        fsub st, st(1)
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [esi+0x28]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [esi+0x58]
        fstp dword ptr ds : [esi+0x58]
        fld dword ptr ds : [esi+0x5C]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [esi+0x5C]
        jmp public_65fc50c
        public_65fc4d9 : nop
        mov edx, dword ptr ss : [esp+0x54]
        fld st(0)
        fchs 
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+0x6C], eax
        fchs 
        mov dword ptr ds : [esi+0x38], eax
        fstp dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x3C], edx
        fstp dword ptr ds : [esi+0x64]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ds : [esi+0x68]
        public_65fc50c : nop
        mov dl, byte ptr ss : [esp+0x11]
        test dl, dl
        je public_65fc57a
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp byte ptr ds : [edx+edi-1], 0
        jne public_65fc57a
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+ecx*2]
        lea eax, ds:[edx+eax*4]
        shl eax, 2
        xor edx, edx
        mov dword ptr ss : [esp+eax+0x318], 0x3F800000
        mov dword ptr ss : [esp+eax+0x31C], edx
        mov dword ptr ss : [esp+eax+0x320], edx
        mov dword ptr ss : [esp+eax+0x348], edx
        mov dword ptr ss : [esp+eax+0x34C], 0x3F800000
        mov dword ptr ss : [esp+eax+0x350], edx
        mov dword ptr ss : [esp+eax+0x378], edx
        mov dword ptr ss : [esp+eax+0x37C], edx
        mov dword ptr ss : [esp+eax+0x380], 0x3F800000
        xor eax, eax
        public_65fc57a : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp byte ptr ds : [edx+edi-1], 0
        jne public_65fc58c
        add dword ptr ss : [esp+0x18], 3
        add esi, 0xC
        public_65fc58c : nop
        mov edx, dword ptr ss : [esp+0x2C]
        inc edi
        add edx, 0x24
        cmp edi, ebp
        mov dword ptr ss : [esp+0x2C], edx
        jl public_65fc400
        public_65fc5a0 : nop
        lea eax, ss:[esp+0x7A8]
        push eax
        lea ecx, ss:[esp+0x31C]
        call public_65f9d70
        lea ecx, ss:[esp+0x560]
        push ecx
        lea edx, ss:[esp+0x31C]
        push edx
        lea eax, ss:[esp+0x7B0]
        push eax
        call public_65faef0
        fld dword ptr ds : [ebx+0x38]
        mov edi, dword ptr ss : [esp+0x7AC]
        fld st(0)
        mov eax, dword ptr ss : [esp+0x7B0]
        fmul st, st(1)
        add esp, 0xC
        xor esi, esi
        test edi, edi
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jle public_65fc636
        xor edx, edx
        public_65fc5f7 : nop
        xor ecx, ecx
        test eax, eax
        jle public_65fc62e
        lea ecx, ds:[ecx]
        public_65fc600 : nop
        cmp esi, ecx
        jne public_65fc622
        fld dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+ecx]
        fadd dword ptr ss : [esp+eax*4+0x560]
        lea eax, ss:[esp+eax*4+0x560]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x7A4]
        public_65fc622 : nop
        inc ecx
        cmp ecx, eax
        jl public_65fc600
        mov edi, dword ptr ss : [esp+0x7A0]
        public_65fc62e : nop
        inc esi
        add edx, 0xC
        cmp esi, edi
        jl public_65fc5f7
        public_65fc636 : nop
        lea ecx, ss:[esp+0x9F0]
        push ecx
        lea ecx, ss:[esp+0x564]
        mov dword ptr ss : [esp+0xC34], eax
        mov dword ptr ss : [esp+0xC38], edi
        call public_65fadb0
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [esp+0x38]
        shr eax, 7
        not al
        and al, 1
        mov dword ptr ss : [esp+0x2CC], edx
        mov byte ptr ss : [esp+0x12], al
        je public_65fc798
        mov ecx, dword ptr ss : [esp+0x30]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        jle public_65fc798
        lea ecx, ss:[esp+0x2A0]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], ecx
        public_65fc696 : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp byte ptr ds : [eax+edx], 0
        jne public_65fc784
        mov esi, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [public_66033a8]
        add esi, ebp
        test eax, eax
        jne public_65fc6bb
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc6bb : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea ebx, ss : [ebp+public_66031d4]
        lea edx, ds:[ebx-0x24]
        push edx
        lea edx, ss:[esp+0x108]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x100]
        lea edi, ss:[esp+0x2F4]
        rep movsd
        jne public_65fc6fc
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc6fc : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x1E4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fc71e
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc71e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2F4]
        push edx
        lea edx, ss:[esp+0x204]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x200]
        push eax
        lea ecx, ss:[esp+0x1E4]
        push ecx
        lea edx, ss:[esp+0xCC]
        push edx
        call public_65fbdf0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD4]
        mov ebx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax-4], ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        add esp, 0xC
        add eax, 0xC
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x18]
        public_65fc784 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        inc eax
        add ebp, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fc696
        public_65fc798 : nop
        fld dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x60]
        fmul qword ptr ds : [public_6601338]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ds : [esi+public_6603264]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [esi+public_6603268]
        mov dword ptr ss : [esp+0x3C], edx
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x78]
        fsub dword ptr ds : [esi+public_660326c]
        mov dword ptr ss : [esp+0x40], eax
        cmp dword ptr ss : [esp+0x24], 1
        fstp dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x44], ecx
        lea eax, ss:[esp+0xA8]
        jl public_65fc7fe
        lea eax, ss:[esp+0x24]
        public_65fc7fe : nop
        fild dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x24]
        mov al, byte ptr ss : [esp+0x13]
        mov edx, dword ptr ss : [esp+0x58]
        fdivr dword ptr ds : [public_66011e0]
        dec ecx
        test al, al
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x164], edx
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x44]
        je public_65fc859
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x13C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x134], eax
        mov dword ptr ss : [esp+0x138], ecx
        jmp public_65fc85b
        public_65fc859 : nop
        fstp st(0)
        public_65fc85b : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_65fc8e5
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fc87a
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fc87a : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ecx*8]
        lea ecx, ds : [ecx*4+public_66031b0]
        push ecx
        lea ecx, ss:[esp+0x1F4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        lea edx, ss:[esp+0x124]
        push edx
        lea eax, ss:[esp+0x1F4]
        push eax
        lea ecx, ss:[esp+0xE4]
        push ecx
        call public_65fbdf0
        fld dword ptr ss : [esp+0xE8]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+eax*4+0x140]
        add esp, 0xC
        fld dword ptr ss : [esp+0xE0]
        fstp dword ptr ss : [esp+eax*4+0x138]
        fld dword ptr ss : [esp+0xE4]
        fstp dword ptr ss : [esp+eax*4+0x13C]
        public_65fc8e5 : nop
        mov edx, dword ptr ss : [esp+0x164]
        lea eax, ss:[esp+0x19C]
        push eax
        lea ecx, ss:[esp+0x138]
        push ecx
        lea ecx, ss:[esp+0x7B0]
        mov dword ptr ss : [esp+0x1D4], edx
        call public_65fafc0
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_65fc95a
        mov edx, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edx+0x38]
        mov ecx, dword ptr ss : [esp+0x1CC]
        fmul dword ptr ds : [public_66013c0]
        xor eax, eax
        test ecx, ecx
        fstp dword ptr ss : [esp+0x14]
        jle public_65fc95a
        public_65fc935 : nop
        fld dword ptr ss : [esp+0x14]
        inc eax
        fmul dword ptr ss : [esp+eax*4+0x298]
        fadd dword ptr ss : [esp+eax*4+0x198]
        fstp dword ptr ss : [esp+eax*4+0x198]
        mov ecx, dword ptr ss : [esp+0x1CC]
        cmp eax, ecx
        jl public_65fc935
        public_65fc95a : nop
        lea eax, ss:[esp+0x268]
        push eax
        lea ecx, ss:[esp+0x1A0]
        push ecx
        lea ecx, ss:[esp+0x9F8]
        call public_65fafc0
        lea eax, ds : [esi+public_6603264]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x9C], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        mov dword ptr ss : [esp+0xA0], ecx
        mov dword ptr ss : [esp+0xA4], edx
        mov dword ptr ss : [esp+0x18], 0
        jle public_65fcb6d
        lea eax, ss:[esp+0x270]
        mov ebp, offset public_66032b0
        mov dword ptr ss : [esp+0x14], eax
        xor ebx, ebx
        nop 
        public_65fc9c0 : nop
        mov edi, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx+esi*4]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+0x2C]
        cmp byte ptr ds : [esi+eax], 0
        jne public_65fca13
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        fstp dword ptr ss : [esp+0xAC]
        fld dword ptr ds : [eax-0x10]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ds : [eax-0xC]
        fstp dword ptr ss : [esp+0xB4]
        public_65fca13 : nop
        fld dword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0xE8]
        fmul dword ptr ds : [public_6601328]
        push ecx
        lea edx, ss:[esp+0x25C]
        push edx
        fstp dword ptr ss : [esp+0xF0]
        fld dword ptr ss : [esp+0xB8]
        fmul dword ptr ds : [public_6601328]
        fstp dword ptr ss : [esp+0xF4]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [public_6601328]
        fstp dword ptr ss : [esp+0xF8]
        call public_65fbd30
        mov esi, eax
        mov eax, dword ptr ds : [public_66033a8]
        add esp, 8
        test eax, eax
        jne public_65fca7c
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fca7c : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x238]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fca9e
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fca9e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds : [ebx+public_66031d4]
        push edx
        lea edx, ss:[esp+0x238]
        push edx
        lea edx, ss:[esp+0x218]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        lea edi, ds : [ebx+public_660330c]
        mov ecx, 9
        lea esi, ss:[esp+0x210]
        rep movsd
        jne public_65fcae2
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fcae2 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        add edx, 4
        push edx
        lea edx, ds : [ebx+public_66032e8]
        push edx
        lea edx, ss:[esp+0xFC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xF4]
        fadd dword ptr ss : [ebp-8]
        lea eax, ss:[ebp+4]
        add ebx, 0x24
        add ebp, 0xC
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0xF8]
        mov ecx, dword ptr ss : [esp+0x90]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ss : [esp+0x94]
        fadd dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x30]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fc9c0
        public_65fcb6d : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_65fcbc5
        mov eax, dword ptr ss : [esp+0x60]
        fld dword ptr ds : [eax+public_66032a8]
        fsub dword ptr ss : [esp+0x9C]
        fld dword ptr ds : [eax+public_66032ac]
        fsub dword ptr ss : [esp+0xA0]
        fld dword ptr ds : [eax+public_66032b0]
        fsub dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x88]
        fxch 
        fstp dword ptr ss : [esp+0x168]
        mov dword ptr ss : [esp+0x170], edx
        fstp dword ptr ss : [esp+0x16C]
        public_65fcbc5 : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_65fcc4f
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        jne public_65fcbe4
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fcbe4 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ecx*8]
        lea ecx, ds : [ecx*4+public_66032e8]
        push ecx
        lea ecx, ss:[esp+0x1D4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        lea edx, ss:[esp+0x124]
        push edx
        lea eax, ss:[esp+0x1D4]
        push eax
        lea ecx, ss:[esp+0xD8]
        push ecx
        call public_65fbdf0
        fld dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+eax*4+0x174]
        add esp, 0xC
        fld dword ptr ss : [esp+0xD4]
        fstp dword ptr ss : [esp+eax*4+0x16C]
        fld dword ptr ss : [esp+0xD8]
        fstp dword ptr ss : [esp+eax*4+0x170]
        public_65fcc4f : nop
        mov ecx, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [public_6601318]
        xor eax, eax
        test ecx, ecx
        jle public_65fcc7b
        nop 
        public_65fcc60 : nop
        fld dword ptr ss : [esp+eax*4+0x134]
        inc eax
        cmp eax, ecx
        fsub dword ptr ss : [esp+eax*4+0x164]
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jl public_65fcc60
        public_65fcc7b : nop
        fld dword ptr ss : [esp+0x5C]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x5C]
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jne public_65fccab
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_66013b8]
        fnstsw ax
        test ah, 5
        jnp public_65fc798
        public_65fccab : nop
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_66011e0]
        fsub dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_65fccdc
        lea eax, ss:[esp+0x20]
        public_65fccdc : nop
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        fsub qword ptr ds : [public_6601320]
        mov dword ptr ss : [esp+0x20], edx
        fabs 
        fcomp qword ptr ds : [public_66013c8]
        fnstsw ax
        test ah, 0x41
        jnp public_65fcd10
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 1
        jne public_65fc3b0
        public_65fcd10 : nop
        mov eax, dword ptr ss : [esp+0x30]
        xor ebp, ebp
        cmp eax, ebp
        jle public_65fce49
        mov dword ptr ss : [esp+0x28], ebp
        mov ebx, offset public_6603300
        public_65fcd27 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+0x2C]
        cmp byte ptr ds : [ecx+ebp], 0
        jne public_65fce2e
        fld dword ptr ds : [ebx-0x18]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        fstp dword ptr ss : [esp+0x100]
        fld dword ptr ds : [ebx-0xC]
        fstp dword ptr ss : [esp+0x104]
        fld dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x108]
        fld dword ptr ds : [ebx-0x14]
        fstp dword ptr ss : [esp+0x10C]
        fld dword ptr ds : [ebx-8]
        fstp dword ptr ss : [esp+0x110]
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x114]
        fld dword ptr ds : [ebx-0x10]
        fstp dword ptr ss : [esp+0x118]
        fld dword ptr ds : [ebx-4]
        fstp dword ptr ss : [esp+0x11C]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x120]
        jne public_65fcda4
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fcda4 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0x104]
        push ecx
        lea ecx, ss:[esp+0x218]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x210]
        lea edi, ss:[esp+0x234]
        rep movsd
        jne public_65fcde6
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fcde6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x234]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx+0x1C]
        add eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+0xC], edx
        public_65fce2e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        inc ebp
        add ecx, 0x10
        add ebx, 0x24
        cmp ebp, eax
        mov dword ptr ss : [esp+0x28], ecx
        jl public_65fcd27
        public_65fce49 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC28
        ret 
        UNREACHABLE_TRAP(0x65fc000)
    }
}

#undef public_65fc032
#undef public_65fc06d
#undef public_65fc084
#undef public_65fc091
#undef public_65fc120
#undef public_65fc1ce
#undef public_65fc1f4
#undef public_65fc20d
#undef public_65fc269
#undef public_65fc27c
#undef public_65fc2bd
#undef public_65fc323
#undef public_65fc390
#undef public_65fc398
#undef public_65fc3b0
#undef public_65fc3d6
#undef public_65fc400
#undef public_65fc429
#undef public_65fc453
#undef public_65fc499
#undef public_65fc4d9
#undef public_65fc50c
#undef public_65fc57a
#undef public_65fc58c
#undef public_65fc5a0
#undef public_65fc5f7
#undef public_65fc600
#undef public_65fc622
#undef public_65fc62e
#undef public_65fc636
#undef public_65fc696
#undef public_65fc6bb
#undef public_65fc6fc
#undef public_65fc71e
#undef public_65fc784
#undef public_65fc798
#undef public_65fc7fe
#undef public_65fc859
#undef public_65fc85b
#undef public_65fc87a
#undef public_65fc8e5
#undef public_65fc935
#undef public_65fc95a
#undef public_65fc9c0
#undef public_65fca13
#undef public_65fca7c
#undef public_65fca9e
#undef public_65fcae2
#undef public_65fcb6d
#undef public_65fcbc5
#undef public_65fcbe4
#undef public_65fcc4f
#undef public_65fcc60
#undef public_65fcc7b
#undef public_65fccab
#undef public_65fccdc
#undef public_65fcd10
#undef public_65fcd27
#undef public_65fcda4
#undef public_65fcde6
#undef public_65fce2e
#undef public_65fce49
