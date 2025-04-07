#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_537296 _public_537296
#define public_537298 _public_537298
#define public_5372a0 _public_5372a0
#define public_5372a5 _public_5372a5
#define public_5372b1 _public_5372b1
#define public_5372d2 _public_5372d2
#define public_5372da _public_5372da
#define public_5372e4 _public_5372e4
#define public_5372f0 _public_5372f0
#define public_5372fc _public_5372fc
#define public_537302 _public_537302
#define public_537320 _public_537320
#define public_537328 _public_537328
#define public_537332 _public_537332
#define public_53736e _public_53736e
#define public_53738b _public_53738b
#define public_5373b0 _public_5373b0
#define public_5373bc _public_5373bc
#define public_5373c6 _public_5373c6
#define public_5373d8 _public_5373d8
#define public_5373e0 _public_5373e0
#define public_5373e6 _public_5373e6
#define public_5373f0 _public_5373f0
#define public_5373fb _public_5373fb
#define public_537408 _public_537408
#define public_537420 _public_537420
#define public_537428 _public_537428
#define public_537432 _public_537432
#define public_537440 _public_537440
#define public_53744f _public_53744f
#define public_537460 _public_537460
#define public_53746b _public_53746b
#define public_53746e _public_53746e

PROC_DECLARE(0x537260, internal_537260, public_537260);
extern "C" NAKED register_t __cdecl internal_537260()
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
        jae public_53738b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_537296
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_537298
        public_537296 : nop
        mov ecx, ebp
        public_537298 : nop
        test edx, edx
        jne public_5372a0
        xor eax, eax
        jmp public_5372a5
        public_5372a0 : nop
        sub eax, edx
        sar eax, 2
        public_5372a5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5372b1
        xor eax, eax
        public_5372b1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_5372e4
        public_5372d2 : nop
        test ecx, ecx
        je public_5372da
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_5372da : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_5372d2
        public_5372e4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_537302
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_5372f0 : nop
        test eax, eax
        je public_5372fc
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_5372fc : nop
        add eax, 4
        dec edx
        jne public_5372f0
        public_537302 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_537332
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_537320 : nop
        test edx, edx
        je public_537328
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_537328 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_537320
        public_537332 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_53736e
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
        public_53736e : nop
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
        public_53738b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_537408
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_5373c6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_5373b0 : nop
        test esi, esi
        je public_5373bc
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_5373bc : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_5373b0
        public_5373c6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_5373e6
        public_5373d8 : nop
        test eax, eax
        je public_5373e0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_5373e0 : nop
        add eax, 4
        dec ebp
        jne public_5373d8
        public_5373e6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_5373fb
        nop 
        public_5373f0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_5373f0
        public_5373fb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_537408 : nop
        test ebp, ebp
        jbe public_53746e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_537432
        lea esp, ss:[esp]
        public_537420 : nop
        test esi, esi
        je public_537428
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_537428 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_537420
        public_537432 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_53744f
        lea ecx, ds:[ecx]
        public_537440 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_537440
        public_53744f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_53746b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_537460 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_537460
        public_53746b : nop
        add dword ptr ds : [edi+8], ebp
        public_53746e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x537260)
    }
}

#undef public_537296
#undef public_537298
#undef public_5372a0
#undef public_5372a5
#undef public_5372b1
#undef public_5372d2
#undef public_5372da
#undef public_5372e4
#undef public_5372f0
#undef public_5372fc
#undef public_537302
#undef public_537320
#undef public_537328
#undef public_537332
#undef public_53736e
#undef public_53738b
#undef public_5373b0
#undef public_5373bc
#undef public_5373c6
#undef public_5373d8
#undef public_5373e0
#undef public_5373e6
#undef public_5373f0
#undef public_5373fb
#undef public_537408
#undef public_537420
#undef public_537428
#undef public_537432
#undef public_537440
#undef public_53744f
#undef public_537460
#undef public_53746b
#undef public_53746e
