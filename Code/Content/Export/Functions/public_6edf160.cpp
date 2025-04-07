#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edf160);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4ab);

#define public_6edf23a _public_6edf23a
#define public_6edf258 _public_6edf258
#define public_6edf270 _public_6edf270
#define public_6edf2a7 _public_6edf2a7
#define public_6edf33b _public_6edf33b
#define public_6edf347 _public_6edf347
#define public_6edf353 _public_6edf353
#define public_6edf358 _public_6edf358
#define public_6edf35d _public_6edf35d
#define public_6edf3a0 _public_6edf3a0
#define public_6edf3a3 _public_6edf3a3

PROC_DECLARE(0x6edf160, internal_6edf160, public_6edf160);
extern "C" NAKED register_t __cdecl internal_6edf160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4ab @0x6edf162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        mov eax, dword ptr ss : [esp+0x134]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x13C]
        push ebp
        push esi
        xor esi, esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x13C]
        lea ebp, ds:[ebx+0x14]
        push edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+0x10], esi
        lea edi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x2C], esi
        lea ecx, ss:[esp+0x144]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x140], esi
        mov dword ptr ds : [ebx], offset public_6fb6f2c
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, esi
        je public_6edf3a0
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edf3a0
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edf3a3
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        je public_6edf23a
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6edf2a7
        public_6edf23a : nop
        push 8
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edf270
        public_6edf258 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edf258
        public_6edf270 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+8]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], eax
        xor esi, esi
/*FIXUP public_6edf2a7 : nop
        push offset public_6fb6f10 @0x6edf2a7*/
  FIXUP public_6edf2a7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6f10
        lea ecx, ss:[esp+0x6C]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x70], esi
        mov byte ptr ss : [esp+0x74], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0x74], eax
/*FIXUP push offset public_6fb6064 @0x6edf2c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x104]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0xC8]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0xC4]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x14C]
        sub eax, 0
        push ecx
/*FIXUP push offset public_6fb6064 @0x6edf325*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        je public_6edf353
        sub eax, 2
        je public_6edf347
        dec eax
        je public_6edf33b
/*FIXUP push offset public_6fb6ef4 @0x6edf334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ef4
        jmp public_6edf358
/*FIXUP public_6edf33b : nop
        push offset public_6fb6ed4 @0x6edf33b*/
  FIXUP public_6edf33b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ed4
        lea eax, ss:[esp+0x2C]
        push eax
        jmp public_6edf35d
/*FIXUP public_6edf347 : nop
        push offset public_6fb6eb4 @0x6edf347*/
  FIXUP public_6edf347 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6eb4
        lea ecx, ss:[esp+0x2C]
        push ecx
        jmp public_6edf35d
/*FIXUP public_6edf353 : nop
        push offset public_6fb6e98 @0x6edf353*/
  FIXUP public_6edf353 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e98
        public_6edf358 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        public_6edf35d : nop
        call public_6eeaf10
        lea eax, ss:[esp+0xBC]
        add esp, 0x10
        mov ecx, 0x11
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0xA8]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edf3a3
        public_6edf3a0 : nop
        mov dword ptr ds : [ebx+0x24], esi
        public_6edf3a3 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x12C
        ret 0x10
        UNREACHABLE_TRAP(0x6edf160)
    }
}

#undef public_6edf23a
#undef public_6edf258
#undef public_6edf270
#undef public_6edf2a7
#undef public_6edf33b
#undef public_6edf347
#undef public_6edf353
#undef public_6edf358
#undef public_6edf35d
#undef public_6edf3a0
#undef public_6edf3a3
