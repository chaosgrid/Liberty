#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6efc910);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f80550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb073e);

#define public_6f80590 _public_6f80590
#define public_6f805b4 _public_6f805b4
#define public_6f805e0 _public_6f805e0
#define public_6f80604 _public_6f80604
#define public_6f80630 _public_6f80630
#define public_6f80654 _public_6f80654

PROC_DECLARE(0x6f80550, internal_6f80550, public_6f80550);
extern "C" NAKED register_t __cdecl internal_6f80550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb073e @0x6f80552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb073e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x48]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x44]
        xor ebx, ebx
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6f805b4
        lea esp, ss:[esp]
        public_6f80590 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6efc910
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f80590
        public_6f805b4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x28]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6f80604
        nop 
        lea esp, ss:[esp]
        public_6f805e0 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f805e0
        public_6f80604 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x1C]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_6f80654
        lea ebx, ds:[ebx]
        public_6f80630 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f80630
        public_6f80654 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb43f8
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f80550)
    }
}

#undef public_6f80590
#undef public_6f805b4
#undef public_6f805e0
#undef public_6f80604
#undef public_6f80630
#undef public_6f80654
