#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f98e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9a70);
CLANG_FORWARD_PROC_SYMBOL(public_65f9b10);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f98f4 _public_65f98f4
#define public_65f990b _public_65f990b
#define public_65f9913 _public_65f9913
#define public_65f991e _public_65f991e
#define public_65f9926 _public_65f9926
#define public_65f9931 _public_65f9931
#define public_65f993f _public_65f993f
#define public_65f9956 _public_65f9956
#define public_65f996c _public_65f996c
#define public_65f9974 _public_65f9974
#define public_65f997c _public_65f997c
#define public_65f9984 _public_65f9984
#define public_65f998c _public_65f998c
#define public_65f9998 _public_65f9998
#define public_65f99a0 _public_65f99a0
#define public_65f99a7 _public_65f99a7
#define public_65f99b5 _public_65f99b5
#define public_65f99c1 _public_65f99c1
#define public_65f99d5 _public_65f99d5
#define public_65f99e0 _public_65f99e0
#define public_65f99e8 _public_65f99e8
#define public_65f99f9 _public_65f99f9
#define public_65f9a0d _public_65f9a0d
#define public_65f9a15 _public_65f9a15
#define public_65f9a1b _public_65f9a1b
#define public_65f9a44 _public_65f9a44
#define public_65f9a61 _public_65f9a61

PROC_DECLARE(0x65f98e0, internal_65f98e0, public_65f98e0);
extern "C" NAKED register_t __cdecl internal_65f98e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp edi, eax
        je public_65f9a61
        push ebx
        push ebp
        push esi
        public_65f98f4 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, edi
        je public_65f9a44
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_65f990b
        xor ebx, ebx
        jmp public_65f9913
        public_65f990b : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_65f9913 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_65f991e
        xor ecx, ecx
        jmp public_65f9926
        public_65f991e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_65f9926 : nop
        cmp ebx, ecx
        ja public_65f996c
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_65f993f
        public_65f9931 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ebx
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_65f9931
        public_65f993f : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_65f9956
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_65f9a44
        public_65f9956 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+4]
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_65f9a44
        public_65f996c : nop
        test eax, eax
        jne public_65f9974
        xor ebx, ebx
        jmp public_65f997c
        public_65f9974 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_65f997c : nop
        test edx, edx
        jne public_65f9984
        xor ecx, ecx
        jmp public_65f998c
        public_65f9984 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 2
        public_65f998c : nop
        cmp ebx, ecx
        ja public_65f99f9
        test edx, edx
        jne public_65f9998
        xor ecx, ecx
        jmp public_65f99a0
        public_65f9998 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 2
        public_65f99a0 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_65f99b5
        public_65f99a7 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ebx
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_65f99a7
        public_65f99b5 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        mov ebx, dword ptr ds : [esi+8]
        mov esi, ecx
        je public_65f99d5
        public_65f99c1 : nop
        push esi
        push ebx
        call public_65f9b10
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_65f99c1
        public_65f99d5 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_65f99e0
        xor eax, eax
        jmp public_65f99e8
        public_65f99e0 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_65f99e8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [ecx+8], eax
        mov esi, ecx
        jmp public_65f9a44
        public_65f99f9 : nop
        push edx
        call public_6600bb0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_65f9a0d
        xor eax, eax
        jmp public_65f9a15
        public_65f9a0d : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_65f9a15 : nop
        test eax, eax
        jge public_65f9a1b
        xor eax, eax
        public_65f9a1b : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6600bb6
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_65f9a70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_65f9a44 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        add edi, 0x10
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], esi
        jne public_65f98f4
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop edi
        ret 
        public_65f9a61 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65f98e0)
    }
}

#undef public_65f98f4
#undef public_65f990b
#undef public_65f9913
#undef public_65f991e
#undef public_65f9926
#undef public_65f9931
#undef public_65f993f
#undef public_65f9956
#undef public_65f996c
#undef public_65f9974
#undef public_65f997c
#undef public_65f9984
#undef public_65f998c
#undef public_65f9998
#undef public_65f99a0
#undef public_65f99a7
#undef public_65f99b5
#undef public_65f99c1
#undef public_65f99d5
#undef public_65f99e0
#undef public_65f99e8
#undef public_65f99f9
#undef public_65f9a0d
#undef public_65f9a15
#undef public_65f9a1b
#undef public_65f9a44
#undef public_65f9a61
