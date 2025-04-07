#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);
CLANG_FORWARD_PROC_SYMBOL(public_6f79100);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ade0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb04e6);

#define public_6f79144 _public_6f79144
#define public_6f7914c _public_6f7914c
#define public_6f7918a _public_6f7918a
#define public_6f791a0 _public_6f791a0
#define public_6f791a8 _public_6f791a8
#define public_6f791eb _public_6f791eb
#define public_6f791f3 _public_6f791f3
#define public_6f791f9 _public_6f791f9
#define public_6f79218 _public_6f79218
#define public_6f79236 _public_6f79236
#define public_6f79259 _public_6f79259

PROC_DECLARE(0x6f79100, internal_6f79100, public_6f79100);
extern "C" NAKED register_t __cdecl internal_6f79100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb04e6 @0x6f79102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb04e6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        mov edi, dword ptr ss : [esp+0x28]
        push edi
        mov esi, ecx
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], eax
        je public_6f79144
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f79144
        lea eax, ss:[esp+0x28]
        jmp public_6f7914c
        public_6f79144 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6f7914c : nop
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        mov dl, byte ptr ds : [esi+0x18]
        lea ebx, ds:[edi+0x18]
        mov byte ptr ds : [ebx], dl
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebp
        jne public_6f7918a
        xor edx, edx
        jmp public_6f791a0
        public_6f7918a : nop
        mov ecx, dword ptr ds : [esi+0x20]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f791a0 : nop
        cmp edx, ebp
        mov eax, edx
        jge public_6f791a8
        xor eax, eax
        public_6f791a8 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6f7ade0
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], edx
        mov al, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [edi+0x2C], al
        mov ecx, dword ptr ds : [esi+0x30]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        jne public_6f791eb
        xor eax, eax
        jmp public_6f791f3
        public_6f791eb : nop
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 7
        public_6f791f3 : nop
        cmp eax, ebp
        jge public_6f791f9
        xor eax, eax
        public_6f791f9 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ebx, eax
        je public_6f79236
        public_6f79218 : nop
        push ebp
        push ebx
        call public_6ef8110
        mov eax, dword ptr ss : [esp+0x30]
        add ebp, 0x80
        add esp, 8
        add ebx, 0x80
        cmp ebp, eax
        jne public_6f79218
        public_6f79236 : nop
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov cl, byte ptr ds : [esi+0x3C]
        lea ebx, ds:[esi+0x3C]
        lea esi, ds:[edi+0x3C]
        mov byte ptr ds : [esi], cl
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 1
        call public_6eae300
        test eax, eax
        jge public_6f79259
        xor eax, eax
        public_6f79259 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f79100)
    }
}

#undef public_6f79144
#undef public_6f7914c
#undef public_6f7918a
#undef public_6f791a0
#undef public_6f791a8
#undef public_6f791eb
#undef public_6f791f3
#undef public_6f791f9
#undef public_6f79218
#undef public_6f79236
#undef public_6f79259
