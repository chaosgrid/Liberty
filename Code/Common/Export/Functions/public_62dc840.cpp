#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289ef0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dbbe0);
CLANG_FORWARD_PROC_SYMBOL(public_62dbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc840);
CLANG_FORWARD_PROC_SYMBOL(public_62df830);
CLANG_FORWARD_PROC_SYMBOL(public_62e1410);
CLANG_FORWARD_PROC_SYMBOL(public_62e74e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_62dc8e2 _public_62dc8e2
#define public_62dc920 _public_62dc920
#define public_62dc92e _public_62dc92e
#define public_62dc933 _public_62dc933
#define public_62dc942 _public_62dc942
#define public_62dc944 _public_62dc944
#define public_62dc9b2 _public_62dc9b2
#define public_62dc9dd _public_62dc9dd
#define public_62dc9f4 _public_62dc9f4
#define public_62dc9fb _public_62dc9fb
#define public_62dca19 _public_62dca19
#define public_62dca1b _public_62dca1b
#define public_62dca46 _public_62dca46
#define public_62dca7b _public_62dca7b
#define public_62dcad7 _public_62dcad7
#define public_62dcae7 _public_62dcae7
#define public_62dcafb _public_62dcafb
#define public_62dcb02 _public_62dcb02
#define public_62dcb25 _public_62dcb25
#define public_62dcb42 _public_62dcb42
#define public_62dcb4b _public_62dcb4b
#define public_62dcb5c _public_62dcb5c
#define public_62dcb5e _public_62dcb5e
#define public_62dcb63 _public_62dcb63
#define public_62dcba0 _public_62dcba0
#define public_62dcbc2 _public_62dcbc2
#define public_62dcbd8 _public_62dcbd8
#define public_62dcc34 _public_62dcc34
#define public_62dcc40 _public_62dcc40
#define public_62dcc5b _public_62dcc5b
#define public_62dcc5f _public_62dcc5f
#define public_62dcd7b _public_62dcd7b
#define public_62dcd7d _public_62dcd7d
#define public_62dcd87 _public_62dcd87
#define public_62dcda3 _public_62dcda3
#define public_62dcdcf _public_62dcdcf
#define public_62dce54 _public_62dce54
#define public_62dcf22 _public_62dcf22
#define public_62dcf48 _public_62dcf48
#define public_62dcf4a _public_62dcf4a
#define public_62dcfe6 _public_62dcfe6
#define public_62dd11e _public_62dd11e
#define public_62dd122 _public_62dd122
#define public_62dd175 _public_62dd175
#define public_62dd1c8 _public_62dd1c8
#define public_62dd24d _public_62dd24d
#define public_62dd273 _public_62dd273
#define public_62dd374 _public_62dd374
#define public_62dd376 _public_62dd376
#define public_62dd381 _public_62dd381
#define public_62dd39a _public_62dd39a
#define public_62dd39c _public_62dd39c
#define public_62dd3c0 _public_62dd3c0

PROC_DECLARE(0x62dc840, internal_62dc840, public_62dc840);
extern "C" NAKED register_t __cdecl internal_62dc840()
{
    __asm
    {
        mov eax, 0x20C0
        call public_6391dc0
        push ebx
        mov ebx, ecx
        mov dword ptr ds : [ebx+0x16C], 3
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+0x170], edi
        mov dword ptr ds : [ebx+0x17C], edi
        mov dword ptr ds : [ebx+0x178], edi
        mov dword ptr ds : [ebx+0x174], edi
        mov byte ptr ds : [ebx+0x180], 0
        mov byte ptr ds : [ebx+0x181], 0
        mov dword ptr ds : [ebx+0x260], edi
        mov byte ptr ds : [ebx+0x264], 0
        mov eax, dword ptr ds : [ebx+0x1C0]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 0x200
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov esi, dword ptr ds : [esi+8]
        lea ebp, ds:[ebx+0x1B4]
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ds : [eax+0xC0]
        cmp ecx, 0xA
        mov dword ptr ss : [esp+0x38], ecx
        jne public_62dc8e2
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dc8e2 : nop
        mov byte ptr ss : [esp+0x16], 0
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x50], 3
        mov dword ptr ss : [esp+0x54], 5
        mov dword ptr ss : [esp+0x58], 0xB
        mov dword ptr ss : [esp+0x5C], 0xD
        mov dword ptr ss : [esp+0x60], 0x12
        xor edx, edx
        lea esp, ss:[esp]
        public_62dc920 : nop
        cmp dword ptr ss : [esp+edx*4+0x4C], ecx
        je public_62dc92e
        inc edx
        cmp edx, 6
        jl public_62dc920
        jmp public_62dc933
        public_62dc92e : nop
        mov byte ptr ss : [esp+0x16], 1
        public_62dc933 : nop
        mov eax, dword ptr ds : [eax+0xF0]
        cmp eax, edi
        je public_62dc942
        lea ecx, ds:[eax-8]
        jmp public_62dc944
        public_62dc942 : nop
        xor ecx, ecx
        public_62dc944 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov esi, eax
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x48], esi
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62dc9f4
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        je public_62dc9dd
        mov byte ptr ds : [ebx+0x1B0], 1
        mov eax, dword ptr ds : [public_63fc994]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0xC4FA0000
        jne public_62dc9b2
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dc9b2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jmp public_62dc9fb
        public_62dc9dd : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x1B0], 0
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dc9f4 : nop
        mov byte ptr ds : [ebx+0x1B0], 1
        public_62dc9fb : nop
        mov eax, dword ptr ds : [ebx+0x1C0]
        add eax, 0xF0
        mov dword ptr ss : [esp+0x74], 0x3F800000
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_62dca19
        lea ecx, ds:[eax-8]
        jmp public_62dca1b
        public_62dca19 : nop
        xor ecx, ecx
        public_62dca1b : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x74]
        push edx
        call dword ptr ds : [eax+0x4C]
        fld dword ptr ss : [esp+0x74]
        fcomp qword ptr ds : [public_63a0460]
        fnstsw ax
        test ah, 5
        jp public_62dca46
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dca46 : nop
        mov ecx, dword ptr ds : [ebx+0x1C0]
        mov dword ptr ss : [esp+0x70], edi
        mov ecx, dword ptr ds : [ecx+8]
        push 0xFD58
        lea eax, ss:[esp+0x74]
        push eax
        add ecx, 0x34
        call public_62e74e0
        cmp dword ptr ss : [esp+0x70], edi
        jne public_62dca7b
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dca7b : nop
        mov edx, dword ptr ds : [ebx+0x1C0]
        mov dword ptr ss : [esp+0xCC], edi
        mov dword ptr ss : [esp+0xC8], 0x800
        mov ecx, dword ptr ds : [edx+0xEC]
        mov eax, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [eax+0xC]
        cmp eax, edi
        je public_62dcad7
        add esi, 0x24
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x54], ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x60], 0x469C4000
        call dword ptr ds : [edx+0x1C]
        public_62dcad7 : nop
        mov dword ptr ss : [esp+0x44], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x64], edi
        public_62dcae7 : nop
        mov eax, dword ptr ss : [esp+0x64]
        test eax, eax
        jne public_62dcafb
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edx+0x800]
        jmp public_62dcb02
        public_62dcafb : nop
        mov eax, dword ptr ss : [esp+0xCC]
        public_62dcb02 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x3C], 0
        jbe public_62dcda3
        mov edi, dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x10], eax
        public_62dcb25 : nop
        mov eax, dword ptr ss : [esp+0x64]
        test eax, eax
        jne public_62dcb4b
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [ecx+edi*8]
        test eax, eax
        je public_62dcb42
        lea esi, ds:[eax-8]
        mov ebp, 0xFD58
        jmp public_62dcb63
        public_62dcb42 : nop
        xor esi, esi
        mov ebp, 0xFD58
        jmp public_62dcb63
        public_62dcb4b : nop
        cmp edi, dword ptr ss : [esp+0xCC]
        jae public_62dcb5c
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx]
        jmp public_62dcb5e
        public_62dcb5c : nop
        xor esi, esi
        public_62dcb5e : nop
        mov ebp, 7
        public_62dcb63 : nop
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x7C], 0
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x6C], esi
        call dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [esp+0x7C]
        test ebp, eax
        je public_62dcd87
        mov edx, dword ptr ds : [esi]
        test al, 7
        mov ecx, esi
        setne byte ptr ss : [esp+0x17]
        call dword ptr ds : [edx+0x20]
        xor ebp, ebp
        lea ecx, ds:[ebx+0x6C]
        lea ecx, ds:[ecx]
        public_62dcba0 : nop
        cmp dword ptr ds : [ecx], eax
        je public_62dcc34
        inc ebp
        add ecx, 4
        cmp ebp, 8
        jl public_62dcba0
        mov ebp, dword ptr ds : [ebx+0x68]
        inc ebp
        and ebp, 0x80000007
        jns public_62dcbc2
        dec ebp
        or ebp, 0xFFFFFFF8
        inc ebp
        public_62dcbc2 : nop
        mov dword ptr ds : [ebx+0x68], ebp
        imul ebp, 0x1C
        lea ebp, ds:[ebx+ebp+0x8C]
        push ebp
        push esi
        mov ecx, ebx
        call public_62dbbe0
        public_62dcbd8 : nop
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [public_639fb58]
        fnstsw ax
        test ah, 5
        jnp public_62dcd87
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [public_63a05cc]
        fnstsw ax
        test ah, 0x41
        je public_62dcd87
        mov al, byte ptr ss : [esp+0x17]
        fld dword ptr ss : [ebp]
        test al, al
        fmul dword ptr ds : [public_639e0e0]
        je public_62dcc40
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        je public_62dcc40
        fld dword ptr ds : [public_63a05c8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62dcc5b
        mov dword ptr ss : [esp+0x18], 0x443B8000
        fstp st(0)
        jmp public_62dcc5f
        public_62dcc34 : nop
        imul ebp, 0x1C
        lea ebp, ds:[ebx+ebp+0x8C]
        jmp public_62dcbd8
        public_62dcc40 : nop
        fld dword ptr ds : [public_63a05c4]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62dcc5b
        mov dword ptr ss : [esp+0x18], 0x437A0000
        fstp st(0)
        jmp public_62dcc5f
        public_62dcc5b : nop
        fstp dword ptr ss : [esp+0x18]
        public_62dcc5f : nop
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [ebp]
        add eax, 0x24
        push ebp
        push eax
        fst dword ptr ss : [ebp]
        fld dword ptr ds : [ebx+0x1FC]
        fmul qword ptr ds : [public_639df88]
        faddp 
        fstp dword ptr ss : [ebp]
        call public_62e1410
        add esp, 8
        test eax, eax
        je public_62dcd7d
        fld dword ptr ss : [ebp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_639c13c]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x14]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x54]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        mov edx, 0x5F3759DF
        fsub dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x40], edx
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x40]
        fmulp 
        fcom dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_62dcd7b
        mov eax, dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x44]
        mov ecx, 7
        mov esi, ebp
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x6C], eax
        jmp public_62dcd7d
        public_62dcd7b : nop
        fstp st(0)
        public_62dcd7d : nop
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [ebp]
        public_62dcd87 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x34]
        inc edi
        add ecx, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x10], ecx
        jb public_62dcb25
        public_62dcda3 : nop
        mov eax, dword ptr ss : [esp+0x64]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x64], eax
        jl public_62dcae7
        mov esi, dword ptr ss : [esp+0x6C]
        xor ebp, ebp
        cmp esi, ebp
        jne public_62dcdcf
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dcdcf : nop
        cmp dword ptr ss : [esp+0x38], 2
        jne public_62dce54
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x28]
        mov ecx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x30]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62dce54
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dce54 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x78]
        mov dword ptr ds : [ebx+0x260], eax
        mov byte ptr ds : [ebx+0x264], 1
        mov dword ptr ss : [esp+0x78], ebp
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        test byte ptr ss : [esp+0x78], 7
        setne al
        test al, al
        mov byte ptr ss : [esp+0x17], al
        je public_62dd11e
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        mov ecx, 0x5F3759DF
        fsub dword ptr ds : [edi+0x28]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [esp+0x44], 0
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fst dword ptr ss : [esp+0x34]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        sar eax, 1
        sub ecx, eax
        lea eax, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x10], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x140]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x34]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 0x41
        jp public_62dcf22
        mov byte ptr ds : [ebx+0x181], 1
        public_62dcf22 : nop
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        je public_62dd122
        mov eax, dword ptr ds : [ebx+0x1C0]
        add eax, 0xF0
        mov dword ptr ss : [esp+0x34], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62dcf48
        lea ecx, ds:[eax-8]
        jmp public_62dcf4a
        public_62dcf48 : nop
        xor ecx, ecx
        public_62dcf4a : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp ecx, ebp
        je public_62dd122
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, eax
        fld dword ptr ds : [ecx]
        mov edx, 0x5F3759DF
        fsub dword ptr ds : [edi+0x24]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [edi+0x28]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edi+0x2C]
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
        fst dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        sar eax, 1
        sub edx, eax
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ds : [public_639ff90]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62dcfe6
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], eax
        jmp public_62dd122
        public_62dcfe6 : nop
        lea edi, ds:[ebx+0x184]
        mov ecx, 7
        lea esi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ebx+0x16C], 1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        sub esp, 0xC
        fld dword ptr ss : [esp+0xB0]
        lea ecx, ss:[esp+0x58]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [ebx+0x170], eax
        mov byte ptr ds : [ebx+0x180], 1
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA8]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x98]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x9C]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [eax+0x24]
        add ebx, 0x174
        fld dword ptr ss : [esp+0x50]
        pop edi
        fsub dword ptr ds : [eax+0x28]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [eax+0x2C]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fxch 
        fchs 
        mov dword ptr ds : [ebx], eax
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fchs 
        mov dword ptr ds : [ebx+4], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+8], edx
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dd11e : nop
        mov edi, dword ptr ss : [esp+0x48]
        public_62dd122 : nop
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_62e1410
        add esp, 8
        cmp eax, 1
        jne public_62dd175
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x181]
        lea eax, ss:[esp+0x80]
        lea ecx, ss:[esp+0x28]
        push edx
        push eax
        push edi
        push ecx
        lea edx, ss:[esp+0x9C]
        push edx
        mov ecx, ebx
        call public_62dbfb0
        cmp eax, ebp
        je public_62dd273
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dd175 : nop
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_62dd381
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x140]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_62dd1c8
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        public_62dd1c8 : nop
        fld dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+0x24]
        fadd dword ptr ds : [public_639b22c]
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x54]
        fld dword ptr ss : [esp+0x30]
        push edx
        fsub dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x38]
        push ecx
        fsub dword ptr ds : [eax+4]
        push eax
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x38]
        call public_62df830
        add esp, 0x14
        cmp eax, 1
        jne public_62dd3c0
        public_62dd24d : nop
        push ebp
        lea eax, ss:[esp+0x84]
        push eax
        push edi
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x9C]
        push edx
        mov ecx, ebx
        call public_62dbfb0
        cmp eax, ebp
        jne public_62dd376
        public_62dd273 : nop
        lea edi, ds:[ebx+0x184]
        mov ecx, 7
        lea esi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ebx+0x16C], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ebx+0x170], eax
        mov byte ptr ds : [ebx+0x180], 0
        fsub dword ptr ds : [ecx+0x24]
        lea eax, ds:[ebx+0x174]
        mov edx, eax
        fstp dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ds : [ecx+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], esi
        fstp dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+8], esi
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
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
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [esp+0x54]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x80]
        fchs 
        fld dword ptr ss : [esp+0x54]
        fchs 
        fmul dword ptr ds : [eax+8]
        fxch 
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [eax]
        faddp 
        fcomp dword ptr ds : [public_639c13c]
        fnstsw ax
        test ah, 5
        jp public_62dd374
        mov byte ptr ds : [ebx+0x180], 1
        public_62dd374 : nop
        xor eax, eax
        public_62dd376 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20C0
        ret 
        public_62dd381 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_62dd39a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_62dd39c
        public_62dd39a : nop
        xor eax, eax
        public_62dd39c : nop
        push 1
        lea edx, ss:[esp+0xAC]
        push edx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ds:[edi+0x24]
        push edx
        push eax
        call public_6289ef0
        add esp, 0x14
        cmp eax, ebp
        jne public_62dd24d
        public_62dd3c0 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x20C0
        ret 
        UNREACHABLE_TRAP(0x62dc840)
    }
}

