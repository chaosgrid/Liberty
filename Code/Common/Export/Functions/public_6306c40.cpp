#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d36);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63960d7);

#define public_6306cd7 _public_6306cd7
#define public_6306d40 _public_6306d40
#define public_6306d4f _public_6306d4f
#define public_6306d5d _public_6306d5d
#define public_6306d7a _public_6306d7a
#define public_6306dc1 _public_6306dc1
#define public_6306dcd _public_6306dcd

PROC_DECLARE(0x6306c40, internal_6306c40, public_6306c40);
extern "C" NAKED register_t __cdecl internal_6306c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63960d7 @0x6306c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63960d7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF4
        mov al, byte ptr ss : [esp+3]
        push ebx
        mov ebx, dword ptr ds : [public_6399238]
        push esi
        push edi
        xor edi, edi
/*FIXUP push offset public_63a270c @0x6306c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a270c
        mov esi, ecx
        mov dword ptr ss : [esp+0x24], edi
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_63a270c @0x6306c8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a270c
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6399164]
        cmp dword ptr ds : [esi+8], edi
        mov dword ptr ss : [esp+0x108], edi
        je public_6306d7a
        lea ecx, ss:[esp+0x24]
        call public_6391d3c
        mov ecx, dword ptr ss : [esp+0x114]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x10C], 1
        call public_6391d36
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 4
        xor eax, eax
        add ecx, 0xF
        public_6306cd7 : nop
        mov dl, byte ptr ds : [ecx]
        xor byte ptr ss : [esp+eax+0x28], dl
        inc eax
        dec ecx
        cmp eax, 0x10
        jl public_6306cd7
        push ebp
        lea ecx, ss:[esp+0x28]
        call public_6391d42
        mov ebp, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        inc esi
        lea eax, ds:[esi+esi]
        push eax
        call dword ptr ds : [public_6399328]
        push esi
        mov edi, eax
        push ebp
        push edi
        call dword ptr ds : [public_6399340]
        push edi
        call ebx
        add esp, 0x14
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6399150]
        test al, al
        pop ebp
        je public_6306d5d
        test esi, esi
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        jbe public_6306d4f
        mov edx, esi
        lea ebx, ds:[ebx]
        public_6306d40 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6306d40
        public_6306d4f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], esi
        mov word ptr ds : [ecx+esi*2], 0
        public_6306d5d : nop
        push edi
        call dword ptr ds : [public_639932c]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x108], 0
        call public_6391d30
        xor edi, edi
        public_6306d7a : nop
        mov esi, dword ptr ss : [esp+0x110]
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [esi], dl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov eax, dword ptr ds : [public_6399170]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6399168]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        je public_6306dcd
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6306dc1
        cmp cl, 0xFF
        je public_6306dc1
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6306dcd
        public_6306dc1 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        add esp, 4
        public_6306dcd : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x100
        ret 8
        UNREACHABLE_TRAP(0x6306c40)
    }
}

#undef public_6306cd7
#undef public_6306d40
#undef public_6306d4f
#undef public_6306d5d
#undef public_6306d7a
#undef public_6306dc1
#undef public_6306dcd
