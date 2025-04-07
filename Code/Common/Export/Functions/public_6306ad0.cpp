#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307460);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63960a9);

#define public_6306b4a _public_6306b4a
#define public_6306bb0 _public_6306bb0
#define public_6306bbf _public_6306bbf
#define public_6306bcd _public_6306bcd
#define public_6306bd9 _public_6306bd9
#define public_6306c1d _public_6306c1d
#define public_6306c29 _public_6306c29

PROC_DECLARE(0x6306ad0, internal_6306ad0, public_6306ad0);
extern "C" NAKED register_t __cdecl internal_6306ad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63960a9 @0x6306ad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63960a9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+0x28]
        push ebx
        mov ebx, dword ptr ds : [public_6399238]
        push esi
        push edi
        xor edi, edi
/*FIXUP push offset public_63a270c @0x6306af7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a270c
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        call ebx
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6399150]
        test al, al
        je public_6306b4a
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
/*FIXUP push offset public_63a270c @0x6306b31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a270c
        push ecx
        call public_6307460
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_639916c]
        public_6306b4a : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x2C], edi
        je public_6306bd9
        push ebp
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
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6399150]
        test al, al
        pop ebp
        je public_6306bcd
        test esi, esi
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, edi
        jbe public_6306bbf
        mov edx, esi
        nop 
        public_6306bb0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6306bb0
        public_6306bbf : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], esi
        mov word ptr ds : [ecx+esi*2], 0
        public_6306bcd : nop
        push edi
        call dword ptr ds : [public_639932c]
        add esp, 4
        xor edi, edi
        public_6306bd9 : nop
        mov esi, dword ptr ss : [esp+0x34]
        mov dl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [esi], dl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov eax, dword ptr ds : [public_6399170]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6399168]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_6306c29
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6306c1d
        cmp cl, 0xFF
        je public_6306c1d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6306c29
        public_6306c1d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        add esp, 4
        public_6306c29 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6306ad0)
    }
}

#undef public_6306b4a
#undef public_6306bb0
#undef public_6306bbf
#undef public_6306bcd
#undef public_6306bd9
#undef public_6306c1d
#undef public_6306c29