#undef public_62dc8e2
#undef public_62dc920
#undef public_62dc92e
#undef public_62dc933
#undef public_62dc942
#undef public_62dc944
#undef public_62dc9b2
#undef public_62dc9dd
#undef public_62dc9f4
#undef public_62dc9fb
#undef public_62dca19
#undef public_62dca1b
#undef public_62dca46
#undef public_62dca7b
#undef public_62dcad7
#undef public_62dcae7
#undef public_62dcafb
#undef public_62dcb02
#undef public_62dcb25
#undef public_62dcb42
#undef public_62dcb4b
#undef public_62dcb5c
#undef public_62dcb5e
#undef public_62dcb63
#undef public_62dcba0
#undef public_62dcbc2
#undef public_62dcbd8
#undef public_62dcc34
#undef public_62dcc40
#undef public_62dcc5b
#undef public_62dcc5f
#undef public_62dcd7b
#undef public_62dcd7d
#undef public_62dcd87
#undef public_62dcda3
#undef public_62dcdcf
#undef public_62dce54
#undef public_62dcf22
#undef public_62dcf48
#undef public_62dcf4a
#undef public_62dcfe6
#undef public_62dd11e
#undef public_62dd122
#undef public_62dd175
#undef public_62dd1c8
#undef public_62dd24d
#undef public_62dd273
#undef public_62dd374
#undef public_62dd376
#undef public_62dd381
#undef public_62dd39a
#undef public_62dd39c
#undef public_62dd3c0
