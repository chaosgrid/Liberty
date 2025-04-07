#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f27c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f27fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28750);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e060);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f28022 _public_6f28022
#define public_6f28028 _public_6f28028
#define public_6f28051 _public_6f28051
#define public_6f2807c _public_6f2807c
#define public_6f28082 _public_6f28082
#define public_6f280a5 _public_6f280a5
#define public_6f280d0 _public_6f280d0
#define public_6f280d6 _public_6f280d6
#define public_6f280f0 _public_6f280f0
#define public_6f28126 _public_6f28126
#define public_6f2812b _public_6f2812b
#define public_6f28193 _public_6f28193
#define public_6f281c7 _public_6f281c7
#define public_6f281f2 _public_6f281f2
#define public_6f281fa _public_6f281fa
#define public_6f28200 _public_6f28200
#define public_6f28216 _public_6f28216
#define public_6f2824c _public_6f2824c
#define public_6f28251 _public_6f28251
#define public_6f282b9 _public_6f282b9
#define public_6f282ee _public_6f282ee
#define public_6f28319 _public_6f28319
#define public_6f28321 _public_6f28321
#define public_6f28327 _public_6f28327
#define public_6f28340 _public_6f28340
#define public_6f283c2 _public_6f283c2
#define public_6f283f7 _public_6f283f7
#define public_6f28422 _public_6f28422
#define public_6f2842a _public_6f2842a
#define public_6f28430 _public_6f28430
#define public_6f28446 _public_6f28446
#define public_6f284c8 _public_6f284c8
#define public_6f284fd _public_6f284fd
#define public_6f28528 _public_6f28528
#define public_6f28530 _public_6f28530
#define public_6f28536 _public_6f28536
#define public_6f28550 _public_6f28550
#define public_6f285d2 _public_6f285d2
#define public_6f285fa _public_6f285fa
#define public_6f28625 _public_6f28625
#define public_6f2862d _public_6f2862d
#define public_6f28633 _public_6f28633
#define public_6f28674 _public_6f28674
#define public_6f286a0 _public_6f286a0
#define public_6f286c7 _public_6f286c7
#define public_6f286f9 _public_6f286f9
#define public_6f286fd _public_6f286fd
#define public_6f28733 _public_6f28733
#define public_6f2873c _public_6f2873c

