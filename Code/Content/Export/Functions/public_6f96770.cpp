#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f967a6 _public_6f967a6
#define public_6f967a8 _public_6f967a8
#define public_6f967b0 _public_6f967b0
#define public_6f967b5 _public_6f967b5
#define public_6f967c1 _public_6f967c1
#define public_6f967e2 _public_6f967e2
#define public_6f967f0 _public_6f967f0
#define public_6f967fa _public_6f967fa
#define public_6f96806 _public_6f96806
#define public_6f96818 _public_6f96818
#define public_6f9681e _public_6f9681e
#define public_6f96837 _public_6f96837
#define public_6f96845 _public_6f96845
#define public_6f9684f _public_6f9684f
#define public_6f9688b _public_6f9688b
#define public_6f968a8 _public_6f968a8
#define public_6f968d0 _public_6f968d0
#define public_6f968e2 _public_6f968e2
#define public_6f968ec _public_6f968ec
#define public_6f96900 _public_6f96900
#define public_6f9690e _public_6f9690e
#define public_6f96914 _public_6f96914
#define public_6f96920 _public_6f96920
#define public_6f96931 _public_6f96931
#define public_6f9693e _public_6f9693e
#define public_6f96950 _public_6f96950
#define public_6f9695e _public_6f9695e
#define public_6f96968 _public_6f96968
#define public_6f96973 _public_6f96973
#define public_6f96988 _public_6f96988
#define public_6f96995 _public_6f96995
#define public_6f969a6 _public_6f969a6
#define public_6f969a9 _public_6f969a9

PROC_DECLARE(0x6f96770, internal_6f96770, public_6f96770);
extern "C" NAKED register_t __cdecl internal_6f96770()
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
        sar ecx, 3
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f968a8
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6f967a6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ebp, ecx
        jb public_6f967a8
        public_6f967a6 : nop
        mov ecx, ebp
        public_6f967a8 : nop
        test edx, edx
        jne public_6f967b0
        xor eax, eax
        jmp public_6f967b5
        public_6f967b0 : nop
        sub eax, edx
        sar eax, 3
        public_6f967b5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f967c1
        xor eax, eax
        public_6f967c1 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f967fa
        public_6f967e2 : nop
        test ecx, ecx
        je public_6f967f0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_6f967f0 : nop
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_6f967e2
        public_6f967fa : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6f9681e
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6f96806 : nop
        test eax, eax
        je public_6f96818
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f96818 : nop
        add eax, 8
        dec edx
        jne public_6f96806
        public_6f9681e : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*8]
        lea edx, ds:[esi+ecx]
        je public_6f9684f
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_6f96837 : nop
        test edx, edx
        je public_6f96845
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6f96845 : nop
        add eax, 8
        add edx, 8
        cmp eax, edi
        jne public_6f96837
        public_6f9684f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f9688b
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f9688b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f968a8 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 3
        cmp ecx, ebp
        jae public_6f9693e
        cmp esi, eax
        lea ebx, ds:[ebp*8]
        lea edx, ds:[ebx+esi]
        je public_6f968ec
        mov ecx, edx
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_6f968d0 : nop
        test edx, edx
        je public_6f968e2
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f968e2 : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6f968d0
        public_6f968ec : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        sub edx, esi
        sar edx, 3
        sub ebp, edx
        mov edx, dword ptr ss : [esp+0x24]
        je public_6f96914
        mov edi, edi
        public_6f96900 : nop
        test eax, eax
        je public_6f9690e
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6f9690e : nop
        add eax, 8
        dec ebp
        jne public_6f96900
        public_6f96914 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_6f96931
        lea ecx, ds:[ecx]
        public_6f96920 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_6f96920
        public_6f96931 : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f9693e : nop
        test ebp, ebp
        jbe public_6f969a9
        shl ebp, 3
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov edx, eax
        je public_6f96968
        nop 
        public_6f96950 : nop
        test edx, edx
        je public_6f9695e
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        public_6f9695e : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6f96950
        public_6f96968 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp esi, eax
        je public_6f96988
        public_6f96973 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f96973
        public_6f96988 : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6f969a6
        mov ecx, dword ptr ss : [esp+0x24]
        public_6f96995 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, edx
        jne public_6f96995
        public_6f969a6 : nop
        add dword ptr ds : [edi+8], ebp
        public_6f969a9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f96770)
    }
}

#undef public_6f967a6
#undef public_6f967a8
#undef public_6f967b0
#undef public_6f967b5
#undef public_6f967c1
#undef public_6f967e2
#undef public_6f967f0
#undef public_6f967fa
#undef public_6f96806
#undef public_6f96818
#undef public_6f9681e
#undef public_6f96837
#undef public_6f96845
#undef public_6f9684f
#undef public_6f9688b
#undef public_6f968a8
#undef public_6f968d0
#undef public_6f968e2
#undef public_6f968ec
#undef public_6f96900
#undef public_6f9690e
#undef public_6f96914
#undef public_6f96920
#undef public_6f96931
#undef public_6f9693e
#undef public_6f96950
#undef public_6f9695e
#undef public_6f96968
#undef public_6f96973
#undef public_6f96988
#undef public_6f96995
#undef public_6f969a6
#undef public_6f969a9
