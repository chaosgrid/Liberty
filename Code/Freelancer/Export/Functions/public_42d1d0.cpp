#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_42d030);
CLANG_FORWARD_PROC_SYMBOL(public_42d090);
CLANG_FORWARD_PROC_SYMBOL(public_42d1d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8d8c);

#define public_42d216 _public_42d216
#define public_42d280 _public_42d280
#define public_42d2a3 _public_42d2a3
#define public_42d2be _public_42d2be
#define public_42d2e0 _public_42d2e0
#define public_42d37b _public_42d37b
#define public_42d3a8 _public_42d3a8
#define public_42d3b2 _public_42d3b2
#define public_42d3c8 _public_42d3c8
#define public_42d3de _public_42d3de
#define public_42d3e8 _public_42d3e8
#define public_42d3ec _public_42d3ec
#define public_42d43d _public_42d43d
#define public_42d449 _public_42d449
#define public_42d455 _public_42d455
#define public_42d45f _public_42d45f
#define public_42d47e _public_42d47e
#define public_42d4a4 _public_42d4a4

PROC_DECLARE(0x42d1d0, internal_42d1d0, public_42d1d0);
extern "C" NAKED register_t __cdecl internal_42d1d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8d8c @0x42d1d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8d8c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x478
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [edi]
        xor ebx, ebx
        push ebx
        push eax
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x20]
        xor ebp, ebp
        cmp eax, ebx
        jbe public_42d280
        public_42d216 : nop
        mov eax, dword ptr ds : [public_5c6d38]
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x20], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push 0x3FF
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x8C]
        push esi
        push eax
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        je public_42d2be
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x20]
        inc ebp
        cmp ebp, eax
        jb public_42d216
        mov edi, dword ptr ss : [esp+0x24]
        nop 
        public_42d280 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0xDF
/*FIXUP push offset public_5ca7e4 @0x42d28e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca7e4
        mov eax, 0x100001
/*FIXUP push offset public_5ca820 @0x42d298*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca820
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_42d2a3 : nop
        mov ecx, dword ptr ss : [esp+0x488]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x484
        ret 4
        public_42d2be : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        call dword ptr ds : [edx+0x40]
        cmp dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x13], bl
        mov dword ptr ss : [esp+0x14], ebx
        jbe public_42d47e
        public_42d2e0 : nop
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x49C], ebx
        call dword ptr ds : [ecx+0x44]
        mov esi, dword ptr ss : [esp+0x40]
        mov edi, offset public_5ca818
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_42d3ec
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        push ebp
        mov byte ptr ss : [esp+0x49C], 1
        call dword ptr ds : [eax+0x48]
        cmp dword ptr ss : [esp+0x28], 7
        jne public_42d3c8
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_42d37b
        push eax
        push ebx
        call dword ptr ds : [public_5c6f80]
        push eax
        call dword ptr ds : [public_5c6ed4]
        mov dword ptr ss : [esp+0x2C], ebx
        public_42d37b : nop
        mov esi, dword ptr ss : [esp+0x498]
        cmp esi, ebx
        je public_42d3b2
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        push ebx
        call dword ptr ds : [public_5c6f80]
        push eax
        call dword ptr ds : [public_5c6edc]
        mov dword ptr ss : [esp+0x2C], eax
        mov ecx, esi
        mov edx, eax
        public_42d3a8 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_42d3a8
        public_42d3b2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x4C]
        mov byte ptr ss : [esp+0x13], 1
        public_42d3c8 : nop
        mov eax, dword ptr ss : [esp+0x28]
        sub eax, 5
        mov byte ptr ss : [esp+0x490], bl
        je public_42d3de
        dec eax
        je public_42d43d
        dec eax
        jne public_42d3e8
        public_42d3de : nop
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_42d030
        public_42d3e8 : nop
        mov dword ptr ss : [esp+0x2C], ebx
        public_42d3ec : nop
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x490], 3
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        call public_42cfd0
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x490], 2
        call public_42cfd0
        mov eax, dword ptr ss : [esp+0x4C]
        sub eax, 5
        mov dword ptr ss : [esp+0x490], 0xFFFFFFFF
        je public_42d455
        dec eax
        je public_42d449
        dec eax
        je public_42d455
        jmp public_42d45f
        public_42d43d : nop
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_42d090
        jmp public_42d3e8
        public_42d449 : nop
        push ebx
        lea ecx, ss:[esp+0x50]
        call public_42d090
        jmp public_42d45f
        public_42d455 : nop
        push ebx
        lea ecx, ss:[esp+0x50]
        call public_42d030
        public_42d45f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x14], eax
        jb public_42d2e0
        cmp byte ptr ss : [esp+0x13], bl
        jne public_42d4a4
        public_42d47e : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0xD4
/*FIXUP push offset public_5ca7e4 @0x42d48a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca7e4
        mov eax, 0x100001
/*FIXUP push offset public_5ca7a0 @0x42d494*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca7a0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_42d4a4 : nop
        mov ecx, dword ptr ss : [ebp]
        push 0x3F800000
        push ebx
        push ebp
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+8]
        jmp public_42d2a3
        UNREACHABLE_TRAP(0x42d1d0)
    }
}

#undef public_42d216
#undef public_42d280
#undef public_42d2a3
#undef public_42d2be
#undef public_42d2e0
#undef public_42d37b
#undef public_42d3a8
#undef public_42d3b2
#undef public_42d3c8
#undef public_42d3de
#undef public_42d3e8
#undef public_42d3ec
#undef public_42d43d
#undef public_42d449
#undef public_42d455
#undef public_42d45f
#undef public_42d47e
#undef public_42d4a4
