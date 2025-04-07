#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f858c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0abf);

#define public_6f8596b _public_6f8596b
#define public_6f85973 _public_6f85973
#define public_6f8597e _public_6f8597e
#define public_6f85986 _public_6f85986
#define public_6f85993 _public_6f85993
#define public_6f859a1 _public_6f859a1
#define public_6f859b8 _public_6f859b8
#define public_6f859ce _public_6f859ce
#define public_6f859d6 _public_6f859d6
#define public_6f859de _public_6f859de
#define public_6f859e6 _public_6f859e6
#define public_6f859ee _public_6f859ee
#define public_6f85a2f _public_6f85a2f
#define public_6f85a54 _public_6f85a54
#define public_6f85a7d _public_6f85a7d

PROC_DECLARE(0x6f858c0, internal_6f858c0, public_6f858c0);
extern "C" NAKED register_t __cdecl internal_6f858c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0abf @0x6f858c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0abf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x14], edi
        call public_6eac680
        lea eax, ss:[esp+0x13]
        xor ebx, ebx
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        call public_6ead6a0
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[edi+0x38]
        mov dword ptr ds : [edi], offset public_6fbc700
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x30], 0x3A
        mov dword ptr ds : [edi+0x34], ebx
        call public_6eb7810
        mov byte ptr ds : [edi+0x44], bl
        mov cl, byte ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], 1
        mov byte ptr ds : [edi+0x5C], cl
        mov dword ptr ds : [edi+0x60], ebx
        mov dword ptr ds : [edi+0x64], ebx
        mov dword ptr ds : [edi+0x68], ebx
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], offset public_6fbc73c
        mov edx, dword ptr ss : [ebp+0x1C]
        add ebp, 0x20
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [edi+0x1C], edx
        je public_6f85a7d
        mov ebx, dword ptr ss : [ebp+4]
        test ebx, ebx
        jne public_6f8596b
        xor edx, edx
        jmp public_6f85973
        public_6f8596b : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ebx
        sar edx, 2
        public_6f85973 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f8597e
        xor eax, eax
        jmp public_6f85986
        public_6f8597e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f85986 : nop
        cmp edx, eax
        ja public_6f859ce
        mov edx, dword ptr ss : [ebp+8]
        mov eax, ebx
        cmp eax, edx
        je public_6f859a1
        public_6f85993 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f85993
        public_6f859a1 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f859b8
        mov eax, dword ptr ds : [esi+4]
        xor ebp, ebp
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f85a7d
        public_6f859b8 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ds : [esi+4]
        sar ebp, 2
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f85a7d
        public_6f859ce : nop
        test ebx, ebx
        jne public_6f859d6
        xor edx, edx
        jmp public_6f859de
        public_6f859d6 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ebx
        sar edx, 2
        public_6f859de : nop
        test ecx, ecx
        jne public_6f859e6
        xor eax, eax
        jmp public_6f859ee
        public_6f859e6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f859ee : nop
        cmp edx, eax
        ja public_6f85a2f
        mov ecx, esi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea ebx, ds:[ebx+eax*4]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push ebx
        push eax
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call public_6eed270
        mov ecx, ebp
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f85a7d
        public_6f85a2f : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        test eax, eax
        jge public_6f85a54
        xor eax, eax
        public_6f85a54 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f85a7d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f858c0)
    }
}

#undef public_6f8596b
#undef public_6f85973
#undef public_6f8597e
#undef public_6f85986
#undef public_6f85993
#undef public_6f859a1
#undef public_6f859b8
#undef public_6f859ce
#undef public_6f859d6
#undef public_6f859de
#undef public_6f859e6
#undef public_6f859ee
#undef public_6f85a2f
#undef public_6f85a54
#undef public_6f85a7d
