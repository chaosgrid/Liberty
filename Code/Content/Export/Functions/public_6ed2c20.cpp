#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab144);

#define public_6ed2c61 _public_6ed2c61
#define public_6ed2c8a _public_6ed2c8a
#define public_6ed2cb0 _public_6ed2cb0
#define public_6ed2cc9 _public_6ed2cc9
#define public_6ed2d20 _public_6ed2d20
#define public_6ed2d35 _public_6ed2d35

PROC_DECLARE(0x6ed2c20, internal_6ed2c20, public_6ed2c20);
extern "C" NAKED register_t __cdecl internal_6ed2c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab144 @0x6ed2c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab144
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_6fb60a8
        mov ecx, dword ptr ds : [edi+0x68]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x24], 3
        je public_6ed2c61
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x68], ebp
        public_6ed2c61 : nop
        mov eax, dword ptr ds : [edi+0x70]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x70], ebp
        mov dword ptr ds : [edi+0x74], ebp
        mov dword ptr ds : [edi+0x78], ebp
        mov ecx, dword ptr ds : [edi+0x68]
        add esp, 4
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x24], 1
        je public_6ed2c8a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x68], ebp
        public_6ed2c8a : nop
        lea esi, ds:[edi+0x58]
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 4
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        je public_6ed2cc9
        nop 
        lea esp, ss:[esp]
        public_6ed2cb0 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ed2cb0
        public_6ed2cc9 : nop
        mov ebx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push ebx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6fa8370
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        lea ebx, ds:[edi+0x3C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        je public_6ed2d35
        lea esp, ss:[esp]
        public_6ed2d20 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, edi
        jne public_6ed2d20
        public_6ed2d35 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ed2c20)
    }
}

#undef public_6ed2c61
#undef public_6ed2c8a
#undef public_6ed2cb0
#undef public_6ed2cc9
#undef public_6ed2d20
#undef public_6ed2d35
