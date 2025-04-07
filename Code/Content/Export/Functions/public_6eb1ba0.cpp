#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9f99);

#define public_6eb1c20 _public_6eb1c20
#define public_6eb1c39 _public_6eb1c39
#define public_6eb1c61 _public_6eb1c61
#define public_6eb1c7b _public_6eb1c7b
#define public_6eb1c98 _public_6eb1c98
#define public_6eb1ca2 _public_6eb1ca2
#define public_6eb1cb0 _public_6eb1cb0

PROC_DECLARE(0x6eb1ba0, internal_6eb1ba0, public_6eb1ba0);
extern "C" NAKED register_t __cdecl internal_6eb1ba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9f99 @0x6eb1ba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9f99
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_6eb1cb0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [eax+4], edx
        mov al, byte ptr ss : [esp+0x28]
        push ebp
        push 0xC
        lea ebp, ds:[ecx+8]
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        je public_6eb1c39
        mov edi, edi
        public_6eb1c20 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6eb1c20
        public_6eb1c39 : nop
        mov ecx, esi
        call public_6ecfec0
        cmp esi, ebp
        je public_6eb1c98
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebp
        call public_6f1df30
        cmp edi, ebx
        mov ebp, dword ptr ss : [ebp+4]
        je public_6eb1c7b
        mov eax, dword ptr ss : [esp+0x34]
        public_6eb1c61 : nop
        cmp eax, ebp
        je public_6eb1c7b
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], eax
        jne public_6eb1c61
        public_6eb1c7b : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x34]
        push ebp
        push edx
        push ebx
        mov ecx, esi
        call public_6ed0230
        pop ebx
        public_6eb1c98 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        pop ebp
        je public_6eb1cb0
        public_6eb1ca2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6eb1ca2
        public_6eb1cb0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eb1ba0)
    }
}

#undef public_6eb1c20
#undef public_6eb1c39
#undef public_6eb1c61
#undef public_6eb1c7b
#undef public_6eb1c98
#undef public_6eb1ca2
#undef public_6eb1cb0
