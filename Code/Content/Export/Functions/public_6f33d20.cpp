#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f33d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faeb6a);

#define public_6f33d60 _public_6f33d60
#define public_6f33d86 _public_6f33d86
#define public_6f33d9f _public_6f33d9f

PROC_DECLARE(0x6f33d20, internal_6f33d20, public_6f33d20);
extern "C" NAKED register_t __cdecl internal_6f33d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faeb6a @0x6f33d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faeb6a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, dword ptr ds : [esi+0x16C]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x20], 3
        je public_6f33d60
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x16C], ebx
        public_6f33d60 : nop
        lea edi, ds:[esi+0x158]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        je public_6f33d9f
        public_6f33d86 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f33d86
        public_6f33d9f : nop
        mov ecx, edi
        call public_6ecfec0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x140]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov eax, dword ptr ds : [esi+0x12C]
        push eax
        call public_6fa8fe0
        add esp, 0xC
        mov ecx, esi
        mov dword ptr ds : [esi+0x12C], ebx
        mov dword ptr ds : [esi+0x130], ebx
        mov dword ptr ds : [esi+0x134], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6eb7230
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f33d20)
    }
}

#undef public_6f33d60
#undef public_6f33d86
#undef public_6f33d9f
