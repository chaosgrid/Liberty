#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31110);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62788);

#define public_6d31162 _public_6d31162
#define public_6d31178 _public_6d31178
#define public_6d3118a _public_6d3118a
#define public_6d311a5 _public_6d311a5
#define public_6d311d0 _public_6d311d0
#define public_6d311e0 _public_6d311e0
#define public_6d311f0 _public_6d311f0
#define public_6d31205 _public_6d31205
#define public_6d31218 _public_6d31218
#define public_6d3122d _public_6d3122d

PROC_DECLARE(0x6d31110, internal_6d31110, public_6d31110);
extern "C" NAKED register_t __cdecl internal_6d31110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62788 @0x6d31112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, ebp
        sub eax, ecx
        xor edx, edx
        sar eax, 1
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], offset public_6d69d20
        lea edi, ds:[eax+eax]
        cmp edi, edx
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6d31162
        mov edi, 1
        public_6d31162 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx]
        cmp eax, edx
        je public_6d31178
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, edi
        cmp eax, ecx
        jbe public_6d311a5
        public_6d31178 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        lea eax, ds:[ebx+4]
        mov dword ptr ss : [esp+0x28], edi
        jae public_6d3118a
        lea eax, ss:[esp+0x28]
        public_6d3118a : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [ebx], eax
        public_6d311a5 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+4]
        add edi, 3
        and edi, 0xFFFFFFFC
        add edi, ecx
        mov dword ptr ds : [eax+4], edi
        lea edx, ds:[ecx+eax+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ds : [esi+0x18], edx
        mov dword ptr ds : [esi], offset public_6d69de8
        je public_6d311e0
        lea esp, ss:[esp]
        public_6d311d0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d311d0
        public_6d311e0 : nop
        mov edi, dword ptr ss : [esp+0x24]
        cmp edi, ebp
        je public_6d31205
        mov ebx, dword ptr ds : [public_6d64ba0]
        mov edi, edi
        public_6d311f0 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call ebx
        mov word ptr ds : [edi], ax
        add edi, 2
        add esp, 4
        cmp edi, ebp
        jne public_6d311f0
        public_6d31205 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x10]
        lea ebx, ds:[edi+edx*2]
        cmp edi, ebx
        je public_6d3122d
        mov ebp, dword ptr ds : [public_6d64bac]
        public_6d31218 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call ebp
        mov word ptr ds : [edi], ax
        add edi, 2
        add esp, 4
        cmp edi, ebx
        jne public_6d31218
        public_6d3122d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6d31110)
    }
}

#undef public_6d31162
#undef public_6d31178
#undef public_6d3118a
#undef public_6d311a5
#undef public_6d311d0
#undef public_6d311e0
#undef public_6d311f0
#undef public_6d31205
#undef public_6d31218
#undef public_6d3122d
