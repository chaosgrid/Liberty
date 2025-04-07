#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71730);

#define public_6b719f3 _public_6b719f3
#define public_6b719fd _public_6b719fd
#define public_6b719ff _public_6b719ff
#define public_6b71a14 _public_6b71a14
#define public_6b71a1e _public_6b71a1e
#define public_6b71a20 _public_6b71a20
#define public_6b71a30 _public_6b71a30
#define public_6b71a39 _public_6b71a39
#define public_6b71a74 _public_6b71a74
#define public_6b71a86 _public_6b71a86
#define public_6b71a8a _public_6b71a8a
#define public_6b71a90 _public_6b71a90
#define public_6b71a98 _public_6b71a98
#define public_6b71aaa _public_6b71aaa
#define public_6b71ab7 _public_6b71ab7
#define public_6b71b06 _public_6b71b06
#define public_6b71b0a _public_6b71b0a
#define public_6b71b0e _public_6b71b0e
#define public_6b71b12 _public_6b71b12
#define public_6b71b17 _public_6b71b17
#define public_6b71b35 _public_6b71b35
#define public_6b71b55 _public_6b71b55
#define public_6b71b70 _public_6b71b70
#define public_6b71b73 _public_6b71b73
#define public_6b71b90 _public_6b71b90
#define public_6b71bac _public_6b71bac
#define public_6b71bc3 _public_6b71bc3
#define public_6b71bc5 _public_6b71bc5
#define public_6b71bcf _public_6b71bcf
#define public_6b71c1a _public_6b71c1a
#define public_6b71c2a _public_6b71c2a
#define public_6b71c2e _public_6b71c2e
#define public_6b71c54 _public_6b71c54

