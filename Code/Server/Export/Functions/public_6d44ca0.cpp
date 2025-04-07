#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d44ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62e1f);

#define public_6d44d55 _public_6d44d55
#define public_6d44d76 _public_6d44d76
#define public_6d44d8e _public_6d44d8e
#define public_6d44e58 _public_6d44e58
#define public_6d44e69 _public_6d44e69
#define public_6d44e7e _public_6d44e7e
#define public_6d44ea3 _public_6d44ea3
#define public_6d44ec8 _public_6d44ec8
#define public_6d44ed1 _public_6d44ed1
#define public_6d44f37 _public_6d44f37
#define public_6d44f48 _public_6d44f48
#define public_6d44f5d _public_6d44f5d
#define public_6d44f7d _public_6d44f7d
#define public_6d44fa2 _public_6d44fa2
#define public_6d44fab _public_6d44fab

PROC_DECLARE(0x6d44ca0, internal_6d44ca0, public_6d44ca0);
extern "C" NAKED register_t __cdecl internal_6d44ca0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62e1f @0x6d44ca8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62e1f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x227C
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov eax, dword ptr ds : [public_6d64a58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push 0x104
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        xor ebx, ebx
        push ebx
/*FIXUP push offset public_6d8f9c8 @0x6d44cdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f9c8
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ebx
        push ecx
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_6d644f0]
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x2298], ebx
        call dword ptr ds : [public_6d644e8]
        lea eax, ss:[esp+0x1680]
        push eax
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_6d64644]
        mov edi, dword ptr ds : [public_6d64540]
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        call edi
        test al, al
        je public_6d44d8e
        mov esi, dword ptr ds : [public_6d64538]
/*FIXUP public_6d44d55 : nop
        push offset public_6d6ad78 @0x6d44d55*/
  FIXUP public_6d44d55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad78
        lea ecx, ss:[esp+0x11C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x118]
        jne public_6d44d76
        call edi
        test al, al
        jne public_6d44d55
        jmp public_6d44d8e
        public_6d44d76 : nop
        call dword ptr ds : [public_6d6455c]
        push ebx
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_6d64578]
        fstp qword ptr ss : [esp+0xC]
        public_6d44d8e : nop
        push ebp
        lea ecx, ss:[esp+0x1684]
        push ecx
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_6d644e4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, offset public_6d8f970
        mov dword ptr ds : [public_6d8fb20], edx
        mov dword ptr ds : [public_6d8fb24], eax
        call dword ptr ds : [public_6d64830]
        call dword ptr ds : [public_6d6482c]
        lea ecx, ss:[esp+0x11C]
        push ecx
        call dword ptr ds : [public_6d64828]
        lea edx, ss:[esp+0x120]
        push edx
        push 0x40
        call public_6d43650
        add esp, 0xC
        lea eax, ss:[esp+0x1544]
        mov dword ptr ss : [esp+0x2294], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x154C]
        mov byte ptr ss : [esp+0x229C], 2
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x1554], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6d44e7e
        cmp dword ptr ss : [esp+0x1558], ebx
        je public_6d44e69
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        je public_6d44e58
        push eax
        call ebp
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_6d44e58 : nop
        mov eax, dword ptr ss : [esp+0x1558]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1558], ebx
        public_6d44e69 : nop
        mov ecx, dword ptr ss : [esp+0x1554]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1554], 0xFFFFFFFF
        public_6d44e7e : nop
        mov eax, dword ptr ss : [esp+0x155C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6d44ea3
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x155C], ebx
        mov dword ptr ss : [esp+0x1560], ebx
        public_6d44ea3 : nop
        mov eax, dword ptr ss : [esp+0x1548]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1564], ebx
        je public_6d44ed1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d44ec8
        cmp cl, 0xFF
        je public_6d44ec8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d44ed1
        public_6d44ec8 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d44ed1 : nop
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov dword ptr ss : [esp+0x1550], ebx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x229C], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x12C], 0xFFFFFFFF
        je public_6d44f5d
        cmp dword ptr ss : [esp+0x130], ebx
        je public_6d44f48
        mov eax, dword ptr ss : [esp+0x134]
        cmp eax, ebx
        je public_6d44f37
        push eax
        call ebp
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        public_6d44f37 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x130], ebx
        public_6d44f48 : nop
        mov edx, dword ptr ss : [esp+0x12C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x12C], 0xFFFFFFFF
        public_6d44f5d : nop
        mov eax, dword ptr ss : [esp+0x134]
        cmp eax, ebx
        pop ebp
        je public_6d44f7d
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x130], ebx
        mov dword ptr ss : [esp+0x134], ebx
        public_6d44f7d : nop
        mov eax, dword ptr ss : [esp+0x11C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x138], ebx
        je public_6d44fab
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d44fa2
        cmp cl, 0xFF
        je public_6d44fa2
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d44fab
        public_6d44fa2 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d44fab : nop
        mov ecx, dword ptr ss : [esp+0x2288]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2288
        ret 
        UNREACHABLE_TRAP(0x6d44ca0)
    }
}

#undef public_6d44d55
#undef public_6d44d76
#undef public_6d44d8e
#undef public_6d44e58
#undef public_6d44e69
#undef public_6d44e7e
#undef public_6d44ea3
#undef public_6d44ec8
#undef public_6d44ed1
#undef public_6d44f37
#undef public_6d44f48
#undef public_6d44f5d
#undef public_6d44f7d
#undef public_6d44fa2
#undef public_6d44fab
