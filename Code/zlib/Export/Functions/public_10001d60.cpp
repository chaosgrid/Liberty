#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cc0);
CLANG_FORWARD_PROC_SYMBOL(public_10001cf0);
CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_10007ea0);
CLANG_FORWARD_PROC_SYMBOL(public_10007f40);

#define public_10001dab _public_10001dab
#define public_10001dbe _public_10001dbe
#define public_10001df9 _public_10001df9
#define public_10001e08 _public_10001e08
#define public_10001e45 _public_10001e45
#define public_10001e4c _public_10001e4c
#define public_10001e71 _public_10001e71
#define public_10001e98 _public_10001e98
#define public_10001ea9 _public_10001ea9
#define public_10001ebd _public_10001ebd
#define public_10001ec1 _public_10001ec1
#define public_10001edb _public_10001edb
#define public_10001ef7 _public_10001ef7
#define public_10001efe _public_10001efe
#define public_10001f23 _public_10001f23
#define public_10001f5d _public_10001f5d
#define public_10001f6b _public_10001f6b
#define public_10001f83 _public_10001f83
#define public_10001fbb _public_10001fbb
#define public_10001fc2 _public_10001fc2
#define public_10001fc9 _public_10001fc9
#define public_10001fd2 _public_10001fd2
#define public_10001fda _public_10001fda

PROC_DECLARE(0x10001d60, internal_10001d60, public_10001d60);
extern "C" NAKED register_t __cdecl internal_10001d60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push ebp
        push esi
        push edi
        je public_10001fda
        mov esi, dword ptr ds : [ebx+0x1C]
        test esi, esi
        je public_10001fda
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, 4
        jg public_10001fda
        test ebp, ebp
        jl public_10001fda
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_10001fd2
        cmp dword ptr ds : [ebx], 0
        jne public_10001dab
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_10001fd2
        public_10001dab : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x29A
        jne public_10001dbe
        cmp ebp, 4
        jne public_10001fd2
        public_10001dbe : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_10001ea9
        cmp eax, 0x2A
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [esi+0x20], ebp
        jne public_10001e4c
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x7C]
        sub ecx, 8
        shl ecx, 0xC
        add ecx, 0x800
        dec eax
        sar eax, 1
        cmp eax, 3
        jbe public_10001df9
        mov eax, 3
        public_10001df9 : nop
        shl eax, 6
        or ecx, eax
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        je public_10001e08
        or ecx, 0x20
        public_10001e08 : nop
        mov eax, ecx
        xor edx, edx
        mov edi, 0x1F
        div edi
        mov eax, esi
        mov dword ptr ds : [esi+4], 0x71
        sub ecx, edx
        add ecx, edi
        call public_10001cc0
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        je public_10001e45
        movzx ecx, word ptr ds : [ebx+0x32]
        mov eax, esi
        call public_10001cc0
        mov ecx, dword ptr ds : [ebx+0x30]
        and ecx, 0xFFFF
        call public_10001cc0
        public_10001e45 : nop
        mov dword ptr ds : [ebx+0x30], 1
        public_10001e4c : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_10001e71
        mov eax, ebx
        call public_10001cf0
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_10001e98
        pop edi
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_10001e71 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_10001e98
        cmp ebp, dword ptr ss : [esp+0x14]
        jg public_10001e98
        cmp ebp, 4
        je public_10001e98
        mov edx, dword ptr ds : [public_1000e1bc]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, 0xFFFFFFFB
        pop ebx
        ret 8
        public_10001e98 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x29A
        mov ecx, dword ptr ds : [ebx+4]
        jne public_10001ebd
        test ecx, ecx
        je public_10001ec1
        public_10001ea9 : nop
        mov eax, dword ptr ds : [public_1000e1bc]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x18], eax
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        ret 8
        public_10001ebd : nop
        test ecx, ecx
        jne public_10001edb
        public_10001ec1 : nop
        mov ecx, dword ptr ds : [esi+0x6C]
        test ecx, ecx
        jne public_10001edb
        test ebp, ebp
        je public_10001f6b
        cmp eax, 0x29A
        je public_10001f6b
        public_10001edb : nop
        mov eax, dword ptr ds : [esi+0x7C]
        push ebp
        lea ecx, ds:[eax+eax*2]
        push esi
        call dword ptr ds : [ecx*4+public_1000b0c0]
        add esp, 8
        cmp eax, 2
        je public_10001ef7
        cmp eax, 3
        jne public_10001efe
        public_10001ef7 : nop
        mov dword ptr ds : [esi+4], 0x29A
        public_10001efe : nop
        test eax, eax
        je public_10001fbb
        cmp eax, 2
        je public_10001fbb
        cmp eax, 1
        jne public_10001f6b
        cmp ebp, eax
        jne public_10001f23
        push esi
        call public_10007f40
        add esp, 4
        jmp public_10001f5d
        public_10001f23 : nop
        push 0
        push 0
        push 0
        push esi
        call public_10007ea0
        add esp, 0x10
        cmp ebp, 3
        jne public_10001f5d
        mov edx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x3C]
        mov word ptr ds : [eax+edx*2-2], 0
        mov ecx, dword ptr ds : [esi+0x44]
        mov edi, dword ptr ds : [esi+0x3C]
        lea ecx, ds:[ecx+ecx-2]
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, ebp
        rep stosb
        public_10001f5d : nop
        mov eax, ebx
        call public_10001cf0
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_10001fc2
        public_10001f6b : nop
        cmp ebp, 4
        jne public_10001fc9
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_10001f83
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_10001f83 : nop
        movzx ecx, word ptr ds : [ebx+0x32]
        mov eax, esi
        call public_10001cc0
        mov ecx, dword ptr ds : [ebx+0x30]
        and ecx, 0xFFFF
        call public_10001cc0
        mov eax, ebx
        call public_10001cf0
        mov ecx, dword ptr ds : [esi+0x14]
        pop edi
        mov dword ptr ds : [esi+0x18], 0xFFFFFFFF
        pop esi
        xor eax, eax
        test ecx, ecx
        pop ebp
        sete al
        pop ebx
        ret 8
        public_10001fbb : nop
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_10001fc9
        public_10001fc2 : nop
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        public_10001fc9 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_10001fd2 : nop
        mov eax, dword ptr ds : [public_1000e1b0]
        mov dword ptr ds : [ebx+0x18], eax
        public_10001fda : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x10001d60)
    }
}

#undef public_10001dab
#undef public_10001dbe
#undef public_10001df9
#undef public_10001e08
#undef public_10001e45
#undef public_10001e4c
#undef public_10001e71
#undef public_10001e98
#undef public_10001ea9
#undef public_10001ebd
#undef public_10001ec1
#undef public_10001edb
#undef public_10001ef7
#undef public_10001efe
#undef public_10001f23
#undef public_10001f5d
#undef public_10001f6b
#undef public_10001f83
#undef public_10001fbb
#undef public_10001fc2
#undef public_10001fc9
#undef public_10001fd2
#undef public_10001fda