PROC_DECLARE(0x6f27fe0, internal_6f27fe0, public_6f27fe0);
extern "C" NAKED register_t __cdecl internal_6f27fe0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6f5e168]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        push edi
        mov dword ptr ss : [esp+0x10], 0
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f28022
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28028
        public_6f28022 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28028 : nop
        push esi
        call public_6f4b410
        mov ebx, dword ptr ss : [ebp+0xC]
        add esp, 4
        test eax, eax
        jne public_6f28051
        push esi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ss : [esp+0xC], 0x10
        public_6f28051 : nop
        mov esi, dword ptr ds : [public_6f5e16c]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2807c
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28082
        public_6f2807c : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28082 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f280a5
        push esi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ds : [ebx+0x24], eax
        or dword ptr ss : [esp+0xC], 0x20
        public_6f280a5 : nop
        mov esi, dword ptr ds : [public_6f5e158]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f280d0
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f280d6
        public_6f280d0 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f280d6 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f281c7
        mov edi, 1
        lea esp, ss:[esp]
        public_6f280f0 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f28126
        push esi
        call public_6f4b900
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        call public_6f4b250
        jmp public_6f2812b
        public_6f28126 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f2812b : nop
        push eax
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f281f2
        inc edi
        cmp edi, 3
        jbe public_6f280f0
        push 0x3F800000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x24]
        push 0x40000000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 0x24
        push eax
        push ecx
        push edx
        public_6f28193 : nop
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        fld dword ptr ss : [esp+0x24]
        call public_6f57f16
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx], eax
        call public_6f57f16
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+4], eax
        call public_6f57f16
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], eax
        or dword ptr ss : [esp+0xC], 1
        public_6f281c7 : nop
        mov esi, dword ptr ds : [public_6f5e184]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f281fa
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28200
        public_6f281f2 : nop
        push 0
        push 0
        push 0
        jmp public_6f28193
        public_6f281fa : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28200 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f282ee
        mov edi, 1
        public_6f28216 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2824c
        push esi
        call public_6f4b900
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        call public_6f4b250
        jmp public_6f28251
        public_6f2824c : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f28251 : nop
        push eax
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f28319
        inc edi
        cmp edi, 3
        jbe public_6f28216
        push 0x3F800000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x1C]
        push 0x40000000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0x24
        push eax
        push ecx
        push edx
        public_6f282b9 : nop
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x2C], eax
        mov eax, dword ptr ss : [esp+0xC]
        or eax, 0x800
        mov dword ptr ds : [ebx+0x30], ecx
        mov dword ptr ds : [ebx+0x34], edx
        mov dword ptr ds : [ebx+0x38], 0x3F800000
        mov dword ptr ss : [esp+0xC], eax
        public_6f282ee : nop
        mov esi, dword ptr ds : [public_6f5e17c]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f28321
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28327
        public_6f28319 : nop
        push 0
        push 0
        push 0
        jmp public_6f282b9
        public_6f28321 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28327 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f283f7
        mov edi, 1
        lea ecx, ds:[ecx]
        public_6f28340 : nop
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        fild qword ptr ss : [esp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6f27c10
        push eax
        call public_6f4b410
        add esp, 0xC
        test eax, eax
        jne public_6f28422
        inc edi
        cmp edi, 3
        jbe public_6f28340
        push 0x3F800000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x1C]
        push 0x40000000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0x24
        push eax
        push ecx
        push edx
        public_6f283c2 : nop
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ss : [esp+0xC]
        or eax, 0x200
        mov dword ptr ds : [ebx+0x40], ecx
        mov dword ptr ds : [ebx+0x44], edx
        mov dword ptr ds : [ebx+0x48], 0x3F800000
        mov dword ptr ss : [esp+0xC], eax
        public_6f283f7 : nop
        mov esi, dword ptr ds : [public_6f5e180]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2842a
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28430
        public_6f28422 : nop
        push 0
        push 0
        push 0
        jmp public_6f283c2
        public_6f2842a : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28430 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f284fd
        mov edi, 1
        public_6f28446 : nop
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        fild qword ptr ss : [esp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6f27c10
        push eax
        call public_6f4b410
        add esp, 0xC
        test eax, eax
        jne public_6f28528
        inc edi
        cmp edi, 3
        jbe public_6f28446
        push 0x3F800000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x1C]
        push 0x40000000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0x24
        push eax
        push ecx
        push edx
        public_6f284c8 : nop
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x4C], eax
        mov eax, dword ptr ss : [esp+0xC]
        or eax, 0x400
        mov dword ptr ds : [ebx+0x50], ecx
        mov dword ptr ds : [ebx+0x54], edx
        mov dword ptr ds : [ebx+0x58], 0x3F800000
        mov dword ptr ss : [esp+0xC], eax
        public_6f284fd : nop
        mov esi, dword ptr ds : [public_6f5e15c]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f28530
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28536
        public_6f28528 : nop
        push 0
        push 0
        push 0
        jmp public_6f284c8
        public_6f28530 : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28536 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f285fa
        mov edi, 1
        lea esp, ss:[esp]
        public_6f28550 : nop
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        fild qword ptr ss : [esp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6f27c10
        push eax
        call public_6f4b410
        add esp, 0xC
        test eax, eax
        jne public_6f28625
        inc edi
        cmp edi, 3
        jbe public_6f28550
        push 0x3F800000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x1C]
        push 0x40000000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x2C]
        push 0x40400000
        push esi
        call public_6f27c10
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0x24
        push eax
        push ecx
        push edx
        public_6f285d2 : nop
        lea ecx, ss:[esp+0x30]
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ds:[ebx+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        or dword ptr ss : [esp+0xC], 2
        public_6f285fa : nop
        mov esi, dword ptr ds : [public_6f5e170]
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2862d
        push edi
        call public_6f4b900
        push esi
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f28633
        public_6f28625 : nop
        push 0
        push 0
        push 0
        jmp public_6f285d2
        public_6f2862d : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f28633 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f28674
        lea edx, ss:[esp+0x24]
        push esi
        push edx
        call public_6f28750
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ebx+0x7C], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        or eax, 0x40
        mov dword ptr ds : [ebx+0x80], ecx
        mov dword ptr ds : [ebx+0x84], edx
        mov dword ptr ss : [esp+0xC], eax
        public_6f28674 : nop
        mov eax, dword ptr ds : [public_6f5e178]
        push eax
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        call public_6f2e140
        add esp, 0xC
        test al, al
        je public_6f286a0
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        or eax, 0x100
        mov dword ptr ds : [ebx+0x28], edx
        mov dword ptr ss : [esp+0xC], eax
        public_6f286a0 : nop
        mov eax, dword ptr ds : [public_6f5e160]
        push eax
        lea esi, ds:[ebx+0x18]
        push edi
        push esi
        call public_6f2e060
        add esp, 0xC
        test al, al
        je public_6f286c7
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        or eax, 4
        mov dword ptr ds : [ebx+0x74], ecx
        mov dword ptr ss : [esp+0xC], eax
        public_6f286c7 : nop
        mov edx, dword ptr ds : [public_6f5e164]
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        lea esi, ds:[ebx+0x1C]
        push esi
        call public_6f2e060
        add esp, 0xC
        test al, al
        je public_6f286f9
        fld dword ptr ds : [esi]
        mov esi, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6f5a230]
        or esi, 8
        fstp dword ptr ds : [ebx+0x8C]
        jmp public_6f286fd
        public_6f286f9 : nop
        mov esi, dword ptr ss : [esp+0xC]
        public_6f286fd : nop
        mov ecx, dword ptr ds : [public_6f5e174]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push edx
        lea eax, ds:[ebx+0x88]
        push eax
        call public_6f2e060
        add esp, 0xC
        test al, al
        je public_6f28733
        fld dword ptr ds : [ebx+0x88]
        or esi, 0x80
        fmul dword ptr ds : [public_6f5a230]
        fstp dword ptr ds : [ebx+0x88]
        public_6f28733 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6f2873c
        mov dword ptr ds : [eax], esi
        public_6f2873c : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f27fe0)
    }
}

