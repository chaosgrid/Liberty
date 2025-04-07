#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9e50);
CLANG_FORWARD_PROC_SYMBOL(public_6efa020);
CLANG_FORWARD_PROC_SYMBOL(public_6efa050);
CLANG_FORWARD_PROC_SYMBOL(public_6efa340);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8140);
CLANG_FORWARD_PROC_SYMBOL(public_6fa83c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8be0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb21f8);

#define public_6fa8180 _public_6fa8180
#define public_6fa8193 _public_6fa8193
#define public_6fa81a9 _public_6fa81a9
#define public_6fa81c5 _public_6fa81c5
#define public_6fa81d0 _public_6fa81d0
#define public_6fa81e6 _public_6fa81e6
#define public_6fa81f6 _public_6fa81f6
#define public_6fa8220 _public_6fa8220
#define public_6fa8244 _public_6fa8244
#define public_6fa8287 _public_6fa8287
#define public_6fa8293 _public_6fa8293
#define public_6fa8306 _public_6fa8306
#define public_6fa8320 _public_6fa8320
#define public_6fa8358 _public_6fa8358

PROC_DECLARE(0x6fa8140, internal_6fa8140, public_6fa8140);
extern "C" NAKED register_t __cdecl internal_6fa8140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb21f8 @0x6fa8142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb21f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push edi
        push ecx
        push eax
        push eax
        call public_6fa8be0
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        xor ebx, ebx
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        mov edi, ebp
        je public_6fa8193
        public_6fa8180 : nop
        push ebx
        mov ecx, edi
        call public_6fa8ee0
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x50
        cmp edi, eax
        jne public_6fa8180
        public_6fa8193 : nop
        mov edi, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jne public_6fa81a9
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6fa81c5
        public_6fa81a9 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov ebp, edx
        public_6fa81c5 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_6fa81d0
        xor edx, edx
        jmp public_6fa81e6
        public_6fa81d0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa81e6 : nop
        cmp edx, ebp
        jae public_6fa8287
        cmp ebp, ebx
        mov eax, ebp
        jge public_6fa81f6
        xor eax, eax
        public_6fa81f6 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 4
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6fa8244
        lea esp, ss:[esp]
        public_6fa8220 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push eax
        call public_6efa340
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, 0x50
        add ebp, 0x50
        add esp, 8
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6fa8220
        public_6fa8244 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6efa020
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa83c0
        lea ecx, ds:[eax+eax*4]
        shl ecx, 4
        add ecx, edi
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [esi+8], ecx
        public_6fa8287 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [edi+8]
        je public_6fa8358
        public_6fa8293 : nop
        push ebp
        lea ecx, ss:[esp+0x20]
        call public_6ef9e50
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ss : [esp+0x68], edx
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x80], ebx
        call public_6efa050
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x7C], 2
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ss : [esp+0x50]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov byte ptr ss : [esp+0x74], 1
        mov dword ptr ss : [esp+0x18], eax
        je public_6fa8320
        public_6fa8306 : nop
        push ebx
        mov ecx, edi
        call public_6efa720
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x80
        cmp edi, eax
        jne public_6fa8306
        mov edi, dword ptr ss : [esp+0x4C]
        public_6fa8320 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6ef9e10
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [edx+8]
        add ebp, 0x50
        cmp ebp, eax
        jne public_6fa8293
        public_6fa8358 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x6fa8140)
    }
}

#undef public_6fa8180
#undef public_6fa8193
#undef public_6fa81a9
#undef public_6fa81c5
#undef public_6fa81d0
#undef public_6fa81e6
#undef public_6fa81f6
#undef public_6fa8220
#undef public_6fa8244
#undef public_6fa8287
#undef public_6fa8293
#undef public_6fa8306
#undef public_6fa8320
#undef public_6fa8358
