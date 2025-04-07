#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa07a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1b0b);

#define public_6f9e2b5 _public_6f9e2b5
#define public_6f9e2d1 _public_6f9e2d1
#define public_6f9e374 _public_6f9e374
#define public_6f9e3b2 _public_6f9e3b2
#define public_6f9e3bd _public_6f9e3bd
#define public_6f9e3d5 _public_6f9e3d5
#define public_6f9e3dc _public_6f9e3dc
#define public_6f9e3f2 _public_6f9e3f2
#define public_6f9e3ff _public_6f9e3ff
#define public_6f9e42a _public_6f9e42a
#define public_6f9e448 _public_6f9e448
#define public_6f9e47c _public_6f9e47c
#define public_6f9e4b3 _public_6f9e4b3
#define public_6f9e4d6 _public_6f9e4d6
#define public_6f9e4d9 _public_6f9e4d9
#define public_6f9e503 _public_6f9e503

PROC_DECLARE(0x6f9e1f0, internal_6f9e1f0, public_6f9e1f0);
extern "C" NAKED register_t __cdecl internal_6f9e1f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1b0b @0x6f9e1f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1b0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        mov eax, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xD4]
        mov esi, ecx
        lea ebx, ds:[eax+0x3C]
        push edi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f50650
        mov cl, byte ptr ds : [eax+0x98]
        add edi, 4
        push edi
        mov byte ptr ss : [esp+0x40], cl
        call public_6f50650
        mov dl, byte ptr ds : [eax+0x98]
        add esp, 8
        lea ecx, ds:[esi+0x1C]
        add esi, 8
        push esi
        lea eax, ss:[esp+0x34]
        push eax
        mov byte ptr ss : [esp+0x30], dl
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x1F]
        push edx
        lea eax, ss:[esp+0x22]
        lea ebp, ds:[ecx+0x10]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6f9f8b0
        mov dword ptr ss : [esp+0x40], offset public_6fbd510
        push 0x50001
        mov ecx, ebx
        mov dword ptr ss : [esp+0xD0], 0
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [public_6fb3088]
        mov dword ptr ss : [esp+0x18], edx
        public_6f9e2b5 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        test eax, eax
        je public_6f9e374
        mov ecx, dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f9e374
        public_6f9e2d1 : nop
        lea ecx, ss:[esp+0x94]
        lea esi, ds:[eax+0xC]
        call public_6f9e5a0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x60], ecx
        push eax
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0xD0], 1
        call public_6f9e5f0
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xD4], 2
        call public_6f9f920
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xCC], 1
        call public_6f85550
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0xCC], 0
        call public_6f85550
        mov ecx, dword ptr ss : [esp+0x14]
        lea edi, ds:[ecx+0x10]
        lea edx, ds:[edi+4]
        push edx
        lea ecx, ds:[esi+0x14]
        call ebx
        mov eax, dword ptr ds : [edi+0x1C]
        add edi, 0x20
        push edi
        lea ecx, ds:[esi+0x30]
        mov dword ptr ds : [esi+0x2C], eax
        call public_6eb6560
        lea ecx, ss:[esp+0x14]
        call public_6ed1c80
        mov ecx, dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jne public_6f9e2d1
        public_6f9e374 : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        test eax, eax
        lea esi, ss:[ebp+0x48]
        je public_6f9e448
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x2C], edx
        je public_6f9e448
        mov ecx, esi
        call public_6eedfe0
        test eax, eax
        jne public_6f9e3b2
        mov esi, dword ptr ds : [esi+8]
        jmp public_6f9e3ff
        public_6f9e3b2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f9e3bd
        xor edi, edi
        jmp public_6f9e3d5
        public_6f9e3bd : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f9e3d5 : nop
        dec edi
        jne public_6f9e3dc
        xor eax, eax
        jmp public_6f9e3f2
        public_6f9e3dc : nop
        call dword ptr ds : [public_6fb3370]
        inc edi
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f9e3f2 : nop
        test eax, eax
        mov esi, dword ptr ds : [esi+4]
        jbe public_6f9e3ff
        lea ecx, ds:[eax+eax*2]
        lea esi, ds:[esi+ecx*8]
        public_6f9e3ff : nop
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_6f9e42a
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x50001
        call dword ptr ds : [public_6fb303c]
        public_6f9e42a : nop
        mov eax, dword ptr ss : [esp+0xE0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+8]
        public_6f9e448 : nop
        mov edx, dword ptr ss : [ebp+0xA0]
        lea esi, ss:[ebp+0xA0]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_6f9e47c
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+0x5C]
        call ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x20
        mov dword ptr ds : [edi+0x74], ecx
        push esi
        lea ecx, ds:[edi+0x78]
        call public_6eb6560
        public_6f9e47c : nop
        mov edx, dword ptr ss : [ebp+0x70]
        lea esi, ss:[ebp+0x70]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_6f9e4b3
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+0x8C]
        call ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x20
        mov dword ptr ds : [edi+0xA4], ecx
        push esi
        lea ecx, ds:[edi+0xA8]
        call public_6eb6560
        public_6f9e4b3 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        test ecx, ecx
        je public_6f9e503
        mov eax, dword ptr ss : [ebp+0x24]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f9e503
        mov edx, dword ptr ss : [esp+0x18]
        cmp byte ptr ds : [edx], 1
        mov ebp, ecx
        jne public_6f9e4d6
        mov eax, dword ptr ss : [ebp]
        jmp public_6f9e4d9
        public_6f9e4d6 : nop
        mov eax, dword ptr ss : [ebp+4]
        public_6f9e4d9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ds:[edx+0x1C]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x34]
        lea ebp, ds:[eax+0x10]
        inc dword ptr ss : [esp+0x18]
        jmp public_6f9e2b5
        public_6f9e503 : nop
        mov ecx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [esp+0xE4]
        push ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        call public_6f9dee0
        mov ecx, dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6fb3038]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0xD8], 0xFFFFFFFF
        call public_6fa07a0
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x5C], 0
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xCC]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 0x14
        UNREACHABLE_TRAP(0x6f9e1f0)
    }
}

#undef public_6f9e2b5
#undef public_6f9e2d1
#undef public_6f9e374
#undef public_6f9e3b2
#undef public_6f9e3bd
#undef public_6f9e3d5
#undef public_6f9e3dc
#undef public_6f9e3f2
#undef public_6f9e3ff
#undef public_6f9e42a
#undef public_6f9e448
#undef public_6f9e47c
#undef public_6f9e4b3
#undef public_6f9e4d6
#undef public_6f9e4d9
#undef public_6f9e503
