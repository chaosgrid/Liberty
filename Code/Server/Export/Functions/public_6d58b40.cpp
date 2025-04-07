#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58b40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d58b76 _public_6d58b76
#define public_6d58b78 _public_6d58b78
#define public_6d58b80 _public_6d58b80
#define public_6d58b85 _public_6d58b85
#define public_6d58b91 _public_6d58b91
#define public_6d58bb2 _public_6d58bb2
#define public_6d58bc0 _public_6d58bc0
#define public_6d58bca _public_6d58bca
#define public_6d58bd6 _public_6d58bd6
#define public_6d58be8 _public_6d58be8
#define public_6d58bee _public_6d58bee
#define public_6d58c07 _public_6d58c07
#define public_6d58c15 _public_6d58c15
#define public_6d58c1f _public_6d58c1f
#define public_6d58c5b _public_6d58c5b
#define public_6d58c78 _public_6d58c78
#define public_6d58ca0 _public_6d58ca0
#define public_6d58cb2 _public_6d58cb2
#define public_6d58cbc _public_6d58cbc
#define public_6d58cd0 _public_6d58cd0
#define public_6d58cde _public_6d58cde
#define public_6d58ce4 _public_6d58ce4
#define public_6d58cf0 _public_6d58cf0
#define public_6d58d01 _public_6d58d01
#define public_6d58d0e _public_6d58d0e
#define public_6d58d20 _public_6d58d20
#define public_6d58d2e _public_6d58d2e
#define public_6d58d38 _public_6d58d38
#define public_6d58d43 _public_6d58d43
#define public_6d58d58 _public_6d58d58
#define public_6d58d65 _public_6d58d65
#define public_6d58d76 _public_6d58d76
#define public_6d58d79 _public_6d58d79

PROC_DECLARE(0x6d58b40, internal_6d58b40, public_6d58b40);
extern "C" NAKED register_t __cdecl internal_6d58b40()
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
        jae public_6d58c78
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6d58b76
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ebp, ecx
        jb public_6d58b78
        public_6d58b76 : nop
        mov ecx, ebp
        public_6d58b78 : nop
        test edx, edx
        jne public_6d58b80
        xor eax, eax
        jmp public_6d58b85
        public_6d58b80 : nop
        sub eax, edx
        sar eax, 3
        public_6d58b85 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6d58b91
        xor eax, eax
        public_6d58b91 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6d60012
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6d58bca
        public_6d58bb2 : nop
        test ecx, ecx
        je public_6d58bc0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_6d58bc0 : nop
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_6d58bb2
        public_6d58bca : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6d58bee
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6d58bd6 : nop
        test eax, eax
        je public_6d58be8
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d58be8 : nop
        add eax, 8
        dec edx
        jne public_6d58bd6
        public_6d58bee : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*8]
        lea edx, ds:[esi+ecx]
        je public_6d58c1f
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_6d58c07 : nop
        test edx, edx
        je public_6d58c15
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6d58c15 : nop
        add eax, 8
        add edx, 8
        cmp eax, edi
        jne public_6d58c07
        public_6d58c1f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d58c5b
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
        public_6d58c5b : nop
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
        public_6d58c78 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 3
        cmp ecx, ebp
        jae public_6d58d0e
        cmp esi, eax
        lea ebx, ds:[ebp*8]
        lea edx, ds:[ebx+esi]
        je public_6d58cbc
        mov ecx, edx
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_6d58ca0 : nop
        test edx, edx
        je public_6d58cb2
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d58cb2 : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6d58ca0
        public_6d58cbc : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        sub edx, esi
        sar edx, 3
        sub ebp, edx
        mov edx, dword ptr ss : [esp+0x24]
        je public_6d58ce4
        mov edi, edi
        public_6d58cd0 : nop
        test eax, eax
        je public_6d58cde
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6d58cde : nop
        add eax, 8
        dec ebp
        jne public_6d58cd0
        public_6d58ce4 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_6d58d01
        lea ecx, ds:[ecx]
        public_6d58cf0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_6d58cf0
        public_6d58d01 : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6d58d0e : nop
        test ebp, ebp
        jbe public_6d58d79
        shl ebp, 3
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov edx, eax
        je public_6d58d38
        nop 
        public_6d58d20 : nop
        test edx, edx
        je public_6d58d2e
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        public_6d58d2e : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6d58d20
        public_6d58d38 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp esi, eax
        je public_6d58d58
        public_6d58d43 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6d58d43
        public_6d58d58 : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6d58d76
        mov ecx, dword ptr ss : [esp+0x24]
        public_6d58d65 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, edx
        jne public_6d58d65
        public_6d58d76 : nop
        add dword ptr ds : [edi+8], ebp
        public_6d58d79 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d58b40)
    }
}

#undef public_6d58b76
#undef public_6d58b78
#undef public_6d58b80
#undef public_6d58b85
#undef public_6d58b91
#undef public_6d58bb2
#undef public_6d58bc0
#undef public_6d58bca
#undef public_6d58bd6
#undef public_6d58be8
#undef public_6d58bee
#undef public_6d58c07
#undef public_6d58c15
#undef public_6d58c1f
#undef public_6d58c5b
#undef public_6d58c78
#undef public_6d58ca0
#undef public_6d58cb2
#undef public_6d58cbc
#undef public_6d58cd0
#undef public_6d58cde
#undef public_6d58ce4
#undef public_6d58cf0
#undef public_6d58d01
#undef public_6d58d0e
#undef public_6d58d20
#undef public_6d58d2e
#undef public_6d58d38
#undef public_6d58d43
#undef public_6d58d58
#undef public_6d58d65
#undef public_6d58d76
#undef public_6d58d79
