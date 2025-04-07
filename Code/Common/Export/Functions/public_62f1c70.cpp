#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fa70);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1c70);
CLANG_FORWARD_PROC_SYMBOL(public_62fba30);
CLANG_FORWARD_PROC_SYMBOL(public_62fd2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639564b);

#define public_62f1cbb _public_62f1cbb
#define public_62f1cc3 _public_62f1cc3
#define public_62f1cce _public_62f1cce
#define public_62f1cd6 _public_62f1cd6
#define public_62f1ce7 _public_62f1ce7
#define public_62f1d13 _public_62f1d13
#define public_62f1d2c _public_62f1d2c
#define public_62f1d44 _public_62f1d44
#define public_62f1d4c _public_62f1d4c
#define public_62f1d54 _public_62f1d54
#define public_62f1d5c _public_62f1d5c
#define public_62f1d64 _public_62f1d64
#define public_62f1dac _public_62f1dac
#define public_62f1dd1 _public_62f1dd1
#define public_62f1df3 _public_62f1df3
#define public_62f1df6 _public_62f1df6
#define public_62f1dfa _public_62f1dfa
#define public_62f1e10 _public_62f1e10
#define public_62f1e34 _public_62f1e34
#define public_62f1e36 _public_62f1e36
#define public_62f1e4a _public_62f1e4a
#define public_62f1e4c _public_62f1e4c

PROC_DECLARE(0x62f1c70, internal_62f1c70, public_62f1c70);
extern "C" NAKED register_t __cdecl internal_62f1c70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639564b @0x62f1c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639564b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0x14], ebp
        call public_62f03c0
        lea edi, ds:[ebx+0x84]
        lea esi, ss:[ebp+0x84]
        cmp esi, edi
        je public_62f1dfa
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_62f1cbb
        xor edx, edx
        jmp public_62f1cc3
        public_62f1cbb : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebp
        sar edx, 4
        public_62f1cc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62f1cce
        xor eax, eax
        jmp public_62f1cd6
        public_62f1cce : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        public_62f1cd6 : nop
        cmp edx, eax
        ja public_62f1d44
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov dword ptr ss : [esp+0x14], edx
        mov eax, ebp
        je public_62f1d13
        public_62f1ce7 : nop
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov edx, dword ptr ss : [esp+0x14]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        jne public_62f1ce7
        mov ebx, dword ptr ss : [esp+0x28]
        public_62f1d13 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62f1d2c
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        shl edi, 4
        add edi, eax
        mov dword ptr ds : [esi+8], edi
        jmp public_62f1df6
        public_62f1d2c : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 4
        shl edi, 4
        add edi, eax
        mov dword ptr ds : [esi+8], edi
        jmp public_62f1df6
        public_62f1d44 : nop
        test ebp, ebp
        jne public_62f1d4c
        xor edx, edx
        jmp public_62f1d54
        public_62f1d4c : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebp
        sar edx, 4
        public_62f1d54 : nop
        test ecx, ecx
        jne public_62f1d5c
        xor eax, eax
        jmp public_62f1d64
        public_62f1d5c : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 4
        public_62f1d64 : nop
        cmp edx, eax
        ja public_62f1dac
        mov ecx, esi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+4]
        shl ebx, 4
        push ecx
        add ebx, ebp
        push ebx
        push eax
        call public_62fd2b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_62fba30
        mov ecx, edi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x28]
        shl eax, 4
        add eax, ecx
        jmp public_62f1df3
        public_62f1dac : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, edi
        call public_6316ac0
        test eax, eax
        jge public_62f1dd1
        xor eax, eax
        public_62f1dd1 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_62fba30
        mov dword ptr ds : [esi+0xC], eax
        public_62f1df3 : nop
        mov dword ptr ds : [esi+8], eax
        public_62f1df6 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_62f1dfa : nop
        mov ecx, dword ptr ds : [ebx+0x5C]
        lea eax, ss:[ebp+0x5C]
        mov dword ptr ds : [eax], ecx
        mov esi, dword ptr ds : [ebx+0x5C]
        test esi, esi
        mov edi, eax
        je public_62f1e4a
        or ebp, 0xFFFFFFFF
        mov edi, edi
        public_62f1e10 : nop
        push 0x6C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_62f1e34
        push esi
        mov ecx, eax
        call public_626fa70
        jmp public_62f1e36
        public_62f1e34 : nop
        xor eax, eax
        public_62f1e36 : nop
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [esi]
        test esi, esi
        mov dword ptr ss : [esp+0x20], ebp
        mov edi, eax
        jne public_62f1e10
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_62f1e4c
        public_62f1e4a : nop
        mov eax, ebp
        public_62f1e4c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62f1c70)
    }
}

#undef public_62f1cbb
#undef public_62f1cc3
#undef public_62f1cce
#undef public_62f1cd6
#undef public_62f1ce7
#undef public_62f1d13
#undef public_62f1d2c
#undef public_62f1d44
#undef public_62f1d4c
#undef public_62f1d54
#undef public_62f1d5c
#undef public_62f1d64
#undef public_62f1dac
#undef public_62f1dd1
#undef public_62f1df3
#undef public_62f1df6
#undef public_62f1dfa
#undef public_62f1e10
#undef public_62f1e34
#undef public_62f1e36
#undef public_62f1e4a
#undef public_62f1e4c
