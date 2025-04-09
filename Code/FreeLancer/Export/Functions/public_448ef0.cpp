#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4486d0);
CLANG_FORWARD_PROC_SYMBOL(public_448ef0);
CLANG_FORWARD_PROC_SYMBOL(public_449160);
CLANG_FORWARD_PROC_SYMBOL(public_4491a0);
CLANG_FORWARD_PROC_SYMBOL(public_4491f0);
CLANG_FORWARD_PROC_SYMBOL(public_4cecd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_448f02 _public_448f02
#define public_448f0a _public_448f0a
#define public_448f1e _public_448f1e
#define public_448f26 _public_448f26
#define public_448f4e _public_448f4e
#define public_448f52 _public_448f52
#define public_448f65 _public_448f65
#define public_448fef _public_448fef
#define public_449030 _public_449030
#define public_449053 _public_449053
#define public_449063 _public_449063
#define public_449090 _public_449090
#define public_4490b8 _public_4490b8
#define public_4490c0 _public_4490c0
#define public_4490e3 _public_4490e3
#define public_4490f3 _public_4490f3
#define public_449110 _public_449110
#define public_449134 _public_449134
#define public_449140 _public_449140
#define public_44914e _public_44914e
#define public_449151 _public_449151

PROC_DECLARE(0x448ef0, internal_448ef0, public_448ef0);
extern "C" NAKED register_t __cdecl internal_448ef0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        jne public_448f02
        xor eax, eax
        jmp public_448f0a
        public_448f02 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 4
        public_448f0a : nop
        mov edi, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jae public_4490f3
        test edx, edx
        jne public_448f1e
        xor ecx, ecx
        jmp public_448f26
        public_448f1e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 4
        public_448f26 : nop
        mov eax, dword ptr ds : [esi+8]
        sub edi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 4
        cmp ecx, edi
        mov ebx, eax
        jae public_448fef
        test edx, edx
        je public_448f4e
        sub eax, edx
        sar eax, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], eax
        jb public_448f52
        public_448f4e : nop
        mov dword ptr ss : [esp+0x18], edi
        public_448f52 : nop
        mov ecx, esi
        call public_4cecd0
        mov ebp, eax
        add ebp, dword ptr ss : [esp+0x18]
        mov eax, ebp
        jns public_448f65
        xor eax, eax
        public_448f65 : nop
        shl eax, 4
        push eax
        call public_5b7e84
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ebx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_4491a0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push edi
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_4491f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov edx, edi
        shl edx, 4
        add edx, ecx
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_4491a0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_449160
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ebx, dword ptr ss : [esp+0x14]
        shl ebp, 4
        add ebp, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebp
        call public_4cecd0
        add eax, edi
        shl eax, 4
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_448fef : nop
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 4
        cmp ecx, edi
        jae public_449063
        mov ebp, edi
        shl ebp, 4
        lea edx, ds:[ebx+ebp]
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_4491a0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, ebx
        push ecx
        sar edx, 4
        sub edi, edx
        push edi
        push eax
        mov ecx, esi
        call public_4491f0
        mov ecx, dword ptr ds : [esi+8]
        cmp ebx, ecx
        mov eax, ebx
        je public_449053
        nop 
        public_449030 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [edi+0xC], edx
        jne public_449030
        public_449053 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_449063 : nop
        test edi, edi
        jbe public_449151
        push eax
        shl edi, 4
        push eax
        sub eax, edi
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edi
        call public_4491a0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edi
        cmp ebx, eax
        je public_4490b8
        lea esp, ss:[esp]
        public_449090 : nop
        sub eax, 0x10
        sub ecx, 0x10
        cmp eax, ebx
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
        jne public_449090
        mov edi, dword ptr ss : [esp+0x18]
        public_4490b8 : nop
        lea eax, ds:[edi+ebx]
        cmp ebx, eax
        je public_4490e3
        nop 
        public_4490c0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [ecx]
        mov edx, ebx
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ebp
        mov ecx, dword ptr ds : [ecx+0xC]
        add ebx, 0x10
        cmp ebx, eax
        mov dword ptr ds : [edx+0xC], ecx
        jne public_4490c0
        public_4490e3 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_4490f3 : nop
        test edx, edx
        je public_449151
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 4
        cmp edi, eax
        jae public_449151
        shl edi, 4
        mov eax, ecx
        add edi, edx
        cmp eax, ecx
        je public_449134
        public_449110 : nop
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        add eax, 0x10
        add edi, 0x10
        cmp eax, ecx
        mov dword ptr ds : [ebx+0xC], edx
        jne public_449110
        public_449134 : nop
        mov ebp, dword ptr ds : [esi+8]
        cmp edi, ebp
        mov ebx, edi
        je public_44914e
        lea ecx, ds:[ecx]
        public_449140 : nop
        mov ecx, ebx
        call public_4486d0
        add ebx, 0x10
        cmp ebx, ebp
        jne public_449140
        public_44914e : nop
        mov dword ptr ds : [esi+8], edi
        public_449151 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x448ef0)
    }
}

#undef public_448f02
#undef public_448f0a
#undef public_448f1e
#undef public_448f26
#undef public_448f4e
#undef public_448f52
#undef public_448f65
#undef public_448fef
#undef public_449030
#undef public_449053
#undef public_449063
#undef public_449090
#undef public_4490b8
#undef public_4490c0
#undef public_4490e3
#undef public_4490f3
#undef public_449110
#undef public_449134
#undef public_449140
#undef public_44914e
#undef public_449151
