#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023f0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_402426 _public_402426
#define public_402428 _public_402428
#define public_402430 _public_402430
#define public_402435 _public_402435
#define public_402441 _public_402441
#define public_402462 _public_402462
#define public_40246a _public_40246a
#define public_402474 _public_402474
#define public_402480 _public_402480
#define public_40248c _public_40248c
#define public_402492 _public_402492
#define public_4024b0 _public_4024b0
#define public_4024b8 _public_4024b8
#define public_4024c2 _public_4024c2
#define public_4024fe _public_4024fe
#define public_40251b _public_40251b
#define public_402540 _public_402540
#define public_40254c _public_40254c
#define public_402556 _public_402556
#define public_402568 _public_402568
#define public_402570 _public_402570
#define public_402576 _public_402576
#define public_402580 _public_402580
#define public_40258b _public_40258b
#define public_402598 _public_402598
#define public_4025b0 _public_4025b0
#define public_4025b8 _public_4025b8
#define public_4025c2 _public_4025c2
#define public_4025d0 _public_4025d0
#define public_4025df _public_4025df
#define public_4025f0 _public_4025f0
#define public_4025fb _public_4025fb
#define public_4025fe _public_4025fe

PROC_DECLARE(0x4023f0, internal_4023f0, public_4023f0);
extern "C" NAKED register_t __cdecl internal_4023f0()
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
        jae public_40251b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_402426
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_402428
        public_402426 : nop
        mov ecx, ebp
        public_402428 : nop
        test edx, edx
        jne public_402430
        xor eax, eax
        jmp public_402435
        public_402430 : nop
        sub eax, edx
        sar eax, 2
        public_402435 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_402441
        xor eax, eax
        public_402441 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_418a9e
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_402474
        public_402462 : nop
        test ecx, ecx
        je public_40246a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_40246a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_402462
        public_402474 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_402492
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_402480 : nop
        test eax, eax
        je public_40248c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_40248c : nop
        add eax, 4
        dec edx
        jne public_402480
        public_402492 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_4024c2
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_4024b0 : nop
        test edx, edx
        je public_4024b8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_4024b8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_4024b0
        public_4024c2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_4024fe
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
        public_4024fe : nop
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
        public_40251b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_402598
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_402556
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_402540 : nop
        test esi, esi
        je public_40254c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_40254c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_402540
        public_402556 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_402576
        public_402568 : nop
        test eax, eax
        je public_402570
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_402570 : nop
        add eax, 4
        dec ebp
        jne public_402568
        public_402576 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_40258b
        nop 
        public_402580 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_402580
        public_40258b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_402598 : nop
        test ebp, ebp
        jbe public_4025fe
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_4025c2
        lea esp, ss:[esp]
        public_4025b0 : nop
        test esi, esi
        je public_4025b8
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_4025b8 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_4025b0
        public_4025c2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_4025df
        lea ecx, ds:[ecx]
        public_4025d0 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_4025d0
        public_4025df : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_4025fb
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_4025f0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_4025f0
        public_4025fb : nop
        add dword ptr ds : [edi+8], ebp
        public_4025fe : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x4023f0)
    }
}

#undef public_402426
#undef public_402428
#undef public_402430
#undef public_402435
#undef public_402441
#undef public_402462
#undef public_40246a
#undef public_402474
#undef public_402480
#undef public_40248c
#undef public_402492
#undef public_4024b0
#undef public_4024b8
#undef public_4024c2
#undef public_4024fe
#undef public_40251b
#undef public_402540
#undef public_40254c
#undef public_402556
#undef public_402568
#undef public_402570
#undef public_402576
#undef public_402580
#undef public_40258b
#undef public_402598
#undef public_4025b0
#undef public_4025b8
#undef public_4025c2
#undef public_4025d0
#undef public_4025df
#undef public_4025f0
#undef public_4025fb
#undef public_4025fe