PROC_DECLARE(0x6b719d0, internal_6b719d0, public_6b719d0);
extern "C" NAKED register_t __cdecl internal_6b719d0()
{
    __asm
    {
        sub esp, 0x218
        mov eax, dword ptr ss : [esp+0x224]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_6b719f3
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b719ff
        public_6b719f3 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b719fd
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b719ff
        public_6b719fd : nop
        xor eax, eax
        public_6b719ff : nop
        mov esi, dword ptr ss : [esp+0x22C]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov edx, esi
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b71a30
        public_6b71a14 : nop
        cmp cl, 0x5C
        je public_6b71a1e
        cmp cl, 0x2F
        jne public_6b71a20
        public_6b71a1e : nop
        mov ebx, edx
        public_6b71a20 : nop
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_6b71a14
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6b71a39
        public_6b71a30 : nop
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6b71b17
        public_6b71a39 : nop
        cmp ebx, esi
        je public_6b71b12
        mov edx, ebx
        lea edi, ss:[esp+0x20]
        sub edx, esi
        mov ecx, edx
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        test eax, eax
        mov byte ptr ss : [esp+edx+0x20], 0
        jne public_6b71a74
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        je public_6b71b0e
        public_6b71a74 : nop
        mov cl, byte ptr ss : [esp+0x20]
        lea esi, ss:[esp+0x20]
        cmp cl, 0x5C
        je public_6b71a86
        cmp cl, 0x2F
        jne public_6b71a8a
        public_6b71a86 : nop
        lea esi, ss:[esp+0x21]
        public_6b71a8a : nop
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b71b0e
        public_6b71a90 : nop
        test byte ptr ds : [eax+8], 0x10
        je public_6b71b06
        mov ebp, esi
        public_6b71a98 : nop
        cmp cl, 0x5C
        je public_6b71ab7
        cmp cl, 0x2F
        je public_6b71ab7
        mov cl, byte ptr ss : [ebp+1]
        inc ebp
        test cl, cl
        jne public_6b71a98
        public_6b71aaa : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6b71730
        jmp public_6b71b0e
        public_6b71ab7 : nop
        cmp byte ptr ss : [ebp], 0
        je public_6b71aaa
        mov edx, ebp
        lea edi, ss:[esp+0x124]
        sub edx, esi
        push eax
        mov ecx, edx
        lea eax, ss:[esp+0x128]
        mov ebx, ecx
        push eax
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+edx+0x12C], 0
        call public_6b71730
        test eax, eax
        je public_6b71b0a
        mov cl, byte ptr ss : [ebp+1]
        lea esi, ss:[ebp+1]
        test cl, cl
        je public_6b71b0a
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_6b71a90
        public_6b71b06 : nop
        xor eax, eax
        jmp public_6b71b0e
        public_6b71b0a : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6b71b0e : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6b71b12 : nop
        inc ebx
        mov dword ptr ss : [esp+0x10], ebx
        public_6b71b17 : nop
        test eax, eax
        jne public_6b71b35
        mov dword ptr ds : [edi+0x474], 0xA1
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x218
        ret 0xC
        public_6b71b35 : nop
        test byte ptr ds : [eax+8], 0x10
        jne public_6b71b55
        mov dword ptr ds : [edi+0x474], 0xA1
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x218
        ret 0xC
        public_6b71b55 : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x10]
        or ebx, 0xFFFFFFFF
        xor ebp, ebp
        mov eax, dword ptr ds : [edx+4]
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], eax
        add edi, 0x20
        public_6b71b70 : nop
        lea eax, ds:[edi+4]
        public_6b71b73 : nop
        cmp dword ptr ds : [eax], 0
        je public_6b71bcf
        inc esi
        add eax, 0x114
        inc ebp
        cmp esi, 4
        jl public_6b71b73
        mov eax, dword ptr ds : [edi]
        xor esi, esi
        test eax, eax
        je public_6b71b90
        mov edi, eax
        jmp public_6b71b70
        public_6b71b90 : nop
        push 1
        push 0x454
        call dword ptr ds : [public_6b7906c]
        add esp, 8
        test eax, eax
        je public_6b71bc3
        lea ecx, ds:[eax+4]
        mov edx, 4
        public_6b71bac : nop
        mov dword ptr ds : [ecx], 0
        add ecx, 0x114
        dec edx
        jne public_6b71bac
        mov dword ptr ds : [eax], 0
        jmp public_6b71bc5
        public_6b71bc3 : nop
        xor eax, eax
        public_6b71bc5 : nop
        test eax, eax
        mov dword ptr ds : [edi], eax
        je public_6b71c1a
        mov edi, eax
        jmp public_6b71b70
        public_6b71bcf : nop
        lea eax, ds:[esi+esi*2]
        mov edx, dword ptr ss : [esp+0x18]
        shl eax, 3
        sub eax, esi
        push 0x104
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, eax
        lea esi, ds:[edi+ecx*4+4]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov dword ptr ds : [esi], edx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [esi+4], 0
        call dword ptr ds : [public_6b79074]
        lea ebx, ss:[ebp+1]
        add esp, 0xC
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x110], 0
        jne public_6b71c2a
        public_6b71c1a : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x474], 0x54
        jmp public_6b71c2e
        public_6b71c2a : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6b71c2e : nop
        cmp ebx, 0xFFFFFFFF
        mov esi, ebx
        je public_6b71c54
        mov ecx, dword ptr ss : [esp+0x230]
        mov eax, dword ptr ds : [edi]
        push ecx
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6b71c54
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        or esi, 0xFFFFFFFF
        public_6b71c54 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x218
        ret 0xC
        UNREACHABLE_TRAP(0x6b719d0)
    }
}

#undef public_6b719f3
#undef public_6b719fd
#undef public_6b719ff
#undef public_6b71a14
#undef public_6b71a1e
#undef public_6b71a20
#undef public_6b71a30
#undef public_6b71a39
#undef public_6b71a74
#undef public_6b71a86
#undef public_6b71a8a
#undef public_6b71a90
#undef public_6b71a98
#undef public_6b71aaa
#undef public_6b71ab7
#undef public_6b71b06
#undef public_6b71b0a
#undef public_6b71b0e
#undef public_6b71b12
#undef public_6b71b17
#undef public_6b71b35
#undef public_6b71b55
#undef public_6b71b70
#undef public_6b71b73
#undef public_6b71b90
#undef public_6b71bac
#undef public_6b71bc3
#undef public_6b71bc5
#undef public_6b71bcf
#undef public_6b71c1a
#undef public_6b71c2a
#undef public_6b71c2e
#undef public_6b71c54
