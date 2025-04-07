#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f855f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0a88);

#define public_6f85670 _public_6f85670
#define public_6f85678 _public_6f85678
#define public_6f85687 _public_6f85687
#define public_6f85692 _public_6f85692
#define public_6f856a0 _public_6f856a0
#define public_6f856b4 _public_6f856b4
#define public_6f856c7 _public_6f856c7
#define public_6f856cf _public_6f856cf
#define public_6f856d7 _public_6f856d7
#define public_6f856df _public_6f856df
#define public_6f856e7 _public_6f856e7
#define public_6f856f3 _public_6f856f3
#define public_6f856fb _public_6f856fb
#define public_6f8572b _public_6f8572b
#define public_6f85750 _public_6f85750
#define public_6f85776 _public_6f85776
#define public_6f85779 _public_6f85779

PROC_DECLARE(0x6f855f0, internal_6f855f0, public_6f855f0);
extern "C" NAKED register_t __cdecl internal_6f855f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0a88 @0x6f855f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0a88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x10], ebp
        call public_6eac680
        mov al, byte ptr ss : [esp+0x24]
        xor edx, edx
        mov dword ptr ss : [ebp+0x1C], edx
        lea esi, ss:[ebp+0x20]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ss : [ebp+0x30], 0x3A
        mov dword ptr ss : [ebp+0x34], edx
        mov dword ptr ss : [ebp+0x38], edx
        mov dword ptr ss : [ebp+0x3C], edx
        mov dword ptr ss : [ebp+0x40], edx
        mov byte ptr ss : [ebp+0x44], dl
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp], offset public_6fbc710
        mov ecx, dword ptr ds : [edi+0x1C]
        add edi, 0x20
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [ebp+0x1C], ecx
        je public_6f85779
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f85670
        xor ebx, ebx
        jmp public_6f85678
        public_6f85670 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f85678 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        je public_6f85687
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f85687 : nop
        cmp ebx, edx
        ja public_6f856c7
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6f856a0
        public_6f85692 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f85692
        public_6f856a0 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f856b4
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6f85776
        public_6f856b4 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6f85776
        public_6f856c7 : nop
        test eax, eax
        jne public_6f856cf
        xor ebx, ebx
        jmp public_6f856d7
        public_6f856cf : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f856d7 : nop
        test ecx, ecx
        jne public_6f856df
        xor edx, edx
        jmp public_6f856e7
        public_6f856df : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_6f856e7 : nop
        cmp ebx, edx
        ja public_6f8572b
        test ecx, ecx
        jne public_6f856f3
        xor edx, edx
        jmp public_6f856fb
        public_6f856f3 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f856fb : nop
        push ecx
        lea ebx, ds:[eax+edx*4]
        push ebx
        push eax
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f85779
        public_6f8572b : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f85750
        xor eax, eax
        public_6f85750 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        public_6f85776 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f85779 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f855f0)
    }
}

#undef public_6f85670
#undef public_6f85678
#undef public_6f85687
#undef public_6f85692
#undef public_6f856a0
#undef public_6f856b4
#undef public_6f856c7
#undef public_6f856cf
#undef public_6f856d7
#undef public_6f856df
#undef public_6f856e7
#undef public_6f856f3
#undef public_6f856fb
#undef public_6f8572b
#undef public_6f85750
#undef public_6f85776
#undef public_6f85779
