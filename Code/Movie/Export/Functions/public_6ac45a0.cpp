#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac85c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac86f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca890);
CLANG_FORWARD_PROC_SYMBOL(public_6acae10);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac45fb _public_6ac45fb
#define public_6ac4611 _public_6ac4611
#define public_6ac461f _public_6ac461f
#define public_6ac4649 _public_6ac4649
#define public_6ac464e _public_6ac464e
#define public_6ac46bf _public_6ac46bf
#define public_6ac46e2 _public_6ac46e2
#define public_6ac47ff _public_6ac47ff
#define public_6ac481d _public_6ac481d
#define public_6ac4833 _public_6ac4833
#define public_6ac484c _public_6ac484c
#define public_6ac4852 _public_6ac4852
#define public_6ac4878 _public_6ac4878
#define public_6ac4945 _public_6ac4945
#define public_6ac4a34 _public_6ac4a34
#define public_6ac4a42 _public_6ac4a42
#define public_6ac4a73 _public_6ac4a73
#define public_6ac4a8c _public_6ac4a8c
#define public_6ac4ba3 _public_6ac4ba3
#define public_6ac4c15 _public_6ac4c15
#define public_6ac4c84 _public_6ac4c84
#define public_6ac4ca9 _public_6ac4ca9
#define public_6ac4d56 _public_6ac4d56
#define public_6ac4d5b _public_6ac4d5b
#define public_6ac4d6e _public_6ac4d6e
#define public_6ac4d73 _public_6ac4d73
#define public_6ac4d83 _public_6ac4d83
#define public_6ac4d8e _public_6ac4d8e

