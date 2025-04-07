#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6efac00);
CLANG_FORWARD_PROC_SYMBOL(public_6efae10);
CLANG_FORWARD_PROC_SYMBOL(public_6efb0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f81940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac768);

#define public_6efac40 _public_6efac40
#define public_6efac53 _public_6efac53
#define public_6efac69 _public_6efac69
#define public_6efac85 _public_6efac85
#define public_6efac90 _public_6efac90
#define public_6efaca6 _public_6efaca6
#define public_6efacb6 _public_6efacb6
#define public_6eface0 _public_6eface0
#define public_6efad04 _public_6efad04
#define public_6efad45 _public_6efad45
#define public_6efad51 _public_6efad51
#define public_6efad62 _public_6efad62
#define public_6efad6a _public_6efad6a
#define public_6efad70 _public_6efad70
#define public_6efadea _public_6efadea

PROC_DECLARE(0x6efac00, internal_6efac00, public_6efac00);
extern "C" NAKED register_t __cdecl internal_6efac00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac768 @0x6efac02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac768
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push eax
        call public_6efb0a0
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        xor ebx, ebx
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        mov esi, ebp
        je public_6efac53
        public_6efac40 : nop
        push ebx
        mov ecx, esi
        call public_6f81940
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x14
        cmp esi, eax
        jne public_6efac40
        public_6efac53 : nop
        mov dword ptr ds : [edi+8], ebp
        mov ebp, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_6efac69
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6efac85
        public_6efac69 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov esi, edx
        public_6efac85 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jne public_6efac90
        xor edx, edx
        jmp public_6efaca6
        public_6efac90 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6efaca6 : nop
        cmp edx, esi
        jae public_6efad45
        cmp esi, ebx
        mov eax, esi
        jge public_6efacb6
        xor eax, eax
        public_6efacb6 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov esi, dword ptr ds : [edi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x18], eax
        je public_6efad04
        lea esp, ss:[esp]
        public_6eface0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push eax
        call public_6ef8060
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, 0x14
        add esi, 0x14
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6eface0
        public_6efad04 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        push edx
        mov ecx, edi
        call public_6efae10
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ss:[ebp+eax*4]
        mov dword ptr ds : [edi+0xC], ecx
        add esp, 4
        mov ecx, edi
        call public_6f38a80
        lea edx, ds:[eax+eax*4]
        lea eax, ss:[ebp+edx*4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+8], eax
        public_6efad45 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6efadea
        public_6efad51 : nop
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x1C], cl
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        jne public_6efad62
        xor eax, eax
        jmp public_6efad6a
        public_6efad62 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6efad6a : nop
        cmp eax, ebx
        jge public_6efad70
        xor eax, eax
        public_6efad70 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6ed2700
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x44], ebx
        call public_6ef70c0
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x14
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        jne public_6efad51
        public_6efadea : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6efac00)
    }
}

#undef public_6efac40
#undef public_6efac53
#undef public_6efac69
#undef public_6efac85
#undef public_6efac90
#undef public_6efaca6
#undef public_6efacb6
#undef public_6eface0
#undef public_6efad04
#undef public_6efad45
#undef public_6efad51
#undef public_6efad62
#undef public_6efad6a
#undef public_6efad70
#undef public_6efadea
