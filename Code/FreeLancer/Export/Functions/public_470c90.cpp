#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_470c90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_470ce2 _public_470ce2
#define public_470ce4 _public_470ce4
#define public_470cec _public_470cec
#define public_470cfe _public_470cfe
#define public_470d0b _public_470d0b
#define public_470d30 _public_470d30
#define public_470d48 _public_470d48
#define public_470d52 _public_470d52
#define public_470d60 _public_470d60
#define public_470d7a _public_470d7a
#define public_470d88 _public_470d88
#define public_470da4 _public_470da4
#define public_470dbc _public_470dbc
#define public_470dc6 _public_470dc6
#define public_470e0c _public_470e0c
#define public_470e39 _public_470e39
#define public_470e72 _public_470e72
#define public_470e94 _public_470e94
#define public_470ea2 _public_470ea2
#define public_470ec0 _public_470ec0
#define public_470eda _public_470eda
#define public_470ee0 _public_470ee0
#define public_470ef0 _public_470ef0
#define public_470f0d _public_470f0d
#define public_470f1f _public_470f1f
#define public_470f40 _public_470f40
#define public_470f60 _public_470f60
#define public_470f6a _public_470f6a
#define public_470f75 _public_470f75
#define public_470f97 _public_470f97
#define public_470fa4 _public_470fa4
#define public_470fc3 _public_470fc3
#define public_470fc6 _public_470fc6

PROC_DECLARE(0x470c90, internal_470c90, public_470c90);
extern "C" NAKED register_t __cdecl internal_470c90()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        push ebp
        shr eax, 0x1F
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        add edx, eax
        cmp edx, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        jae public_470e39
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_470ce2
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        mov ebp, edx
        jb public_470ce4
        public_470ce2 : nop
        mov ebp, esi
        public_470ce4 : nop
        test edi, edi
        jne public_470cec
        xor edx, edx
        jmp public_470cfe
        public_470cec : nop
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_470cfe : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_470d0b
        xor eax, eax
        public_470d0b : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_470d52
        nop 
        lea esp, ss:[esp]
        public_470d30 : nop
        test edx, edx
        je public_470d48
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_470d48 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ebp
        jne public_470d30
        public_470d52 : nop
        test esi, esi
        mov eax, edx
        jbe public_470d88
        mov dword ptr ss : [esp+0x1C], esi
        lea esp, ss:[esp]
        public_470d60 : nop
        test eax, eax
        je public_470d7a
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_470d7a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0xC
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_470d60
        public_470d88 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+esi*2]
        shl ecx, 2
        cmp ebp, ebx
        lea edi, ds:[ecx+edx]
        je public_470dc6
        mov eax, edi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        public_470da4 : nop
        test edi, edi
        je public_470dbc
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        public_470dbc : nop
        add eax, 0xC
        add edi, 0xC
        cmp eax, ebx
        jne public_470da4
        public_470dc6 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+0xC], edx
        jne public_470e0c
        xor edx, edx
        add esi, edx
        lea ecx, ds:[esi+esi*2]
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_470e0c : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add esi, edx
        lea ecx, ds:[esi+esi*2]
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_470e39 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        jae public_470f1f
        lea ebp, ds:[esi+esi*2]
        shl ebp, 2
        cmp edi, ecx
        lea edx, ds:[edi+ebp]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        je public_470ea2
        mov eax, edx
        sub eax, ebp
        public_470e72 : nop
        test edx, edx
        je public_470e94
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], ebx
        mov edx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x10]
        public_470e94 : nop
        add edx, 0xC
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_470e72
        public_470ea2 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub esi, edx
        je public_470ee0
        lea ecx, ds:[ecx]
        public_470ec0 : nop
        test ebx, ebx
        je public_470eda
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edx]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_470eda : nop
        add ebx, 0xC
        dec esi
        jne public_470ec0
        public_470ee0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_470f0d
        lea ecx, ds:[ecx]
        public_470ef0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edi+8], edx
        jne public_470ef0
        public_470f0d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_470f1f : nop
        test esi, esi
        jbe public_470fc6
        lea esi, ds:[esi+esi*2]
        shl esi, 2
        mov eax, ecx
        sub eax, esi
        cmp eax, ecx
        mov edx, ecx
        mov dword ptr ss : [esp+0x1C], esi
        je public_470f6a
        nop 
        lea esp, ss:[esp]
        public_470f40 : nop
        test edx, edx
        je public_470f60
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_470f60 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ecx
        jne public_470f40
        public_470f6a : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, esi
        cmp edi, eax
        je public_470f97
        public_470f75 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_470f75
        mov ebx, dword ptr ss : [esp+0x10]
        public_470f97 : nop
        lea ecx, ds:[esi+edi]
        cmp edi, ecx
        mov eax, edi
        je public_470fc3
        mov edx, dword ptr ss : [esp+0x24]
        public_470fa4 : nop
        mov edi, edx
        mov ebp, dword ptr ds : [edi]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], edi
        jne public_470fa4
        mov ebx, dword ptr ss : [esp+0x10]
        public_470fc3 : nop
        add dword ptr ds : [ebx+8], esi
        public_470fc6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x470c90)
    }
}

#undef public_470ce2
#undef public_470ce4
#undef public_470cec
#undef public_470cfe
#undef public_470d0b
#undef public_470d30
#undef public_470d48
#undef public_470d52
#undef public_470d60
#undef public_470d7a
#undef public_470d88
#undef public_470da4
#undef public_470dbc
#undef public_470dc6
#undef public_470e0c
#undef public_470e39
#undef public_470e72
#undef public_470e94
#undef public_470ea2
#undef public_470ec0
#undef public_470eda
#undef public_470ee0
#undef public_470ef0
#undef public_470f0d
#undef public_470f1f
#undef public_470f40
#undef public_470f60
#undef public_470f6a
#undef public_470f75
#undef public_470f97
#undef public_470fa4
#undef public_470fc3
#undef public_470fc6
