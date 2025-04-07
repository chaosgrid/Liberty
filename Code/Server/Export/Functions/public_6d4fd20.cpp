#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13000);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d15de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d4fd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63662);

#define public_6d4fdd0 _public_6d4fdd0
#define public_6d4fddc _public_6d4fddc
#define public_6d4fe0d _public_6d4fe0d
#define public_6d4fe26 _public_6d4fe26
#define public_6d4fe3b _public_6d4fe3b
#define public_6d4fe81 _public_6d4fe81
#define public_6d4fe9f _public_6d4fe9f
#define public_6d4fead _public_6d4fead
#define public_6d4feb1 _public_6d4feb1
#define public_6d4fec0 _public_6d4fec0
#define public_6d4ff08 _public_6d4ff08
#define public_6d4ff20 _public_6d4ff20
#define public_6d4ff36 _public_6d4ff36
#define public_6d4ff3c _public_6d4ff3c
#define public_6d4ff54 _public_6d4ff54
#define public_6d4ff6a _public_6d4ff6a
#define public_6d4ff70 _public_6d4ff70
#define public_6d4ffa0 _public_6d4ffa0
#define public_6d4ffb6 _public_6d4ffb6
#define public_6d4ffc4 _public_6d4ffc4
#define public_6d4ffc8 _public_6d4ffc8
#define public_6d4ffd7 _public_6d4ffd7
#define public_6d50020 _public_6d50020
#define public_6d5004c _public_6d5004c
#define public_6d50055 _public_6d50055
#define public_6d5006a _public_6d5006a
#define public_6d50079 _public_6d50079
#define public_6d500a0 _public_6d500a0

PROC_DECLARE(0x6d4fd20, internal_6d4fd20, public_6d4fd20);
extern "C" NAKED register_t __cdecl internal_6d4fd20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63662 @0x6d4fd22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63662
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3EC]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x14], esi
        je public_6d50055
        call public_6d15650
        test eax, eax
        je public_6d50055
        mov ecx, dword ptr ds : [esi+0x3EC]
        push ecx
        mov ecx, eax
        call public_6d140f0
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_6d50055
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6d648e4]
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, dword ptr ds : [esi+0x264]
        mov dword ptr ss : [esp+0x48], 0
        je public_6d4fe3b
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x1C]
        lea ebp, ds:[eax+0x10]
        push ecx
        mov ecx, ebp
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, dword ptr ss : [ebp+4]
        je public_6d50079
        mov edi, dword ptr ds : [public_6d64774]
        mov ebx, 3
        public_6d4fdd0 : nop
        mov ecx, dword ptr ds : [eax+0x20]
        test ecx, ecx
        je public_6d4fddc
        cmp ecx, 2
        jne public_6d4fe0d
        public_6d4fddc : nop
        mov eax, dword ptr ds : [eax+0x10]
        push eax
        call edi
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d4fe0d
        cmp dword ptr ds : [esi+0x4C], ebx
        jne public_6d4fe0d
        mov eax, dword ptr ds : [esi+0x90]
        push eax
        call edi
        mov edx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x264]
        add esp, 4
        cmp edx, ecx
        je public_6d4fe26
        public_6d4fe0d : nop
        lea ecx, ss:[esp+0x18]
        call public_6d15de0
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        jne public_6d4fdd0
        jmp public_6d50079
        public_6d4fe26 : nop
        add esi, 0x94
        push esi
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6d648e8]
        mov esi, dword ptr ss : [esp+0x14]
        public_6d4fe3b : nop
        lea eax, ds:[esi+0x278]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64408]
        mov ecx, dword ptr ds : [esi+0x324]
        cmp ecx, dword ptr ds : [esi+0x264]
        mov byte ptr ss : [esp+0x48], 1
        jne public_6d4feb1
        mov eax, dword ptr ds : [esi+0x27C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d4fead
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_6d64944]
        mov ebx, dword ptr ds : [public_6d64400]
        lea edi, ds:[edx+0x328]
        public_6d4fe81 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        mov ecx, edi
        push eax
        call ebp
        test eax, eax
        je public_6d4fe9f
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x2C]
        push eax
        call ebx
        public_6d4fe9f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0x27C]
        jne public_6d4fe81
        public_6d4fead : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6d4feb1 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6d4ffd7
        nop 
        public_6d4fec0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call dword ptr ds : [public_6d642fc]
        add esp, 4
        test eax, eax
        je public_6d5006a
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call dword ptr ds : [public_6d644bc]
        add esp, 4
        test eax, eax
        je public_6d4ff08
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        call public_6d13000
        test eax, eax
        je public_6d4ff08
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d4ffc8
        cmp eax, 2
        je public_6d4ffc8
        public_6d4ff08 : nop
        mov edx, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        cmp eax, edx
        je public_6d4ff3c
        lea esp, ss:[esp]
        public_6d4ff20 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jne public_6d4ff36
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jle public_6d4ff36
        cmp ecx, 0xF4240
        jge public_6d4ff36
        add ebx, ecx
        public_6d4ff36 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6d4ff20
        public_6d4ff3c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x27C]
        lea eax, ds:[ecx+0x278]
        mov eax, dword ptr ds : [edx]
        xor esi, esi
        cmp eax, edx
        je public_6d4ff70
        public_6d4ff54 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jne public_6d4ff6a
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jle public_6d4ff6a
        cmp ecx, 0xF4240
        jge public_6d4ff6a
        add esi, ecx
        public_6d4ff6a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6d4ff54
        public_6d4ff70 : nop
        cmp esi, ebx
        jle public_6d4ffc4
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x324]
        cmp edx, dword ptr ds : [eax+0x264]
        je public_6d500a0
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx]
        xor esi, esi
        cmp eax, edx
        je public_6d500a0
        lea ebx, ds:[ebx]
        public_6d4ffa0 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jne public_6d4ffb6
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jle public_6d4ffb6
        cmp ecx, 0xF4240
        jge public_6d4ffb6
        add esi, ecx
        public_6d4ffb6 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6d4ffa0
        test esi, esi
        jle public_6d500a0
        public_6d4ffc4 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6d4ffc8 : nop
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp ebp, eax
        jne public_6d4fec0
        public_6d4ffd7 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64884]
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d5004c
        mov edi, edi
        public_6d50020 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64870]
        cmp dword ptr ss : [esp+0x14], esi
        jne public_6d50020
        mov eax, dword ptr ss : [esp+0x38]
        public_6d5004c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d50055 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6d5006a : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_6d643fc]
        public_6d50079 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_6d643fc]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        public_6d500a0 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64884]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6d4fd20)
    }
}

#undef public_6d4fdd0
#undef public_6d4fddc
#undef public_6d4fe0d
#undef public_6d4fe26
#undef public_6d4fe3b
#undef public_6d4fe81
#undef public_6d4fe9f
#undef public_6d4fead
#undef public_6d4feb1
#undef public_6d4fec0
#undef public_6d4ff08
#undef public_6d4ff20
#undef public_6d4ff36
#undef public_6d4ff3c
#undef public_6d4ff54
#undef public_6d4ff6a
#undef public_6d4ff70
#undef public_6d4ffa0
#undef public_6d4ffb6
#undef public_6d4ffc4
#undef public_6d4ffc8
#undef public_6d4ffd7
#undef public_6d50020
#undef public_6d5004c
#undef public_6d50055
#undef public_6d5006a
#undef public_6d50079
#undef public_6d500a0
