#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_46eab0);
CLANG_FORWARD_PROC_SYMBOL(public_46ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4fa270);
CLANG_FORWARD_PROC_SYMBOL(public_4fc9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcb40);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4fa2b3 _public_4fa2b3
#define public_4fa2ca _public_4fa2ca
#define public_4fa466 _public_4fa466
#define public_4fa4b6 _public_4fa4b6
#define public_4fa4dd _public_4fa4dd
#define public_4fa530 _public_4fa530
#define public_4fa557 _public_4fa557
#define public_4fa581 _public_4fa581
#define public_4fa5b0 _public_4fa5b0
#define public_4fa5c0 _public_4fa5c0
#define public_4fa5e6 _public_4fa5e6
#define public_4fa5f6 _public_4fa5f6
#define public_4fa6da _public_4fa6da
#define public_4fa6e0 _public_4fa6e0
#define public_4fa8a1 _public_4fa8a1
#define public_4fa8a7 _public_4fa8a7
#define public_4faa1d _public_4faa1d
#define public_4faa23 _public_4faa23
#define public_4fab99 _public_4fab99
#define public_4fab9f _public_4fab9f
#define public_4fad15 _public_4fad15
#define public_4fad1b _public_4fad1b

PROC_DECLARE(0x4fa270, internal_4fa270, public_4fa270);
extern "C" NAKED register_t __cdecl internal_4fa270()
{
    __asm
    {
        sub esp, 0xF8
        fld dword ptr ss : [esp+0x100]
        push ebx
        fcomp dword ptr ds : [public_5c7474]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [eax+0x6C]
        fnstsw ax
        push esi
        push edi
        test ah, 0x44
        mov dword ptr ss : [esp+0x10], ecx
        jp public_4fa2b3
        test byte ptr ss : [ebp+0x70], 8
        je public_4fa2b3
        call public_54bc80
        test al, al
        jne public_4fa2b3
        mov edx, dword ptr ss : [ebp+0x6C]
        mov eax, dword ptr ds : [edx+0x78]
        mov dword ptr ss : [esp+0x10], eax
        public_4fa2b3 : nop
        mov ecx, dword ptr ss : [ebp+0x6C]
        fld dword ptr ds : [ecx+0x74]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_4fa2ca
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        public_4fa2ca : nop
        fld dword ptr ds : [ecx+0x60]
        mov esi, dword ptr ss : [esp+0x10C]
        fsub dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x24]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+0x64]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x10]
        mov edx, ecx
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [eax+4]
        fst dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x40], ecx
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x64]
        fmul dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x44], edx
        push ecx
        lea edx, ss:[esp+0xB8]
        fadd dword ptr ss : [esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0
        fchs 
        fstp dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x74], 0
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x54], 0
        fmul dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0xB0], 0
        fstp dword ptr ss : [esp+0xAC]
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0x50], eax
        call public_4e7090
        fld dword ptr ss : [esp+0x6C]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x74]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0xD0]
        push ecx
        mov ecx, esi
        call public_4e7090
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0xE8]
        push eax
        mov ecx, esi
        call public_4e7090
        fld dword ptr ss : [esp+0x54]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fchs 
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x100]
        push edx
        mov ecx, esi
        call public_4e7090
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa466
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa466 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
        push esi
        lea edx, ss:[esp+0xF8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x60]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x68]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa4b6
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa4b6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        lea edx, ss:[esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa4dd
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa4dd : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        push esi
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x78]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x80]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa530
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa530 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        lea edx, ss:[esp+0xC8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa557
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa557 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA8]
        push edx
        push esi
        lea edx, ss:[esp+0x98]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa581
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa581 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        push esi
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        dec ecx
        je public_4fa5b0
        mov dword ptr ss : [esp+0x1C], 0x3F000000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        jmp public_4fa5c0
        public_4fa5b0 : nop
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3F000000
        public_4fa5c0 : nop
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0xC]
        dec ecx
        fadd dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c75e8]
        je public_4fa5e6
        mov dword ptr ss : [esp+0x18], 0x3F0CCCCD
        mov dword ptr ss : [esp+0x24], 0x3F800000
        jmp public_4fa5f6
        public_4fa5e6 : nop
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x24], 0x3EE66666
        public_4fa5f6 : nop
        fld dword ptr ss : [esp+0x114]
        fmul dword ptr ds : [eax+0x58]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x114]
        fmul dword ptr ds : [eax+0x5C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x30]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x28]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fstp dword ptr ds : [public_674cb4]
        mov byte ptr ds : [public_674cae], al
        mov al, byte ptr ds : [public_674ca5]
        test al, al
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3F400000
        je public_4fa6e0
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fa6da
        mov eax, dword ptr ds : [public_674c84]
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        public_4fa6da : nop
        inc dword ptr ds : [public_674ca8]
        public_4fa6e0 : nop
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x40]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x44]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x48]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov ecx, dword ptr ds : [public_674c84]
        inc ecx
        mov dword ptr ds : [public_674c84], ecx
        mov ecx, offset public_674c7c
        call public_46ecd0
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [eax+0x48]
        mov esi, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x14]
        lea edx, ds:[esi-1]
        fmul dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x7C], edx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x40]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [public_674cae], al
        mov al, byte ptr ds : [public_674ca5]
        test al, al
        fstp dword ptr ds : [public_674cb4]
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3F000000
        je public_4fa8a7
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fa8a1
        add esi, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], esi
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ds : [public_674c84]
        public_4fa8a1 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fa8a7 : nop
        mov edx, dword ptr ds : [public_674c80]
        mov al, byte ptr ds : [public_674cac]
        lea ecx, ds:[esi+esi*2]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0xF0]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xF4]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xF8]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_674c84]
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        lea edx, ds:[eax-1]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ds : [public_674cb0], 0x3F000000
        je public_4faa23
        mov ecx, dword ptr ds : [public_674ca8]
        and ecx, 3
        cmp cl, 3
        jne public_4faa1d
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4faa1d : nop
        inc dword ptr ds : [public_674ca8]
        public_4faa23 : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x84]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x88]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x8C]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_674c84]
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        lea edx, ds:[eax-1]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ds : [public_674cb0], 0x3F800000
        je public_4fab9f
        mov ecx, dword ptr ds : [public_674ca8]
        and ecx, 3
        cmp cl, 3
        jne public_4fab99
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4fab99 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fab9f : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0xD8]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xDC]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xE0]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_674c84]
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        lea edx, ds:[eax-1]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ds : [public_674cb0], 0x3F800000
        je public_4fad1b
        mov ecx, dword ptr ds : [public_674ca8]
        and ecx, 3
        cmp cl, 3
        jne public_4fad15
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4fad15 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fad1b : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0xC0]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xC4]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0xC8]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x10]
        lea ebx, ds:[edx-1]
        fmul dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x28]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [eax+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x10]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x90]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0x98]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3E800000
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [eax+0x24]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3E800000
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [eax+0x48]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x44]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x40]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        mov byte ptr ds : [public_674cae], al
        mov byte ptr ds : [public_674caf], 0xFF
        mov eax, dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xB4]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674cb0], 0x3E800000
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0xD4]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0xE8]
        mov edx, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0xEC]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x104]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        push 3
        mov ecx, offset public_674c7c
        mov dword ptr ss : [esp+0x30], eax
        call public_4fcb40
        mov eax, dword ptr ds : [public_674c90]
        mov edx, dword ptr ds : [public_674c8c]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov si, word ptr ss : [esp+0x28]
        movzx edi, word ptr ss : [esp+0x20]
        mov word ptr ds : [edx+eax*2], cx
        mov eax, dword ptr ds : [public_674c90]
        mov edx, dword ptr ds : [public_674c8c]
        inc eax
        mov dword ptr ds : [public_674c90], eax
        mov word ptr ds : [edx+eax*2], si
        mov eax, dword ptr ds : [public_674c90]
        mov edx, dword ptr ds : [public_674c8c]
        mov si, word ptr ss : [esp+0x14]
        inc eax
        mov dword ptr ds : [public_674c90], eax
        mov word ptr ds : [edx+eax*2], si
        movzx eax, word ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_674c90]
        xor esi, esi
        mov si, cx
        push eax
        push edi
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c90], edx
        push esi
        call public_4fc9a0
        xor ebp, ebp
        mov bp, bx
        mov ecx, offset public_674c7c
        push ebp
        push edi
        push esi
        call public_4fc9a0
        movzx ecx, word ptr ss : [esp+0x28]
        push ebp
        push ecx
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx ebp, word ptr ss : [esp+0x18]
        movzx edi, word ptr ss : [esp+0x1C]
        movzx esi, word ptr ss : [esp+0x3C]
        push ebp
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx ebx, word ptr ss : [esp+0x24]
        push ebx
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x10]
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        mov dword ptr ss : [esp+0x48], eax
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x2C]
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        mov dword ptr ss : [esp+0x38], eax
        call public_4fc9a0
        movzx edi, word ptr ss : [esp+0x80]
        push ebp
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        push ebx
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xF8
        ret 0xC
        UNREACHABLE_TRAP(0x4fa270)
    }
}

#undef public_4fa2b3
#undef public_4fa2ca
#undef public_4fa466
#undef public_4fa4b6
#undef public_4fa4dd
#undef public_4fa530
#undef public_4fa557
#undef public_4fa581
#undef public_4fa5b0
#undef public_4fa5c0
#undef public_4fa5e6
#undef public_4fa5f6
#undef public_4fa6da
#undef public_4fa6e0
#undef public_4fa8a1
#undef public_4fa8a7
#undef public_4faa1d
#undef public_4faa23
#undef public_4fab99
#undef public_4fab9f
#undef public_4fad15
#undef public_4fad1b
