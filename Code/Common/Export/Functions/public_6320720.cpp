#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_631f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_631fa40);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_631fd00);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6320720);
CLANG_FORWARD_PROC_SYMBOL(public_6320a30);
CLANG_FORWARD_PROC_SYMBOL(public_6321fa0);
CLANG_FORWARD_PROC_SYMBOL(public_63227e0);
CLANG_FORWARD_PROC_SYMBOL(public_63228a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396db3);

#define public_6320834 _public_6320834
#define public_632083b _public_632083b
#define public_6320851 _public_6320851
#define public_6320862 _public_6320862
#define public_63208bd _public_63208bd
#define public_63209c5 _public_63209c5
#define public_63209d6 _public_63209d6
#define public_63209fd _public_63209fd
#define public_6320a0c _public_6320a0c

PROC_DECLARE(0x6320720, internal_6320720, public_6320720);
extern "C" NAKED register_t __cdecl internal_6320720()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396db3 @0x6320728*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396db3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1B4
        push esi
        mov esi, dword ptr ss : [esp+0x1C8]
        mov ecx, dword ptr ds : [esi]
        push edi
        or edi, 0xFFFFFFFF
        cmp ecx, edi
        mov eax, edi
        je public_6320a0c
        mov al, byte ptr ds : [public_6401934]
        push ebx
        xor ebx, ebx
        cmp al, bl
        je public_63208bd
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], ebx
        call public_6320a30
        lea ecx, ss:[esp+0x40]
        call public_6320a30
        mov al, byte ptr ss : [esp+0xF]
        mov esi, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x90], al
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov word ptr ss : [esp+0x5C], bx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0xA0], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x8C], ebx
        push esi
        mov dword ptr ss : [esp+0x1CC], ebx
        call public_6320290
        add esp, 4
        cmp eax, ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        jne public_6320834
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x138]
        mov dword ptr ss : [esp+0x18], esi
        call public_6321fa0
        mov ecx, dword ptr ds : [public_64018bc]
        lea eax, ss:[esp+0x130]
        push eax
        push ecx
        mov ecx, offset public_64018b4
        mov byte ptr ss : [esp+0x1D0], 1
        call public_63228a0
        lea ecx, ss:[esp+0x134]
        mov byte ptr ss : [esp+0x1C8], bl
        call public_631fa40
        mov edx, dword ptr ds : [public_64018bc]
        add edx, 0xFFFFFF70
        mov dword ptr ds : [public_6401938], edx
        jmp public_632083b
        public_6320834 : nop
        mov ecx, eax
        call public_631fad0
        public_632083b : nop
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C8], 3
        je public_6320862
        public_6320851 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6320851
        public_6320862 : nop
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x94]
        push edx
        push eax
        lea ecx, ss:[esp+0x98]
        call public_628f050
        mov ecx, dword ptr ss : [esp+0x94]
        push ecx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov byte ptr ss : [esp+0x1C8], 2
        call public_630e210
        lea ecx, ss:[esp+0x28]
        jmp public_63209fd
        public_63208bd : nop
        lea ecx, ss:[esp+0x18]
        call public_631f9a0
        mov edx, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x138]
        mov dword ptr ss : [esp+0x1CC], 4
        mov dword ptr ss : [esp+0x134], edx
        call public_631fd00
        lea eax, ss:[esp+0x130]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_64018c4
        mov byte ptr ss : [esp+0x1D0], 5
        call public_63227e0
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x134]
        mov byte ptr ss : [esp+0x1C8], 4
        call public_631fa40
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C8], edi
        call public_631fa40
        lea ecx, ss:[esp+0xB4]
        add esi, 0x10
        mov dword ptr ss : [esp+0xB0], ebx
        call public_6320a30
        lea ecx, ss:[esp+0xCC]
        call public_6320a30
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ss:[esp+0x120]
        call public_6315b10
        mov dword ptr ss : [esp+0xE4], ebx
        mov word ptr ss : [esp+0xE8], bx
        mov dword ptr ss : [esp+0xA4], edi
        mov dword ptr ss : [esp+0x12C], ebx
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ss : [esp+0x118], ebx
        lea eax, ss:[esp+0xA4]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1CC], 6
        call public_631fad0
        mov eax, dword ptr ss : [esp+0x12C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C8], 8
        je public_63209d6
        public_63209c5 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_63209c5
        public_63209d6 : nop
        lea ecx, ss:[esp+0x11C]
        call public_6269110
        lea ecx, ss:[esp+0xCC]
        mov byte ptr ss : [esp+0x1C8], 7
        call public_630e210
        lea ecx, ss:[esp+0xB4]
        public_63209fd : nop
        mov dword ptr ss : [esp+0x1C8], edi
        call public_630e210
        xor eax, eax
        pop ebx
        public_6320a0c : nop
        mov ecx, dword ptr ss : [esp+0x1BC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C0
        ret 
        UNREACHABLE_TRAP(0x6320720)
    }
}

#undef public_6320834
#undef public_632083b
#undef public_6320851
#undef public_6320862
#undef public_63208bd
#undef public_63209c5
#undef public_63209d6
#undef public_63209fd
#undef public_6320a0c
