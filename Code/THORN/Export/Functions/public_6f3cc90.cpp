#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3ccc6 _public_6f3ccc6
#define public_6f3ccc8 _public_6f3ccc8
#define public_6f3ccd0 _public_6f3ccd0
#define public_6f3ccd5 _public_6f3ccd5
#define public_6f3cce1 _public_6f3cce1
#define public_6f3cd02 _public_6f3cd02
#define public_6f3cd0a _public_6f3cd0a
#define public_6f3cd14 _public_6f3cd14
#define public_6f3cd20 _public_6f3cd20
#define public_6f3cd2c _public_6f3cd2c
#define public_6f3cd32 _public_6f3cd32
#define public_6f3cd50 _public_6f3cd50
#define public_6f3cd58 _public_6f3cd58
#define public_6f3cd62 _public_6f3cd62
#define public_6f3cd9e _public_6f3cd9e
#define public_6f3cdbb _public_6f3cdbb
#define public_6f3cde0 _public_6f3cde0
#define public_6f3cdec _public_6f3cdec
#define public_6f3cdf6 _public_6f3cdf6
#define public_6f3ce08 _public_6f3ce08
#define public_6f3ce10 _public_6f3ce10
#define public_6f3ce16 _public_6f3ce16
#define public_6f3ce20 _public_6f3ce20
#define public_6f3ce2b _public_6f3ce2b
#define public_6f3ce38 _public_6f3ce38
#define public_6f3ce50 _public_6f3ce50
#define public_6f3ce58 _public_6f3ce58
#define public_6f3ce62 _public_6f3ce62
#define public_6f3ce70 _public_6f3ce70
#define public_6f3ce7f _public_6f3ce7f
#define public_6f3ce90 _public_6f3ce90
#define public_6f3ce9b _public_6f3ce9b
#define public_6f3ce9e _public_6f3ce9e

PROC_DECLARE(0x6f3cc90, internal_6f3cc90, public_6f3cc90);
extern "C" NAKED register_t __cdecl internal_6f3cc90()
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
        jae public_6f3cdbb
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6f3ccc6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6f3ccc8
        public_6f3ccc6 : nop
        mov ecx, ebp
        public_6f3ccc8 : nop
        test edx, edx
        jne public_6f3ccd0
        xor eax, eax
        jmp public_6f3ccd5
        public_6f3ccd0 : nop
        sub eax, edx
        sar eax, 2
        public_6f3ccd5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f3cce1
        xor eax, eax
        public_6f3cce1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6f57e9c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f3cd14
        public_6f3cd02 : nop
        test ecx, ecx
        je public_6f3cd0a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6f3cd0a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6f3cd02
        public_6f3cd14 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6f3cd32
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6f3cd20 : nop
        test eax, eax
        je public_6f3cd2c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f3cd2c : nop
        add eax, 4
        dec edx
        jne public_6f3cd20
        public_6f3cd32 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6f3cd62
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6f3cd50 : nop
        test edx, edx
        je public_6f3cd58
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6f3cd58 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6f3cd50
        public_6f3cd62 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f3cd9e
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
        public_6f3cd9e : nop
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
        public_6f3cdbb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6f3ce38
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6f3cdf6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6f3cde0 : nop
        test esi, esi
        je public_6f3cdec
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f3cdec : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f3cde0
        public_6f3cdf6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6f3ce16
        public_6f3ce08 : nop
        test eax, eax
        je public_6f3ce10
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6f3ce10 : nop
        add eax, 4
        dec ebp
        jne public_6f3ce08
        public_6f3ce16 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6f3ce2b
        nop 
        public_6f3ce20 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f3ce20
        public_6f3ce2b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f3ce38 : nop
        test ebp, ebp
        jbe public_6f3ce9e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6f3ce62
        lea esp, ss:[esp]
        public_6f3ce50 : nop
        test esi, esi
        je public_6f3ce58
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6f3ce58 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f3ce50
        public_6f3ce62 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6f3ce7f
        lea ecx, ds:[ecx]
        public_6f3ce70 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6f3ce70
        public_6f3ce7f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6f3ce9b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f3ce90 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6f3ce90
        public_6f3ce9b : nop
        add dword ptr ds : [edi+8], ebp
        public_6f3ce9e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f3cc90)
    }
}

#undef public_6f3ccc6
#undef public_6f3ccc8
#undef public_6f3ccd0
#undef public_6f3ccd5
#undef public_6f3cce1
#undef public_6f3cd02
#undef public_6f3cd0a
#undef public_6f3cd14
#undef public_6f3cd20
#undef public_6f3cd2c
#undef public_6f3cd32
#undef public_6f3cd50
#undef public_6f3cd58
#undef public_6f3cd62
#undef public_6f3cd9e
#undef public_6f3cdbb
#undef public_6f3cde0
#undef public_6f3cdec
#undef public_6f3cdf6
#undef public_6f3ce08
#undef public_6f3ce10
#undef public_6f3ce16
#undef public_6f3ce20
#undef public_6f3ce2b
#undef public_6f3ce38
#undef public_6f3ce50
#undef public_6f3ce58
#undef public_6f3ce62
#undef public_6f3ce70
#undef public_6f3ce7f
#undef public_6f3ce90
#undef public_6f3ce9b
#undef public_6f3ce9e
