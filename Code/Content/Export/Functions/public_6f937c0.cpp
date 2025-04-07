#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f937f6 _public_6f937f6
#define public_6f937f8 _public_6f937f8
#define public_6f93800 _public_6f93800
#define public_6f93805 _public_6f93805
#define public_6f93811 _public_6f93811
#define public_6f93832 _public_6f93832
#define public_6f9383a _public_6f9383a
#define public_6f93844 _public_6f93844
#define public_6f93850 _public_6f93850
#define public_6f9385c _public_6f9385c
#define public_6f93862 _public_6f93862
#define public_6f93880 _public_6f93880
#define public_6f93888 _public_6f93888
#define public_6f93892 _public_6f93892
#define public_6f938ce _public_6f938ce
#define public_6f938eb _public_6f938eb
#define public_6f93910 _public_6f93910
#define public_6f9391c _public_6f9391c
#define public_6f93926 _public_6f93926
#define public_6f93938 _public_6f93938
#define public_6f93940 _public_6f93940
#define public_6f93946 _public_6f93946
#define public_6f93950 _public_6f93950
#define public_6f9395b _public_6f9395b
#define public_6f93968 _public_6f93968
#define public_6f93980 _public_6f93980
#define public_6f93988 _public_6f93988
#define public_6f93992 _public_6f93992
#define public_6f939a0 _public_6f939a0
#define public_6f939af _public_6f939af
#define public_6f939c0 _public_6f939c0
#define public_6f939cb _public_6f939cb
#define public_6f939ce _public_6f939ce

PROC_DECLARE(0x6f937c0, internal_6f937c0, public_6f937c0);
extern "C" NAKED register_t __cdecl internal_6f937c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f938eb
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6f937f6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6f937f8
        public_6f937f6 : nop
        mov ecx, ebp
        public_6f937f8 : nop
        test edx, edx
        jne public_6f93800
        xor eax, eax
        jmp public_6f93805
        public_6f93800 : nop
        sub eax, edx
        sar eax, 2
        public_6f93805 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f93811
        xor eax, eax
        public_6f93811 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f93844
        public_6f93832 : nop
        test ecx, ecx
        je public_6f9383a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6f9383a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6f93832
        public_6f93844 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6f93862
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6f93850 : nop
        test eax, eax
        je public_6f9385c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f9385c : nop
        add eax, 4
        dec edx
        jne public_6f93850
        public_6f93862 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6f93892
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6f93880 : nop
        test edx, edx
        je public_6f93888
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6f93888 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6f93880
        public_6f93892 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f938ce
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f938ce : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f938eb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6f93968
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6f93926
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6f93910 : nop
        test esi, esi
        je public_6f9391c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f9391c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f93910
        public_6f93926 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6f93946
        public_6f93938 : nop
        test eax, eax
        je public_6f93940
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6f93940 : nop
        add eax, 4
        dec ebp
        jne public_6f93938
        public_6f93946 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6f9395b
        nop 
        public_6f93950 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f93950
        public_6f9395b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f93968 : nop
        test ebp, ebp
        jbe public_6f939ce
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6f93992
        lea esp, ss:[esp]
        public_6f93980 : nop
        test esi, esi
        je public_6f93988
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6f93988 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f93980
        public_6f93992 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6f939af
        lea ecx, ds:[ecx]
        public_6f939a0 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6f939a0
        public_6f939af : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6f939cb
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f939c0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6f939c0
        public_6f939cb : nop
        add dword ptr ds : [edi+8], ebp
        public_6f939ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f937c0)
    }
}

#undef public_6f937f6
#undef public_6f937f8
#undef public_6f93800
#undef public_6f93805
#undef public_6f93811
#undef public_6f93832
#undef public_6f9383a
#undef public_6f93844
#undef public_6f93850
#undef public_6f9385c
#undef public_6f93862
#undef public_6f93880
#undef public_6f93888
#undef public_6f93892
#undef public_6f938ce
#undef public_6f938eb
#undef public_6f93910
#undef public_6f9391c
#undef public_6f93926
#undef public_6f93938
#undef public_6f93940
#undef public_6f93946
#undef public_6f93950
#undef public_6f9395b
#undef public_6f93968
#undef public_6f93980
#undef public_6f93988
#undef public_6f93992
#undef public_6f939a0
#undef public_6f939af
#undef public_6f939c0
#undef public_6f939cb
#undef public_6f939ce
