#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60c7f);

#define public_6cfb362 _public_6cfb362
#define public_6cfb461 _public_6cfb461
#define public_6cfb4d1 _public_6cfb4d1
#define public_6cfb4e2 _public_6cfb4e2
#define public_6cfb4f7 _public_6cfb4f7
#define public_6cfb51c _public_6cfb51c
#define public_6cfb541 _public_6cfb541
#define public_6cfb54a _public_6cfb54a
#define public_6cfb5af _public_6cfb5af
#define public_6cfb5c0 _public_6cfb5c0
#define public_6cfb5d5 _public_6cfb5d5
#define public_6cfb5f4 _public_6cfb5f4
#define public_6cfb619 _public_6cfb619
#define public_6cfb622 _public_6cfb622

PROC_DECLARE(0x6cfb2e0, internal_6cfb2e0, public_6cfb2e0);
extern "C" NAKED register_t __cdecl internal_6cfb2e0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d60c7f @0x6cfb2e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60c7f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16F0
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov eax, dword ptr ss : [esp+0x1700]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        push ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        lea ecx, ss:[esp+0x198]
        mov esi, eax
        call dword ptr ds : [public_6d644f0]
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1708], ebx
        je public_6cfb461
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [edx+0x3C]
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        jle public_6cfb461
        mov edi, dword ptr ss : [esp+0x1714]
        public_6cfb362 : nop
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [public_6d64c6c]
        lea edx, ss:[esp+0x80]
        push edx
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x88], ebx
        mov byte ptr ss : [esp+0x8C], bl
        mov dword ptr ss : [esp+0xE4], ebx
        mov byte ptr ss : [esp+0xE8], bl
        mov dword ptr ss : [esp+0x114], ebx
        mov byte ptr ss : [esp+0x118], bl
        mov dword ptr ss : [esp+0x158], ebx
        mov byte ptr ss : [esp+0x15C], bl
        call dword ptr ds : [eax+0x40]
        push 0x20
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call ebp
        mov edx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ss : [esp+0xD4]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ss : [esp+0xE0]
        mov dword ptr ss : [esp+0x54], edx
        push 0x20
        lea edx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0xE8]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        mov dword ptr ss : [esp+0x68], ecx
        call ebp
        mov ecx, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ss : [esp+0x1728]
        mov edx, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, dword ptr ds : [eax]
        add esp, 0x18
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x7C], ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        test al, al
        je public_6cfb461
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6cfb362
        public_6cfb461 : nop
        lea ecx, ss:[esp+0x15C0]
        mov dword ptr ss : [esp+0x1708], 1
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x15C8]
        mov byte ptr ss : [esp+0x1710], 2
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x15D0], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6cfb4f7
        cmp dword ptr ss : [esp+0x15D4], ebx
        je public_6cfb4e2
        mov eax, dword ptr ss : [esp+0x15D8]
        cmp eax, ebx
        je public_6cfb4d1
        push eax
        call ebp
        mov dword ptr ss : [esp+0x15D8], ebx
        mov dword ptr ss : [esp+0x15DC], ebx
        public_6cfb4d1 : nop
        mov ecx, dword ptr ss : [esp+0x15D4]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x15D4], ebx
        public_6cfb4e2 : nop
        mov edx, dword ptr ss : [esp+0x15D0]
        push edx
        call esi
        mov dword ptr ss : [esp+0x15D0], 0xFFFFFFFF
        public_6cfb4f7 : nop
        mov eax, dword ptr ss : [esp+0x15D8]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6cfb51c
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x15D8], ebx
        mov dword ptr ss : [esp+0x15DC], ebx
        public_6cfb51c : nop
        mov eax, dword ptr ss : [esp+0x15C4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x15E0], ebx
        je public_6cfb54a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6cfb541
        cmp cl, 0xFF
        je public_6cfb541
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6cfb54a
        public_6cfb541 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfb54a : nop
        mov dword ptr ss : [esp+0x15C4], ebx
        mov dword ptr ss : [esp+0x15C8], ebx
        mov dword ptr ss : [esp+0x15CC], ebx
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1A0]
        mov dword ptr ss : [esp+0x1710], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x1A8], 0xFFFFFFFF
        je public_6cfb5d5
        cmp dword ptr ss : [esp+0x1AC], ebx
        je public_6cfb5c0
        mov eax, dword ptr ss : [esp+0x1B0]
        cmp eax, ebx
        je public_6cfb5af
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1B0], ebx
        mov dword ptr ss : [esp+0x1B4], ebx
        public_6cfb5af : nop
        mov edx, dword ptr ss : [esp+0x1AC]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1AC], ebx
        public_6cfb5c0 : nop
        mov eax, dword ptr ss : [esp+0x1A8]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1A8], 0xFFFFFFFF
        public_6cfb5d5 : nop
        mov eax, dword ptr ss : [esp+0x1B0]
        cmp eax, ebx
        je public_6cfb5f4
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1B0], ebx
        mov dword ptr ss : [esp+0x1B4], ebx
        public_6cfb5f4 : nop
        mov eax, dword ptr ss : [esp+0x19C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1B8], ebx
        je public_6cfb622
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6cfb619
        cmp cl, 0xFF
        je public_6cfb619
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6cfb622
        public_6cfb619 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfb622 : nop
        mov ecx, dword ptr ss : [esp+0x1700]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16FC
        ret 
        UNREACHABLE_TRAP(0x6cfb2e0)
    }
}

#undef public_6cfb362
#undef public_6cfb461
#undef public_6cfb4d1
#undef public_6cfb4e2
#undef public_6cfb4f7
#undef public_6cfb51c
#undef public_6cfb541
#undef public_6cfb54a
#undef public_6cfb5af
#undef public_6cfb5c0
#undef public_6cfb5d5
#undef public_6cfb5f4
#undef public_6cfb619
#undef public_6cfb622
