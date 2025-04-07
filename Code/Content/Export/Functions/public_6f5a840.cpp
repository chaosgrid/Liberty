#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a840);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5a860 _public_6f5a860
#define public_6f5a8c3 _public_6f5a8c3
#define public_6f5a8cb _public_6f5a8cb
#define public_6f5a8d3 _public_6f5a8d3
#define public_6f5a921 _public_6f5a921
#define public_6f5a926 _public_6f5a926
#define public_6f5a92e _public_6f5a92e
#define public_6f5a933 _public_6f5a933
#define public_6f5a93e _public_6f5a93e
#define public_6f5a9dc _public_6f5a9dc
#define public_6f5aa30 _public_6f5aa30
#define public_6f5aa67 _public_6f5aa67
#define public_6f5aa85 _public_6f5aa85
#define public_6f5aaa7 _public_6f5aaa7
#define public_6f5aab0 _public_6f5aab0
#define public_6f5aad3 _public_6f5aad3
#define public_6f5aad9 _public_6f5aad9

PROC_DECLARE(0x6f5a840, internal_6f5a840, public_6f5a840);
extern "C" NAKED register_t __cdecl internal_6f5a840()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd0e5c]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fd0e58]
        mov edx, edi
        cmp edx, ecx
        mov ebx, 0x10
        je public_6f5a8d3
        mov edi, edi
        public_6f5a860 : nop
        fld dword ptr ds : [edx]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5a8c3
        fld dword ptr ds : [edx+4]
        fsub dword ptr ss : [esp+0x28]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5a8c3
        fld dword ptr ds : [edx+8]
        fsub dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbb54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f5a8c3
        fld dword ptr ds : [edx+0xC]
        fsub dword ptr ss : [esp+0x30]
        fabs 
        fcomp qword ptr ds : [public_6fb70c0]
        fnstsw ax
        test ah, 5
        jnp public_6f5a8cb
        public_6f5a8c3 : nop
        add edx, ebx
        cmp edx, ecx
        jne public_6f5a860
        jmp public_6f5a8d3
        public_6f5a8cb : nop
        cmp edx, ecx
        jne public_6f5aad9
        public_6f5a8d3 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6fd0e60]
        sub eax, ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x30]
        sar eax, 4
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], edx
        mov esi, ecx
        jae public_6f5a9dc
        test edi, edi
        je public_6f5a921
        mov eax, ecx
        sub eax, edi
        sar eax, 4
        cmp eax, 1
        jbe public_6f5a921
        mov eax, ecx
        sub eax, edi
        sar eax, 4
        jmp public_6f5a926
        public_6f5a921 : nop
        mov eax, 1
        public_6f5a926 : nop
        test edi, edi
        jne public_6f5a92e
        xor ecx, ecx
        jmp public_6f5a933
        public_6f5a92e : nop
        sub ecx, edi
        sar ecx, 4
        public_6f5a933 : nop
        lea edi, ds:[ecx+eax]
        test edi, edi
        mov eax, edi
        jge public_6f5a93e
        xor eax, eax
        public_6f5a93e : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [public_6fd0e58]
        add esp, 4
        mov ebx, eax
        push ebx
        push esi
        push ecx
        mov ecx, offset public_6fd0e54
        call public_6eb7310
        lea edx, ss:[esp+0x10]
        push edx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, offset public_6fd0e54
        call public_6f5c720
        mov eax, dword ptr ds : [public_6fd0e5c]
        add ebp, 0x10
        push ebp
        push eax
        push esi
        mov ecx, offset public_6fd0e54
        call public_6eb7310
        mov ecx, dword ptr ds : [public_6fd0e5c]
        mov edx, dword ptr ds : [public_6fd0e58]
        push ecx
        push edx
        mov ecx, offset public_6fd0e54
        call public_6ea1490
        mov eax, dword ptr ds : [public_6fd0e58]
        push eax
        call public_6fa8fe0
        shl edi, 4
        add edi, ebx
        add esp, 4
        mov ecx, offset public_6fd0e54
        mov dword ptr ds : [public_6fd0e60], edi
        call public_6ead810
        pop edi
        inc eax
        pop esi
        shl eax, 4
        add eax, ebx
        pop ebp
        mov dword ptr ds : [public_6fd0e58], ebx
        mov dword ptr ds : [public_6fd0e5c], eax
        pop ebx
        add esp, 0x10
        ret 
        public_6f5a9dc : nop
        mov edx, ecx
        sub edx, esi
        sar edx, 4
        cmp edx, 1
        jae public_6f5aa67
        lea eax, ds:[esi+0x10]
        push eax
        push ecx
        push esi
        mov ecx, offset public_6fd0e54
        call public_6eb7310
        mov eax, dword ptr ds : [public_6fd0e5c]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, esi
        sar edx, 4
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, offset public_6fd0e54
        call public_6f5c720
        mov ecx, dword ptr ds : [public_6fd0e5c]
        cmp esi, ecx
        mov eax, esi
        je public_6f5aad3
        lea esp, ss:[esp]
        public_6f5aa30 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ss : [esp+0x1C]
        add eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [edx+0xC], esi
        jne public_6f5aa30
        mov eax, dword ptr ds : [public_6fd0e5c]
        pop edi
        pop esi
        add eax, ebx
        pop ebp
        mov dword ptr ds : [public_6fd0e5c], eax
        pop ebx
        add esp, 0x10
        ret 
        public_6f5aa67 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF0
        push ecx
        mov ecx, offset public_6fd0e54
        call public_6eb7310
        mov eax, dword ptr ds : [public_6fd0e5c]
        mov ecx, eax
        add eax, 0xFFFFFFF0
        cmp esi, eax
        je public_6f5aaa7
        public_6f5aa85 : nop
        sub eax, ebx
        sub ecx, ebx
        cmp eax, esi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov edi, ecx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        jne public_6f5aa85
        public_6f5aaa7 : nop
        lea ecx, ds:[esi+0x10]
        cmp esi, ecx
        mov eax, esi
        je public_6f5aad3
        public_6f5aab0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ss : [esp+0x1C]
        add eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [edx+0xC], esi
        jne public_6f5aab0
        public_6f5aad3 : nop
        add dword ptr ds : [public_6fd0e5c], ebx
        public_6f5aad9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f5a840)
    }
}

#undef public_6f5a860
#undef public_6f5a8c3
#undef public_6f5a8cb
#undef public_6f5a8d3
#undef public_6f5a921
#undef public_6f5a926
#undef public_6f5a92e
#undef public_6f5a933
#undef public_6f5a93e
#undef public_6f5a9dc
#undef public_6f5aa30
#undef public_6f5aa67
#undef public_6f5aa85
#undef public_6f5aaa7
#undef public_6f5aab0
#undef public_6f5aad3
#undef public_6f5aad9
