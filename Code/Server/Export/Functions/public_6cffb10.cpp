#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e19);

#define public_6cffba7 _public_6cffba7
#define public_6cffba9 _public_6cffba9
#define public_6cffbaf _public_6cffbaf
#define public_6cffbf0 _public_6cffbf0
#define public_6cffc0c _public_6cffc0c
#define public_6cffc16 _public_6cffc16
#define public_6cffc30 _public_6cffc30
#define public_6cffc3c _public_6cffc3c
#define public_6cffc3e _public_6cffc3e
#define public_6cffc60 _public_6cffc60
#define public_6cffc6c _public_6cffc6c

PROC_DECLARE(0x6cffb10, internal_6cffb10, public_6cffb10);
extern "C" NAKED register_t __cdecl internal_6cffb10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e19 @0x6cffb18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cffc16
        mov cl, byte ptr ss : [esp+0x38]
        push ebx
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x14], cl
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0x3C]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x20], 0x15
        mov dword ptr ss : [esp+0x24], ecx
        je public_6cffbaf
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, ebx
        je public_6cffbaf
        push 0x7F0000
        push ecx
        mov ecx, eax
        call public_6d0c8d0
        cmp eax, ebx
        je public_6cffbaf
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        je public_6cffba7
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cffba9
        public_6cffba7 : nop
        xor eax, eax
        public_6cffba9 : nop
        mov esi, dword ptr ds : [eax+0xB4]
        public_6cffbaf : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x28], esi
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        push eax
        call dword ptr ds : [edx+0x1D4]
        mov ecx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov ebx, eax
        je public_6cffc0c
        nop 
        lea esp, ss:[esp]
        public_6cffbf0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebx
        jne public_6cffbf0
        mov eax, dword ptr ss : [esp+0x14]
        public_6cffc0c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop ebx
        public_6cffc16 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [edi+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], edx
        je public_6cffc3c
        nop 
        public_6cffc30 : nop
        cmp word ptr ds : [eax], dx
        je public_6cffc3e
        add eax, 2
        cmp eax, ecx
        jne public_6cffc30
        public_6cffc3c : nop
        mov eax, ecx
        public_6cffc3e : nop
        cmp eax, ecx
        jne public_6cffc6c
        lea edx, ss:[esp+0x38]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cffc6c
        mov ecx, dword ptr ss : [esp+0x38]
        mov edi, edi
        public_6cffc60 : nop
        cmp word ptr ds : [eax], cx
        je public_6cffc6c
        add eax, 2
        cmp eax, esi
        jne public_6cffc60
        public_6cffc6c : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6cffb10)
    }
}

#undef public_6cffba7
#undef public_6cffba9
#undef public_6cffbaf
#undef public_6cffbf0
#undef public_6cffc0c
#undef public_6cffc16
#undef public_6cffc30
#undef public_6cffc3c
#undef public_6cffc3e
#undef public_6cffc60
#undef public_6cffc6c