#undef public_6f28022
#undef public_6f28028
#undef public_6f28051
#undef public_6f2807c
#undef public_6f28082
#undef public_6f280a5
#undef public_6f280d0
#undef public_6f280d6
#undef public_6f280f0
#undef public_6f28126
#undef public_6f2812b
#undef public_6f28193
#undef public_6f281c7
#undef public_6f281f2
#undef public_6f281fa
#undef public_6f28200
#undef public_6f28216
#undef public_6f2824c
#undef public_6f28251
#undef public_6f282b9
#undef public_6f282ee
#undef public_6f28319
#undef public_6f28321
#undef public_6f28327
#undef public_6f28340
#undef public_6f283c2
#undef public_6f283f7
#undef public_6f28422
#undef public_6f2842a
#undef public_6f28430
#undef public_6f28446
#undef public_6f284c8
#undef public_6f284fd
#undef public_6f28528
#undef public_6f28530
#undef public_6f28536
#undef public_6f28550
#undef public_6f285d2
#undef public_6f285fa
#undef public_6f28625
#undef public_6f2862d
#undef public_6f28633
#undef public_6f28674
#undef public_6f286a0
#undef public_6f286c7
#undef public_6f286f9
#undef public_6f286fd
#undef public_6f28733
#undef public_6f2873c
