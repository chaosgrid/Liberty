#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d27460);
CLANG_FORWARD_PROC_SYMBOL(public_6d276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31110);
CLANG_FORWARD_PROC_SYMBOL(public_6d31d70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40780);
CLANG_FORWARD_PROC_SYMBOL(public_6d407b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62b7c);

#define public_6d274b3 _public_6d274b3
#define public_6d274bc _public_6d274bc
#define public_6d27518 _public_6d27518
#define public_6d27528 _public_6d27528
#define public_6d27557 _public_6d27557
#define public_6d2756e _public_6d2756e
#define public_6d27577 _public_6d27577
#define public_6d275dc _public_6d275dc
#define public_6d2763f _public_6d2763f
#define public_6d27656 _public_6d27656
#define public_6d2765f _public_6d2765f
#define public_6d276a1 _public_6d276a1

PROC_DECLARE(0x6d27460, internal_6d27460, public_6d27460);
extern "C" NAKED register_t __cdecl internal_6d27460()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62b7c @0x6d27468*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62b7c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        and eax, 0x8001
        cmp eax, 0x8000
        push esi
        push edi
        ja public_6d2763f
        je public_6d275dc
        sub eax, 0
        je public_6d27557
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d274b3
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        add eax, 0x1C
        cmp eax, ecx
        jbe public_6d274bc
        public_6d274b3 : nop
        push 0x1C
        mov ecx, edi
        call public_6d1bd20
        public_6d274bc : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x1C
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 2
        je public_6d276a1
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x20]
        push ebx
        push ebp
        mov ecx, esi
        call public_6d31d70
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+eax]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        call public_6d1baa0
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ds : [esi], offset public_6d69524
        je public_6d27528
        public_6d27518 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d27518
        public_6d27528 : nop
        push ebx
        push ebp
        call public_6d40780
        mov eax, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+edx*2]
        push ecx
        push eax
        call public_6d407b0
        add esp, 0x10
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6d27557 : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d2756e
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x18
        cmp edx, eax
        jbe public_6d27577
        public_6d2756e : nop
        push 0x18
        mov ecx, esi
        call public_6d1bd20
        public_6d27577 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x18
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x28], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6d276a1
        mov ecx, esi
        call public_6d228d0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call public_6d276f0
        mov dword ptr ds : [esi+0x10], eax
        add esp, 8
        mov dword ptr ds : [esi], offset public_6d694fc
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6d275dc : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push 0x18
        call public_6d1baa0
        mov esi, eax
        mov dword ptr ss : [esp+0x28], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 4
        je public_6d276a1
        mov ecx, esi
        call public_6d228d0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x20], 5
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call public_6d276f0
        mov dword ptr ds : [esi+0x10], eax
        add esp, 8
        mov dword ptr ds : [esi], offset public_6d694d4
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6d2763f : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d27656
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x1C
        cmp eax, ecx
        jbe public_6d2765f
        public_6d27656 : nop
        push 0x1C
        mov ecx, esi
        call public_6d1bd20
        public_6d2765f : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[edx+eax+8]
        add edx, 0x1C
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x28], ecx
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], 6
        je public_6d276a1
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push edx
        push eax
        call public_6d31110
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6d276a1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d27460)
    }
}

#undef public_6d274b3
#undef public_6d274bc
#undef public_6d27518
#undef public_6d27528
#undef public_6d27557
#undef public_6d2756e
#undef public_6d27577
#undef public_6d275dc
#undef public_6d2763f
#undef public_6d27656
#undef public_6d2765f
#undef public_6d276a1
