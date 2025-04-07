#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f480e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48190);
CLANG_FORWARD_PROC_SYMBOL(public_6f48ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4daa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf122);

#define public_6f4cba0 _public_6f4cba0
#define public_6f4cbc5 _public_6f4cbc5
#define public_6f4cbc8 _public_6f4cbc8
#define public_6f4cbe0 _public_6f4cbe0
#define public_6f4cbe6 _public_6f4cbe6
#define public_6f4cc18 _public_6f4cc18
#define public_6f4cc1e _public_6f4cc1e
#define public_6f4cc35 _public_6f4cc35
#define public_6f4cd1a _public_6f4cd1a
#define public_6f4cd26 _public_6f4cd26

PROC_DECLARE(0x6f4caa0, internal_6f4caa0, public_6f4caa0);
extern "C" NAKED register_t __cdecl internal_6f4caa0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf122 @0x6f4caa8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf122
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x64]
        mov edi, ecx
        push eax
        lea edx, ss:[esp+0x1C]
        lea ecx, ds:[edi+0x20C]
        push edx
        call public_6f7b0f0
        mov eax, dword ptr ds : [edi+0x210]
        cmp dword ptr ss : [esp+0x18], eax
        jne public_6f4cd26
        mov ecx, dword ptr ds : [edi+0x200]
        lea esi, ds:[edi+0x1FC]
        xor ebx, ebx
        cmp ecx, ebx
        je public_6f4cd26
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6f4cd26
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edi+0x200]
        push ecx
        mov ecx, dword ptr ds : [eax]
        call public_6f48190
        test al, al
        je public_6f4cd26
        lea edx, ss:[esp+0x64]
        push edx
        call public_6f49b00
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        lea ecx, ds:[edi+0x20C]
        call public_6f003e0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6f480e0
        mov eax, dword ptr ds : [edi+0x228]
        mov ecx, dword ptr ds : [edi+0x22C]
        cmp eax, ecx
        lea esi, ds:[edi+0x224]
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4cbc5
        lea esp, ss:[esp]
        public_6f4cba0 : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [public_6fb32c4]
        add esp, 8
        test al, al
        jne public_6f4cc18
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+8]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f4cba0
        public_6f4cbc5 : nop
        mov ecx, dword ptr ds : [esi+8]
        public_6f4cbc8 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4cc35
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_6f4cbe0
        sub eax, ecx
        sar eax, 4
        cmp eax, 8
        jae public_6f4cbe6
        public_6f4cbe0 : nop
        inc dword ptr ds : [edi+0x220]
        public_6f4cbe6 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_6f4daa0
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f4cc1e
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        mov ecx, esi
        call public_6f4e220
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call public_6f4daa0
        jmp public_6f4cc35
        public_6f4cc18 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        jmp public_6f4cbc8
        public_6f4cc1e : nop
        lea edx, ss:[esp+0xF]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x17], bl
        call public_6fa6e80
        public_6f4cc35 : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[edi+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_6f48ba0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+8]
        mov ecx, eax
        call public_6f1cee0
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov byte ptr ss : [esp+0x46], bl
        mov byte ptr ss : [esp+0x47], bl
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x49], bl
        mov byte ptr ss : [esp+0x4A], bl
        mov byte ptr ss : [esp+0x4B], bl
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        mov byte ptr ss : [esp+0x4E], bl
        mov byte ptr ss : [esp+0x4F], bl
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        mov esi, dword ptr ds : [public_6fb369c]
        push ebx
        push 0xA
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov byte ptr ss : [esp+0x6C], 1
        call esi
        add esp, 0x10
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x5C], bl
        call dword ptr ds : [public_6fb3034]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        push ebx
        push 8
        add edi, 0x68
        lea edx, ss:[esp+0x1C]
        push edi
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        call esi
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x10
        cmp eax, ebx
        je public_6f4cd26
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f4cd1a
        cmp cl, 0xFF
        je public_6f4cd1a
        pop edi
        dec cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 4
        public_6f4cd1a : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4cd26 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6f4caa0)
    }
}

#undef public_6f4cba0
#undef public_6f4cbc5
#undef public_6f4cbc8
#undef public_6f4cbe0
#undef public_6f4cbe6
#undef public_6f4cc18
#undef public_6f4cc1e
#undef public_6f4cc35
#undef public_6f4cd1a
#undef public_6f4cd26
