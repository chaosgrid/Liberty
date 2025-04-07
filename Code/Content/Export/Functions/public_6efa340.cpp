#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6efa340);
CLANG_FORWARD_PROC_SYMBOL(public_6efa7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac708);

#define public_6efa3ab _public_6efa3ab
#define public_6efa3c1 _public_6efa3c1
#define public_6efa3c9 _public_6efa3c9
#define public_6efa3f0 _public_6efa3f0
#define public_6efa408 _public_6efa408
#define public_6efa42a _public_6efa42a
#define public_6efa432 _public_6efa432
#define public_6efa438 _public_6efa438
#define public_6efa460 _public_6efa460
#define public_6efa479 _public_6efa479
#define public_6efa48d _public_6efa48d
#define public_6efa4b0 _public_6efa4b0
#define public_6efa4de _public_6efa4de

PROC_DECLARE(0x6efa340, internal_6efa340, public_6efa340);
extern "C" NAKED register_t __cdecl internal_6efa340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac708 @0x6efa342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac708
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0
        je public_6efa4de
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov al, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [edi+0x18], al
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6efa3ab
        xor edx, edx
        jmp public_6efa3c1
        public_6efa3ab : nop
        mov ecx, dword ptr ds : [esi+0x20]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6efa3c1 : nop
        test edx, edx
        mov eax, edx
        jge public_6efa3c9
        xor eax, eax
        public_6efa3c9 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov ebx, eax
        je public_6efa408
        nop 
        lea esp, ss:[esp]
        public_6efa3f0 : nop
        push ebp
        push ebx
        call public_6ef8060
        mov eax, dword ptr ss : [esp+0x38]
        add ebp, 0x14
        add esp, 8
        add ebx, 0x14
        cmp ebp, eax
        jne public_6efa3f0
        public_6efa408 : nop
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], eax
        mov cl, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [edi+0x2C], cl
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 1
        jne public_6efa42a
        xor eax, eax
        jmp public_6efa432
        public_6efa42a : nop
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 7
        public_6efa432 : nop
        test eax, eax
        jge public_6efa438
        xor eax, eax
        public_6efa438 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov ebx, dword ptr ds : [esi+0x30]
        add esp, 4
        cmp ebx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6efa48d
        nop 
        lea esp, ss:[esp]
        public_6efa460 : nop
        mov dword ptr ss : [esp+0x18], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x24], 2
        je public_6efa479
        push ebx
        mov ecx, ebp
        call public_6efa7c0
        mov ecx, dword ptr ss : [esp+0x30]
        public_6efa479 : nop
        add ebp, 0x80
        add ebx, 0x80
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6efa460
        public_6efa48d : nop
        mov dword ptr ds : [edi+0x34], ebp
        mov dword ptr ds : [edi+0x38], ebp
        mov dl, byte ptr ds : [esi+0x3C]
        lea ebp, ds:[esi+0x3C]
        lea ebx, ds:[edi+0x3C]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [ebx], dl
        call public_6eae300
        test eax, eax
        jge public_6efa4b0
        xor eax, eax
        public_6efa4b0 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6ed2700
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [esi+0x4C]
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x4C], ecx
        pop ebx
        public_6efa4de : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6efa340)
    }
}

#undef public_6efa3ab
#undef public_6efa3c1
#undef public_6efa3c9
#undef public_6efa3f0
#undef public_6efa408
#undef public_6efa42a
#undef public_6efa432
#undef public_6efa438
#undef public_6efa460
#undef public_6efa479
#undef public_6efa48d
#undef public_6efa4b0
#undef public_6efa4de
