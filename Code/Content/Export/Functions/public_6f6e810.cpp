#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f601f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e810);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe48);

#define public_6f6e853 _public_6f6e853
#define public_6f6e872 _public_6f6e872
#define public_6f6e8aa _public_6f6e8aa
#define public_6f6e8ac _public_6f6e8ac
#define public_6f6e8b8 _public_6f6e8b8
#define public_6f6e900 _public_6f6e900
#define public_6f6e91b _public_6f6e91b
#define public_6f6e92e _public_6f6e92e
#define public_6f6e934 _public_6f6e934
#define public_6f6e93c _public_6f6e93c
#define public_6f6e990 _public_6f6e990
#define public_6f6e9a6 _public_6f6e9a6
#define public_6f6e9b5 _public_6f6e9b5
#define public_6f6e9be _public_6f6e9be

PROC_DECLARE(0x6f6e810, internal_6f6e810, public_6f6e810);
extern "C" NAKED register_t __cdecl internal_6f6e810()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafe48 @0x6f6e818*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6fd1bb8 @0x6f6e834*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1bb8
        push ecx
        xor ebx, ebx
        xor edi, edi
        call public_6f601f0
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_6fd1bbc]
        add esp, 0xC
        cmp esi, eax
        je public_6f6e8b8
        public_6f6e853 : nop
        mov edx, dword ptr ss : [esp+0x34]
        cmp dword ptr ds : [esi+0xC], edx
        jne public_6f6e8aa
        cmp edi, ebx
        jne public_6f6e872
        add esi, 8
        push esi
        call public_6f75f30
        mov esi, dword ptr ss : [esp+0x10]
        add esp, 4
        mov edi, eax
        public_6f6e872 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        push 1
        push ebx
        push eax
        call public_6f6dff0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [edx], esi
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd1bc0]
        add esp, 0x14
        dec eax
        mov dword ptr ds : [public_6fd1bc0], eax
        jmp public_6f6e8ac
        public_6f6e8aa : nop
        mov esi, dword ptr ds : [esi]
        public_6f6e8ac : nop
        cmp esi, dword ptr ds : [public_6fd1bbc]
        mov dword ptr ss : [esp+0xC], esi
        jne public_6f6e853
        public_6f6e8b8 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fd1bc8 @0x6f6e8c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1bc8
        push eax
        call public_6f601f0
        mov eax, dword ptr ds : [public_6fd1bcc]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp ecx, eax
        je public_6f6e93c
        push 5
        add ecx, 0x10
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        call dword ptr ds : [public_6fb358c]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6fd1bcc]
        add esp, 0x10
        cmp eax, ecx
        je public_6f6e93c
        public_6f6e900 : nop
        mov edx, dword ptr ss : [esp+0x34]
        cmp dword ptr ds : [eax+0xC], edx
        jne public_6f6e92e
        cmp edi, ebx
        jne public_6f6e91b
        add eax, 8
        push eax
        call public_6f75f30
        add esp, 4
        mov edi, eax
        public_6f6e91b : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_6f6e9d0
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_6f6e934
        public_6f6e92e : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        public_6f6e934 : nop
        cmp eax, dword ptr ds : [public_6fd1bcc]
        jne public_6f6e900
        public_6f6e93c : nop
        cmp edi, ebx
        je public_6f6e9be
        cmp byte ptr ss : [esp+0x3C], bl
        je public_6f6e9be
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, edi
        call public_6f73930
        mov dl, byte ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov eax, dword ptr ds : [eax+0x154]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6f66220
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp esi, eax
        je public_6f6e9b5
        mov edi, dword ptr ss : [esp+0x38]
        mov edi, edi
        public_6f6e990 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ss : [esp+0x34]
        je public_6f6e9a6
        push ebx
        push edi
        push eax
        call public_6f6e810
        add esp, 0xC
        public_6f6e9a6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_6f6e990
        mov esi, dword ptr ss : [esp+0x18]
        public_6f6e9b5 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f6e9be : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f6e810)
    }
}

#undef public_6f6e853
#undef public_6f6e872
#undef public_6f6e8aa
#undef public_6f6e8ac
#undef public_6f6e8b8
#undef public_6f6e900
#undef public_6f6e91b
#undef public_6f6e92e
#undef public_6f6e934
#undef public_6f6e93c
#undef public_6f6e990
#undef public_6f6e9a6
#undef public_6f6e9b5
#undef public_6f6e9be
