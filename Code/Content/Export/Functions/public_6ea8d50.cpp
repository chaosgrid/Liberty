#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8d50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb55c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f487d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa99c9);

#define public_6ea8dd4 _public_6ea8dd4
#define public_6ea8dea _public_6ea8dea
#define public_6ea8df8 _public_6ea8df8
#define public_6ea8dfa _public_6ea8dfa
#define public_6ea8ecb _public_6ea8ecb
#define public_6ea8ef3 _public_6ea8ef3
#define public_6ea8f62 _public_6ea8f62

PROC_DECLARE(0x6ea8d50, internal_6ea8d50, public_6ea8d50);
extern "C" NAKED register_t __cdecl internal_6ea8d50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa99c9 @0x6ea8d58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa99c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        dec eax
        push edi
        mov bl, 1
        je public_6ea8ef3
        dec eax
        je public_6ea8dea
        sub eax, 2
        jne public_6ea8dd4
        mov edi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb35e0]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        cmp eax, ecx
        jb public_6ea8f62
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [esi]
        neg edx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb35e4]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 8
        push ecx
        mov ecx, edi
        call public_6f48db0
        public_6ea8dd4 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        public_6ea8dea : nop
        mov esi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp esi, ebx
        je public_6ea8df8
        lea edi, ds:[esi+8]
        jmp public_6ea8dfa
        public_6ea8df8 : nop
        xor edi, edi
        public_6ea8dfa : nop
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f49b00
        add esp, 4
        mov ecx, esi
        call public_6f487d0
        test eax, eax
        jne public_6ea8ecb
        mov eax, dword ptr ds : [edi+4]
        push 1
        push eax
        add edi, 0xC
        push edi
/*FIXUP push offset public_6fb4450 @0x6ea8e6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4450
        call dword ptr ds : [public_6fb3614]
        mov ecx, dword ptr ss : [esp+0x6C]
        add esp, 0x10
        push ebx
        add ecx, 0x4C
        push ebx
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], eax
        call public_6f47980
        mov edx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ss : [esp+0x64]
        push edx
        push eax
        mov ecx, esi
        call public_6f488b0
        mov ecx, dword ptr ss : [esp+0x58]
        mov esi, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x5C]
        push 0x2C
        push eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x38], esi
        call dword ptr ds : [public_6fb360c]
        add esp, 0xC
        public_6ea8ecb : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        public_6ea8ef3 : nop
        mov edi, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_6fb35e0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, edx
        jb public_6ea8f62
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        neg eax
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_6fb35e4]
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 8
        push 1
        push edx
        push eax
        mov ecx, edi
        call public_6f33f80
        push eax
        call public_6f50c50
        push edi
        call public_6eb55c0
        add esp, 0x14
        jmp public_6ea8dd4
        public_6ea8f62 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6ea8d50)
    }
}

#undef public_6ea8dd4
#undef public_6ea8dea
#undef public_6ea8df8
#undef public_6ea8dfa
#undef public_6ea8ecb
#undef public_6ea8ef3
#undef public_6ea8f62
