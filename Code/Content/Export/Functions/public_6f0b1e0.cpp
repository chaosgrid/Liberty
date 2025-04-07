#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad248);

#define public_6f0b27b _public_6f0b27b
#define public_6f0b281 _public_6f0b281
#define public_6f0b2a2 _public_6f0b2a2

PROC_DECLARE(0x6f0b1e0, internal_6f0b1e0, public_6f0b1e0);
extern "C" NAKED register_t __cdecl internal_6f0b1e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad248 @0x6f0b1e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad248
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        mov al, byte ptr ss : [esp+0x58]
        push ebx
        push esi
        push edi
        push 0x2C
        mov edi, ecx
        mov byte ptr ss : [esp+0x10], al
        call public_6fa912a
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [esi], esi
        mov dword ptr ds : [esi+4], esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x60], ebx
        call public_6eb70f0
        mov ecx, dword ptr ds : [edi+0x18]
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        call dword ptr ds : [edx+0x18]
        test al, al
        jne public_6f0b27b
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx], 2
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [eax], edx
        public_6f0b27b : nop
        mov edi, dword ptr ds : [esi]
        cmp edi, esi
        je public_6f0b2a2
        public_6f0b281 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        add esp, 4
        dec ebx
        cmp edi, esi
        jne public_6f0b281
        public_6f0b2a2 : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0x10
        UNREACHABLE_TRAP(0x6f0b1e0)
    }
}

#undef public_6f0b27b
#undef public_6f0b281
#undef public_6f0b2a2