PROC_DECLARE(0x6ac45a0, internal_6ac45a0, public_6ac45a0);
extern "C" NAKED register_t __cdecl internal_6ac45a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr ss : [ebp+0x18]
        push ebx
        push esi
        push edi
        mov ebx, dword ptr ds : [eax+0x10C]
        mov esi, dword ptr ds : [eax+0x100]
        mov eax, dword ptr ds : [eax+0x118]
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp-0x10], eax
        lea ecx, ds:[esi+eax*2]
        lea edx, ds:[eax+esi]
        cmp edi, ecx
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x28], 0
        ja public_6ac4d8e
        jne public_6ac461f
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp-0x24]
        mov edi, dword ptr ss : [ebp+0x18]
        public_6ac45fb : nop
        test eax, eax
        je public_6ac4611
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac45fb
        sbb eax, eax
        or eax, 1
        public_6ac4611 : nop
        test eax, eax
        jge public_6ac4d8e
        mov edi, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp-8]
        public_6ac461f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6ac4649
        push 0x231C
        call public_6ac4f80
        mov edx, eax
        test edx, edx
        mov dword ptr ss : [ebp-4], edx
        jne public_6ac464e
        mov edi, dword ptr ss : [ebp+0x14]
        mov ecx, esi
        rep stosd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
        public_6ac4649 : nop
        mov dword ptr ss : [ebp-4], eax
        mov edx, eax
        public_6ac464e : nop
        lea ecx, ds:[edx+0x1898]
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x20], ecx
        lea eax, ds:[edx+0xA74]
        lea ecx, ds:[edi*4]
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x24], ecx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0xC]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x24]
        sub ecx, eax
        xor eax, eax
        shl ecx, 2
        lea edi, ds:[esi+edx+0xA74]
        mov esi, ecx
        shr ecx, 2
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6ac4a8c
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        jne public_6ac46bf
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6ac46e2
        public_6ac46bf : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x20]
        push edx
        mov edx, dword ptr ss : [ebp-0xC]
        push ecx
        push eax
        push edx
        call public_6ac8bd0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x1898
        mov dword ptr ss : [ebp-0x18], eax
        public_6ac46e2 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        lea eax, ds:[edx+0x2158]
        add edx, 0x1A98
        push ebx
        lea edi, ds:[ecx+0x4A8]
        mov dword ptr ss : [ebp+8], edx
        mov edx, edi
        mov ecx, dword ptr ds : [ebx]
        sub edx, eax
        mov dword ptr ss : [ebp-0x20], ecx
        add edx, 0x1C4
        sar edx, 2
        not edx
        and edx, 1
        lea esi, ds:[eax+edx*4]
        add eax, 0x1B4
        push eax
        push esi
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp-0x14]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x18]
        lea edx, ds:[ecx+eax*4]
        push edx
        call public_6acb290
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        lea ecx, ds:[edi+0x1B4]
        push eax
        push ecx
        push edi
        push edx
        push esi
        call public_6aca890
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        add eax, 0x360
        push ebx
        lea ecx, ds:[edi+0x378]
        push eax
        add edi, 0x1C4
        push ecx
        push edi
        push edx
        push esi
        mov dword ptr ss : [ebp-0x24], eax
        call public_6aca890
        mov eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+8]
        shl eax, 2
        mov ecx, eax
        lea edi, ds:[edx+0x1498]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-4]
        lea edx, ds:[eax+ecx+0x1498]
        add ecx, 0x1A98
        push edx
        mov edx, dword ptr ss : [ebp-0x20]
        add eax, ecx
        mov ecx, dword ptr ss : [ebp-0x24]
        push edx
        push eax
        lea eax, ds:[edx+edx]
        push eax
        push ecx
        call public_6ac8500
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov esi, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ss : [ebp-0x14]
        or edx, 0xFFFFFFFF
        shr edx, cl
        and dword ptr ds : [esi+edi*4-4], edx
        mov eax, dword ptr ss : [ebp-4]
        push edi
        add eax, 0x1498
        push esi
        push eax
        push esi
        call public_6ac89d0
        test eax, eax
        mov dword ptr ss : [ebp+0x10], eax
        je public_6ac47ff
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-8]
        push edx
        lea eax, ds:[ecx*4]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x20], eax
        add eax, esi
        push eax
        push ecx
        push eax
        call public_6ac85c0
        sub dword ptr ss : [ebp+0x10], eax
        jmp public_6ac4852
        public_6ac47ff : nop
        mov edx, dword ptr ss : [ebp-0x10]
        lea eax, ds:[edx*4]
        mov dword ptr ss : [ebp-0x20], eax
        add eax, esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp-0x24]
        mov edi, dword ptr ss : [ebp+0x18]
        public_6ac481d : nop
        test eax, eax
        je public_6ac4833
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac481d
        sbb eax, eax
        or eax, 1
        public_6ac4833 : nop
        test eax, eax
        jl public_6ac484c
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x18]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push ecx
        push eax
        call public_6ac89d0
        mov dword ptr ss : [ebp+0x10], eax
        public_6ac484c : nop
        mov edi, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ss : [ebp-0xC]
        public_6ac4852 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        or ecx, edx
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        test ecx, ecx
        je public_6ac4878
        mov eax, dword ptr ss : [ebp-4]
        push edi
        add eax, 0x1898
        push eax
        push ecx
        push esi
        call public_6ac8bd0
        or dword ptr ss : [ebp+0xC], eax
        public_6ac4878 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp-0x18]
        lea edi, ds:[edx+0x2158]
        add ecx, 0x830
        shl eax, 2
        lea edx, ds:[edi+0x1B4]
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [ebp-0x24], eax
        push edx
        add eax, esi
        push edi
        push ecx
        push eax
        mov dword ptr ss : [ebp+0x10], ecx
        mov dword ptr ss : [ebp-0x1C], eax
        call public_6acb290
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        lea esi, ds:[ecx+0x1A98]
        lea edx, ds:[eax+0x1B4]
        push esi
        push edx
        push eax
        lea eax, ds:[edi+0x1B4]
        push eax
        push edi
        call public_6aca890
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax*8]
        mov eax, dword ptr ss : [ebp-4]
        mov edx, ecx
        lea edi, ds:[eax+0x1498]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [ebp-8]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ss : [ebp-0x10]
        lea esi, ds:[eax+0x1498]
        mov eax, dword ptr ss : [ebp-0x18]
        add ecx, ecx
        sub edx, edi
        mov dword ptr ss : [ebp+8], ecx
        push ecx
        lea ecx, ds:[eax+edx*4]
        push esi
        push ecx
        push esi
        call public_6ac85c0
        mov edx, dword ptr ss : [ebp-0x1C]
        mov edi, eax
        test dword ptr ds : [edx-4], 0x80000000
        je public_6ac4945
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp+8]
        push esi
        add ecx, 0x9F4
        push eax
        push ecx
        push edx
        push esi
        call public_6ac8500
        add edi, eax
        public_6ac4945 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x18]
        or ecx, edi
        push ebx
        lea edi, ds:[eax+0x120]
        mov eax, dword ptr ss : [ebp-4]
        mov edx, edi
        add eax, 0x2158
        sub edx, eax
        mov dword ptr ss : [ebp+0xC], ecx
        add edx, 0x1C4
        mov ecx, dword ptr ds : [ebx]
        sar edx, 2
        not edx
        and edx, 1
        mov dword ptr ss : [ebp-0x1C], ecx
        lea edx, ds:[eax+edx*4]
        add eax, 0x1B4
        push eax
        push edx
        push ecx
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, esi
        mov dword ptr ss : [ebp+0x10], edx
        push ecx
        mov dword ptr ss : [ebp+8], eax
        call public_6acb290
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        lea eax, ds:[edi+0x1B4]
        lea esi, ds:[edx+0x1A98]
        mov edx, dword ptr ss : [ebp+0x10]
        push esi
        push eax
        push edi
        push ecx
        push edx
        call public_6aca890
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[esi+0x360]
        push ebx
        mov dword ptr ss : [ebp-0x20], eax
        push eax
        lea eax, ds:[edi+0x378]
        add edi, 0x1C4
        push eax
        push edi
        push ecx
        push edx
        call public_6aca890
        mov eax, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-4]
        shl eax, 2
        mov ecx, eax
        lea ebx, ds:[edx+0x1698]
        mov edx, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [ebp-4]
        and ecx, 3
        add edx, 0x1A98
        rep movsb
        lea ecx, ds:[eax+ebx]
        add eax, edx
        push ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        push eax
        lea eax, ds:[ecx+ecx]
        mov ecx, dword ptr ss : [ebp-0x20]
        push eax
        push ecx
        call public_6ac8500
        mov edx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ss : [ebp-0xC]
        push edx
        push esi
        push ebx
        push esi
        call public_6ac89d0
        mov ebx, dword ptr ss : [ebp+0xC]
        or ebx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0xC]
        public_6ac4a34 : nop
        test eax, eax
        je public_6ac4a42
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac4a34
        inc eax
        public_6ac4a42 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp+0x18]
        push ecx
        push edi
        push eax
        push esi
        call public_6ac8a90
        test eax, eax
        jl public_6ac4a73
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+0x14]
        push edx
        push eax
        push edi
        push esi
        call public_6ac89d0
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx+esi]
        sub edx, eax
        or ebx, edx
        jmp public_6ac4d5b
        public_6ac4a73 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edi, dword ptr ss : [ebp+0x14]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        jmp public_6ac4d5b
        public_6ac4a8c : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        lea eax, ds:[edx+0x2158]
        add edx, 0x1A98
        push ebx
        lea edi, ds:[ecx+0xA74]
        mov dword ptr ss : [ebp+8], edx
        mov edx, edi
        mov ecx, dword ptr ds : [ebx]
        sub edx, eax
        mov dword ptr ss : [ebp+0x10], ecx
        add edx, 0x1C4
        sar edx, 2
        not edx
        and edx, 1
        lea esi, ds:[eax+edx*4]
        add eax, 0x1B4
        mov dword ptr ss : [ebp+0xC], eax
        push eax
        mov eax, dword ptr ss : [ebp-0xC]
        push esi
        push ecx
        push eax
        call public_6acb290
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        lea edx, ds:[edi+0x1B4]
        push ecx
        push edx
        push edi
        push eax
        push esi
        call public_6aca890
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        lea edx, ds:[edi+0x378]
        add edi, 0x1C4
        lea eax, ds:[ecx+0x360]
        mov dword ptr ss : [ebp-0x24], eax
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        push edx
        push edi
        push eax
        push esi
        call public_6aca890
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx*4]
        lea edi, ds:[edx+0x1498]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [ebp-4]
        lea ecx, ds:[eax+edi+0x1498]
        add edi, 0x1A98
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, edi
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp-0x24]
        lea edx, ds:[ecx+ecx]
        push edx
        push eax
        call public_6ac8500
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        lea esi, ds:[ecx+edx*4]
        mov ecx, dword ptr ss : [ebp-4]
        push eax
        push esi
        lea eax, ds:[ecx+0x1498]
        mov dword ptr ss : [ebp+8], esi
        push eax
        push esi
        call public_6ac89d0
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, 0x18
        ja public_6ac4ba3
        mov edx, dword ptr ss : [ebp-4]
        push eax
        lea eax, ds:[edx+0x1698]
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        add eax, 0xDFC
        push eax
        push esi
        call public_6ac86f0
        jmp public_6ac4c15
        public_6ac4ba3 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x18]
        add ecx, 0xE7C
        push ebx
        lea eax, ds:[edx+0x2158]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[eax+0x1B4]
        mov dword ptr ss : [ebp-0x24], ecx
        push edx
        push eax
        push ecx
        push esi
        call public_6acb290
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push edi
        lea ecx, ds:[eax+0x1B4]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ds:[eax+0x230C]
        add eax, 0x2158
        push ecx
        push eax
        call public_6aca890
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-4]
        mov esi, edi
        lea ecx, ds:[edx*8]
        lea edi, ds:[eax+0x1698]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp+8]
        public_6ac4c15 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [ebp-0x24], ecx
        lea edi, ds:[eax+0x120]
        mov eax, dword ptr ss : [ebp-4]
        mov edx, edi
        add eax, 0x2158
        sub edx, eax
        add edx, 0x1C4
        sar edx, 2
        not edx
        and edx, 1
        lea edx, ds:[eax+edx*4]
        add eax, 0x1B4
        push eax
        push edx
        push ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-0x1C], edx
        lea eax, ds:[ecx+0x1698]
        push eax
        call public_6acb290
        test esi, esi
        push ebx
        jne public_6ac4c84
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[edi+0x1B4]
        lea esi, ds:[edx+0x1A98]
        mov edx, dword ptr ss : [ebp-0x1C]
        push esi
        push eax
        push edi
        push ecx
        push edx
        call public_6aca890
        jmp public_6ac4ca9
        public_6ac4c84 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        add eax, 0x1A98
        lea ecx, ds:[edi+0x1B4]
        push eax
        push esi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        push ecx
        push edi
        push edx
        push eax
        call public_6acae10
        mov esi, dword ptr ss : [ebp+8]
        public_6ac4ca9 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[esi+0x360]
        push ebx
        lea ecx, ds:[edi+0x378]
        push eax
        add edi, 0x1C4
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        push ecx
        push edi
        push edx
        push eax
        call public_6aca890
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-4]
        lea eax, ds:[ecx*4]
        lea edi, ds:[edx+0x1498]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        lea esi, ds:[edx+0x1498]
        add edx, 0x1A98
        lea ecx, ds:[eax+esi]
        add eax, edx
        push ecx
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+ecx]
        push edx
        push eax
        call public_6ac8500
        mov eax, dword ptr ss : [ebp-0x10]
        mov ebx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ss : [ebp+0x14]
        push ebx
        lea ecx, ds:[esi+eax*4]
        push edi
        lea eax, ds:[edx+eax*8]
        push ecx
        push eax
        call public_6ac89d0
        mov esi, dword ptr ss : [ebp+0x10]
        add esi, eax
        je public_6ac4d56
        mov ecx, dword ptr ss : [ebp+0x18]
        push ebx
        push edi
        push ecx
        push edi
        call public_6ac85c0
        sub esi, eax
        je public_6ac4d56
        mov edx, dword ptr ss : [ebp+0x18]
        push ebx
        push edi
        push edx
        push edi
        call public_6ac85c0
        sub esi, eax
        public_6ac4d56 : nop
        mov dword ptr ss : [ebp+0xC], esi
        mov ebx, esi
        public_6ac4d5b : nop
        test ebx, ebx
        je public_6ac4d6e
        mov esi, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [public_6ae097c], 0x20
        jmp public_6ac4d73
        public_6ac4d6e : nop
        mov esi, 1
        public_6ac4d73 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6ac4d83
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6ac4fb0
        public_6ac4d83 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
        public_6ac4d8e : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0x1F
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6ac45a0)
    }
}

#undef public_6ac45fb
#undef public_6ac4611
#undef public_6ac461f
#undef public_6ac4649
#undef public_6ac464e
#undef public_6ac46bf
#undef public_6ac46e2
#undef public_6ac47ff
#undef public_6ac481d
#undef public_6ac4833
#undef public_6ac484c
#undef public_6ac4852
#undef public_6ac4878
#undef public_6ac4945
#undef public_6ac4a34
#undef public_6ac4a42
#undef public_6ac4a73
#undef public_6ac4a8c
#undef public_6ac4ba3
#undef public_6ac4c15
#undef public_6ac4c84
#undef public_6ac4ca9
#undef public_6ac4d56
#undef public_6ac4d5b
#undef public_6ac4d6e
#undef public_6ac4d73
#undef public_6ac4d83
#undef public_6ac4d8e
