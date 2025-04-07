#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bc00);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d621ce);

#define public_6d1bc74 _public_6d1bc74
#define public_6d1bc7d _public_6d1bc7d
#define public_6d1bcb8 _public_6d1bcb8
#define public_6d1bccf _public_6d1bccf
#define public_6d1bce6 _public_6d1bce6

PROC_DECLARE(0x6d1bc00, internal_6d1bc00, public_6d1bc00);
extern "C" NAKED register_t __cdecl internal_6d1bc00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d621ce @0x6d1bc02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d621ce
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6d68b9c
        xor ebx, ebx
        mov byte ptr ds : [esi+4], bl
        mov byte ptr ds : [esi+5], bl
        xor eax, eax
        lea edi, ds:[esi+8]
        mov ecx, 8
        rep stosd
        mov eax, dword ptr ss : [esp+0x20]
        mov word ptr ds : [esi+0x28], bx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x3C], edi
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x18], 1
        je public_6d1bc74
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d1bc7d
        public_6d1bc74 : nop
        push 0xC
        mov ecx, edi
        call public_6d1bd20
        public_6d1bc7d : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[ecx+edi+8]
        add ecx, 0xC
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x48], edi
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x18], 2
        je public_6d1bcb8
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+4]
        add edx, 0xC
        cmp edx, eax
        jbe public_6d1bce6
        public_6d1bcb8 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xC
        lea eax, ds:[edi+4]
        mov dword ptr ss : [esp+0x20], 0xC
        jae public_6d1bccf
        lea eax, ss:[esp+0x20]
        public_6d1bccf : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6d1bce6 : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[ecx+edi+8]
        add ecx, 0xC
        mov dword ptr ds : [edi+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6d68ba4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6d1bc00)
    }
}

#undef public_6d1bc74
#undef public_6d1bc7d
#undef public_6d1bcb8
#undef public_6d1bccf
#undef public_6d1bce6
