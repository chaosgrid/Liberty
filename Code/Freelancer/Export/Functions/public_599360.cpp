#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_599360);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_599394 _public_599394
#define public_599396 _public_599396
#define public_59939e _public_59939e
#define public_5993a3 _public_5993a3
#define public_5993af _public_5993af
#define public_5993d4 _public_5993d4
#define public_5993e8 _public_5993e8
#define public_5993f2 _public_5993f2
#define public_59940e _public_59940e
#define public_599426 _public_599426
#define public_599430 _public_599430
#define public_599443 _public_599443
#define public_599483 _public_599483
#define public_5994a0 _public_5994a0
#define public_5994ce _public_5994ce
#define public_5994d2 _public_5994d2
#define public_5994e9 _public_5994e9
#define public_599500 _public_599500
#define public_599514 _public_599514
#define public_599520 _public_599520
#define public_59952b _public_59952b
#define public_599541 _public_599541
#define public_599554 _public_599554
#define public_599578 _public_599578
#define public_599583 _public_599583
#define public_599592 _public_599592
#define public_5995a0 _public_5995a0
#define public_5995ab _public_5995ab
#define public_5995ae _public_5995ae

PROC_DECLARE(0x599360, internal_599360, public_599360);
extern "C" NAKED register_t __cdecl internal_599360()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 2
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_5994a0
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_599394
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jb public_599396
        public_599394 : nop
        mov eax, ebp
        public_599396 : nop
        test ecx, ecx
        jne public_59939e
        xor esi, esi
        jmp public_5993a3
        public_59939e : nop
        sub esi, ecx
        sar esi, 2
        public_5993a3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5993af
        xor eax, eax
        public_5993af : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_5993e8
        public_5993d4 : nop
        push esi
        push edi
        call public_5999b0
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_5993d4
        public_5993e8 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_59940e
        mov dword ptr ss : [esp+0x1C], ebp
        public_5993f2 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_5999b0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_5993f2
        public_59940e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*4]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_599443
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_599430
        public_599426 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_599430 : nop
        add eax, esi
        push esi
        push eax
        call public_5999b0
        add esi, 4
        add esp, 8
        cmp esi, edi
        jne public_599426
        public_599443 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_5b7e1d
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_599483
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_599483 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 2
        add ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_5994a0 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, edi
        sar edx, 2
        cmp edx, ebp
        jae public_599541
        lea eax, ds:[ebp*4]
        mov dword ptr ss : [esp+0x20], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_5994e9
        sub eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_5994d2
        public_5994ce : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_5994d2 : nop
        add eax, ebx
        push ebx
        push eax
        call public_5999b0
        add ebx, 4
        add esp, 8
        cmp ebx, esi
        jne public_5994ce
        mov ecx, dword ptr ss : [esp+0x10]
        public_5994e9 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, edi
        sar eax, 2
        sub ebp, eax
        je public_599514
        nop 
        lea esp, ss:[esp]
        public_599500 : nop
        push ebx
        push esi
        call public_5999b0
        add esp, 8
        add esi, 4
        dec ebp
        jne public_599500
        mov ecx, dword ptr ss : [esp+0x10]
        public_599514 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edi, edx
        mov eax, edi
        je public_59952b
        lea ecx, ds:[ecx]
        public_599520 : nop
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, edx
        jne public_599520
        public_59952b : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_599541 : nop
        test ebp, ebp
        jbe public_5995ae
        shl ebp, 2
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_599578
        public_599554 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push eax
        call public_5999b0
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 4
        add ebx, 4
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_599554
        mov ecx, dword ptr ss : [esp+0x10]
        public_599578 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, edx
        sub eax, ebp
        cmp edi, eax
        je public_599592
        public_599583 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub edx, 4
        cmp eax, edi
        mov dword ptr ds : [edx], esi
        jne public_599583
        public_599592 : nop
        lea edx, ds:[edi+ebp]
        cmp edi, edx
        mov eax, edi
        je public_5995ab
        mov esi, dword ptr ss : [esp+0x24]
        nop 
        public_5995a0 : nop
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, edx
        jne public_5995a0
        public_5995ab : nop
        add dword ptr ds : [ecx+8], ebp
        public_5995ae : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x599360)
    }
}

#undef public_599394
#undef public_599396
#undef public_59939e
#undef public_5993a3
#undef public_5993af
#undef public_5993d4
#undef public_5993e8
#undef public_5993f2
#undef public_59940e
#undef public_599426
#undef public_599430
#undef public_599443
#undef public_599483
#undef public_5994a0
#undef public_5994ce
#undef public_5994d2
#undef public_5994e9
#undef public_599500
#undef public_599514
#undef public_599520
#undef public_59952b
#undef public_599541
#undef public_599554
#undef public_599578
#undef public_599583
#undef public_599592
#undef public_5995a0
#undef public_5995ab
#undef public_5995ae
