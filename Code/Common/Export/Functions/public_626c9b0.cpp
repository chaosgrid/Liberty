#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1460);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63926e9);

#define public_626c9f0 _public_626c9f0
#define public_626c9f2 _public_626c9f2
#define public_626cb29 _public_626cb29
#define public_626cb2f _public_626cb2f
#define public_626cb65 _public_626cb65
#define public_626cb87 _public_626cb87
#define public_626cb8f _public_626cb8f
#define public_626cb95 _public_626cb95
#define public_626cbb9 _public_626cbb9
#define public_626cbdb _public_626cbdb
#define public_626cbeb _public_626cbeb
#define public_626cc05 _public_626cc05

PROC_DECLARE(0x626c9b0, internal_626c9b0, public_626c9b0);
extern "C" NAKED register_t __cdecl internal_626c9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63926e9 @0x626c9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63926e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0x20], ebp
        call public_62f1460
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], 0
        je public_626c9f0
        lea eax, ds:[ebx+0x94]
        jmp public_626c9f2
        public_626c9f0 : nop
        xor eax, eax
        public_626c9f2 : nop
        lea esi, ds:[eax+4]
        lea edi, ss:[ebp+0x98]
        mov ecx, 0x11
        rep movsd
        mov dword ptr ss : [ebp+0x94], offset public_63993e8
        mov eax, dword ptr ds : [ebx+0xDC]
        mov dword ptr ss : [ebp+0xDC], eax
        mov ecx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ss : [ebp+0xE0], ecx
        mov edx, dword ptr ds : [ebx+0xE4]
        mov dword ptr ss : [ebp+0xE4], edx
        mov eax, dword ptr ds : [ebx+0xE8]
        mov dword ptr ss : [ebp+0xE8], eax
        mov ecx, dword ptr ds : [ebx+0xEC]
        mov dword ptr ss : [ebp+0xEC], ecx
        mov edx, dword ptr ds : [ebx+0xF0]
        mov dword ptr ss : [ebp+0xF0], edx
        mov eax, dword ptr ds : [ebx+0xF4]
        mov dword ptr ss : [ebp+0xF4], eax
        mov ecx, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [ebp+0xF8], ecx
        mov edx, dword ptr ds : [ebx+0xFC]
        mov dword ptr ss : [ebp+0xFC], edx
        mov eax, dword ptr ds : [ebx+0x100]
        mov dword ptr ss : [ebp+0x100], eax
        mov ecx, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [ebp+0x104], ecx
        lea edx, ds:[ebx+0x108]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x108]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[ebx+0x114]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x114]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0x120]
        mov dword ptr ss : [ebp+0x120], ecx
        mov edx, dword ptr ds : [ebx+0x124]
        mov dword ptr ss : [ebp+0x124], edx
        mov eax, dword ptr ds : [ebx+0x128]
        mov dword ptr ss : [ebp+0x128], eax
        mov ecx, dword ptr ds : [ebx+0x12C]
        mov dword ptr ss : [ebp+0x12C], ecx
        mov dl, byte ptr ds : [ebx+0x130]
        mov byte ptr ss : [ebp+0x130], dl
        mov eax, dword ptr ds : [ebx+0x134]
        test eax, eax
        je public_626cb29
        mov ecx, dword ptr ds : [ebx+0x138]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_626cb29 : nop
        test eax, eax
        jge public_626cb2f
        xor eax, eax
        public_626cb2f : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov dword ptr ss : [ebp+0x134], eax
        mov ecx, dword ptr ds : [ebx+0x138]
        mov edi, dword ptr ds : [ebx+0x134]
        add esp, 4
        cmp edi, ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_626cc05
        add edi, 8
        public_626cb65 : nop
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov byte ptr ss : [esp+0x2C], 1
        je public_626cbeb
        mov edx, dword ptr ds : [edi-8]
        mov dword ptr ds : [esi], edx
        mov al, byte ptr ds : [edi-4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_626cb87
        xor eax, eax
        jmp public_626cb8f
        public_626cb87 : nop
        mov eax, dword ptr ds : [edi+4]
        sub eax, ecx
        sar eax, 2
        public_626cb8f : nop
        test eax, eax
        jge public_626cb95
        xor eax, eax
        public_626cb95 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x34], eax
        je public_626cbdb
        public_626cbb9 : nop
        push esi
        push eax
        call public_630cd00
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x1C]
        add edx, 4
        add esi, 4
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], edx
        mov eax, edx
        jne public_626cbb9
        public_626cbdb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        public_626cbeb : nop
        add edi, 0x14
        add esi, 0x14
        lea edx, ds:[edi-8]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x10], esi
        jne public_626cb65
        public_626cc05 : nop
        mov dword ptr ss : [ebp+0x138], esi
        mov dword ptr ss : [ebp+0x13C], esi
        mov eax, dword ptr ds : [ebx+0x140]
        mov dword ptr ss : [ebp+0x140], eax
        mov ecx, dword ptr ds : [ebx+0x144]
        pop edi
        mov dword ptr ss : [ebp+0x144], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        mov dword ptr ss : [ebp], offset public_6399838
        mov dword ptr ss : [ebp+0x94], offset public_6399828
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x626c9b0)
    }
}

#undef public_626c9f0
#undef public_626c9f2
#undef public_626cb29
#undef public_626cb2f
#undef public_626cb65
#undef public_626cb87
#undef public_626cb8f
#undef public_626cb95
#undef public_626cbb9
#undef public_626cbdb
#undef public_626cbeb
#undef public_626cc05
