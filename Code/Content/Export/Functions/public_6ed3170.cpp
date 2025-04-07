#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3170);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab16c);

#define public_6ed31f0 _public_6ed31f0
#define public_6ed320e _public_6ed320e
#define public_6ed322a _public_6ed322a
#define public_6ed3232 _public_6ed3232
#define public_6ed3238 _public_6ed3238
#define public_6ed3257 _public_6ed3257
#define public_6ed325f _public_6ed325f
#define public_6ed3269 _public_6ed3269
#define public_6ed327d _public_6ed327d

PROC_DECLARE(0x6ed3170, internal_6ed3170, public_6ed3170);
extern "C" NAKED register_t __cdecl internal_6ed3170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab16c @0x6ed3172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab16c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6ed327d
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        add edi, 4
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+4], edx
        mov al, byte ptr ds : [esi+0xC]
        lea ebx, ds:[edi+8]
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [ebx], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_6ed320e
        lea esp, ss:[esp]
        public_6ed31f0 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[ebp+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        call public_6f1e390
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_6ed31f0
        public_6ed320e : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x14], eax
        mov cl, byte ptr ds : [esi+0x1C]
        mov byte ptr ds : [edi+0x18], cl
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        mov byte ptr ss : [esp+0x28], 1
        jne public_6ed322a
        xor eax, eax
        jmp public_6ed3232
        public_6ed322a : nop
        mov eax, dword ptr ds : [esi+0x24]
        sub eax, ecx
        sar eax, 2
        public_6ed3232 : nop
        test eax, eax
        jge public_6ed3238
        xor eax, eax
        public_6ed3238 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x1C], eax
        mov edx, dword ptr ds : [esi+0x24]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 4
        cmp eax, edx
        je public_6ed3269
        public_6ed3257 : nop
        test ecx, ecx
        je public_6ed325f
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6ed325f : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ed3257
        public_6ed3269 : nop
        mov dword ptr ds : [edi+0x20], ecx
        mov dword ptr ds : [edi+0x24], ecx
        mov al, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [edi+0x28], al
        mov ecx, dword ptr ds : [esi+0x30]
        pop esi
        mov dword ptr ds : [edi+0x2C], ecx
        pop ebx
        public_6ed327d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6ed3170)
    }
}

#undef public_6ed31f0
#undef public_6ed320e
#undef public_6ed322a
#undef public_6ed3232
#undef public_6ed3238
#undef public_6ed3257
#undef public_6ed325f
#undef public_6ed3269
#undef public_6ed327d
