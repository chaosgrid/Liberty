#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d608a6);

#define public_6cf17cc _public_6cf17cc
#define public_6cf17e0 _public_6cf17e0
#define public_6cf1806 _public_6cf1806
#define public_6cf181a _public_6cf181a
#define public_6cf183f _public_6cf183f
#define public_6cf185d _public_6cf185d
#define public_6cf1889 _public_6cf1889
#define public_6cf188b _public_6cf188b
#define public_6cf18bf _public_6cf18bf
#define public_6cf18c1 _public_6cf18c1
#define public_6cf1951 _public_6cf1951

PROC_DECLARE(0x6cf1780, internal_6cf1780, public_6cf1780);
extern "C" NAKED register_t __cdecl internal_6cf1780()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d608a6 @0x6cf1782*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d608a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        test ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6cf17cc
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, edx
        jae public_6cf17cc
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        jne public_6cf17e0
        public_6cf17cc : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        push 2
        push edx
        call dword ptr ds : [eax+0x140]
        jmp public_6cf1951
        public_6cf17e0 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, ebp
        imul esi, 0x418
        cmp dword ptr ds : [esi+edx-0x48], ebx
        mov dword ptr ss : [esp+0x2C], esi
        je public_6cf1806
        mov eax, dword ptr ds : [ecx]
        push 2
        push ebx
        call dword ptr ds : [eax+0x140]
        jmp public_6cf1951
        public_6cf1806 : nop
        cmp ebx, ebp
        jne public_6cf181a
        mov edx, dword ptr ds : [ecx]
        push 2
        push ebx
        call dword ptr ds : [edx+0x140]
        jmp public_6cf1951
        public_6cf181a : nop
        mov eax, ebx
        imul eax, 0x418
        mov edi, dword ptr ds : [eax+edx-0x4C]
        test edi, edi
        mov dword ptr ss : [esp+0x28], eax
        je public_6cf183f
        mov eax, dword ptr ds : [ecx]
        push 4
        push ebx
        call dword ptr ds : [eax+0x140]
        mov edx, dword ptr ds : [public_6d90260]
        public_6cf183f : nop
        mov eax, dword ptr ds : [esi+edx-0x4C]
        test eax, eax
        je public_6cf185d
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push 6
        push ebx
        call dword ptr ds : [edx+0x198]
        jmp public_6cf1951
        public_6cf185d : nop
        push 0x24
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        test edi, edi
        mov dword ptr ss : [esp+0x20], 0
        je public_6cf1889
        mov ecx, edi
        call dword ptr ds : [public_6d643e8]
        mov dword ptr ds : [edi], offset public_6d65f80
        jmp public_6cf188b
        public_6cf1889 : nop
        xor edi, edi
        public_6cf188b : nop
        push 0x24
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x20], 1
        je public_6cf18bf
        mov ecx, esi
        call dword ptr ds : [public_6d643e8]
        mov dword ptr ds : [esi], offset public_6d65f80
        jmp public_6cf18c1
        public_6cf18bf : nop
        xor esi, esi
        public_6cf18c1 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [public_6d643e4]
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6d643e0]
        push ebp
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], esi
        call dword ptr ds : [public_6d643e4]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d643e0]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0xC], edi
        mov eax, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [ecx+eax-0x4C], edi
        mov edx, dword ptr ds : [public_6d90260]
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+edx-0x4C], esi
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+0x158]
        mov eax, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [edi+eax-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x194]
        mov eax, dword ptr ds : [public_6d90260]
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+eax-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        call dword ptr ds : [edx+0x194]
        public_6cf1951 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6cf1780)
    }
}

#undef public_6cf17cc
#undef public_6cf17e0
#undef public_6cf1806
#undef public_6cf181a
#undef public_6cf183f
#undef public_6cf185d
#undef public_6cf1889
#undef public_6cf188b
#undef public_6cf18bf
#undef public_6cf18c1
#undef public_6cf1951
