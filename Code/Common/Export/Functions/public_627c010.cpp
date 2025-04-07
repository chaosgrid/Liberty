#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c6b0);
CLANG_FORWARD_PROC_SYMBOL(public_627c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_627c990);
CLANG_FORWARD_PROC_SYMBOL(public_627c9d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_JUMP_SYMBOL(public_6392c56);

#define public_627c055 _public_627c055
#define public_627c07e _public_627c07e
#define public_627c085 _public_627c085
#define public_627c095 _public_627c095
#define public_627c0b4 _public_627c0b4
#define public_627c0dd _public_627c0dd
#define public_627c100 _public_627c100
#define public_627c109 _public_627c109
#define public_627c10b _public_627c10b
#define public_627c120 _public_627c120
#define public_627c138 _public_627c138
#define public_627c148 _public_627c148
#define public_627c170 _public_627c170
#define public_627c179 _public_627c179
#define public_627c17b _public_627c17b
#define public_627c190 _public_627c190
#define public_627c1b0 _public_627c1b0
#define public_627c1c0 _public_627c1c0

PROC_DECLARE(0x627c010, internal_627c010, public_627c010);
extern "C" NAKED register_t __cdecl internal_627c010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392c56 @0x627c012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392c56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        push 1
        lea eax, ss:[esp+0x14]
        lea ebp, ds:[edi+0xC]
        xor ebx, ebx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x18], ebx
        call public_627c8d0
        test al, al
        je public_627c07e
        public_627c055 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_62fd570
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ds : [edx+8], ebx
        call public_627c8d0
        test al, al
        jne public_627c055
        public_627c07e : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_627c095
        public_627c085 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call public_627c6b0
        cmp esi, ebx
        jne public_627c085
        public_627c095 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call public_627c8d0
        test al, al
        je public_627c0dd
        public_627c0b4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_62fd570
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], ebx
        call public_627c8d0
        test al, al
        jne public_627c0b4
        public_627c0dd : nop
        mov ecx, esi
        call public_627c990
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+8], bl
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_639b5a4
        mov byte ptr ss : [esp+0x24], 2
        xor edi, edi
        mov edi, edi
        public_627c100 : nop
        cmp edi, ebx
        jne public_627c109
        mov edi, dword ptr ds : [esi+4]
        jmp public_627c10b
        public_627c109 : nop
        mov edi, dword ptr ds : [edi]
        public_627c10b : nop
        cmp edi, ebx
        je public_627c120
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_627c100
        public_627c120 : nop
        mov ecx, esi
        call public_627c990
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x24], bl
        mov dword ptr ds : [esi], offset public_639b59c
        je public_627c148
        public_627c138 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_627c6b0
        cmp edi, ebx
        jne public_627c138
        public_627c148 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        call public_627c9d0
        mov edi, ebp
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_639b5a4
        mov dword ptr ss : [esp+0x24], 3
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_627c170 : nop
        cmp esi, ebx
        jne public_627c179
        mov esi, dword ptr ds : [edi+4]
        jmp public_627c17b
        public_627c179 : nop
        mov esi, dword ptr ds : [esi]
        public_627c17b : nop
        cmp esi, ebx
        je public_627c190
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_627c170
        public_627c190 : nop
        mov ecx, edi
        call public_627c990
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [edi], offset public_639b59c
        je public_627c1c0
        lea esp, ss:[esp]
        public_627c1b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_627c6b0
        cmp esi, ebx
        jne public_627c1b0
        public_627c1c0 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        call public_627c9d0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x627c010)
    }
}

#undef public_627c055
#undef public_627c07e
#undef public_627c085
#undef public_627c095
#undef public_627c0b4
#undef public_627c0dd
#undef public_627c100
#undef public_627c109
#undef public_627c10b
#undef public_627c120
#undef public_627c138
#undef public_627c148
#undef public_627c170
#undef public_627c179
#undef public_627c17b
#undef public_627c190
#undef public_627c1b0
#undef public_627c1c0
