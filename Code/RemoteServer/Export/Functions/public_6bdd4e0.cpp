#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5720);
CLANG_FORWARD_PROC_SYMBOL(public_6bdd4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a4ce);

#define public_6bdd517 _public_6bdd517
#define public_6bdd527 _public_6bdd527
#define public_6bdd52e _public_6bdd52e
#define public_6bdd53e _public_6bdd53e
#define public_6bdd550 _public_6bdd550
#define public_6bdd565 _public_6bdd565
#define public_6bdd58b _public_6bdd58b
#define public_6bdd59b _public_6bdd59b

PROC_DECLARE(0x6bdd4e0, internal_6bdd4e0, public_6bdd4e0);
extern "C" NAKED register_t __cdecl internal_6bdd4e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a4ce @0x6bdd4e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a4ce
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ds : [ebx], offset public_6c0bbbc
        mov eax, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_6bdd52e
        public_6bdd517 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6bdd527
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdd527 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x4C]
        jne public_6bdd517
        public_6bdd52e : nop
        mov eax, dword ptr ds : [ebx+0x64]
        test eax, eax
        je public_6bdd53e
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdd53e : nop
        push ebp
        mov ebp, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        push edi
        lea edi, ds:[ebx+0x48]
        je public_6bdd565
        lea ecx, ds:[ecx]
        public_6bdd550 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6bd5720
        cmp esi, ebp
        jne public_6bdd550
        public_6bdd565 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor esi, esi
        add esp, 4
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp eax, esi
        pop edi
        pop ebp
        je public_6bdd58b
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdd58b : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp eax, esi
        je public_6bdd59b
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdd59b : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6bdd4e0)
    }
}

#undef public_6bdd517
#undef public_6bdd527
#undef public_6bdd52e
#undef public_6bdd53e
#undef public_6bdd550
#undef public_6bdd565
#undef public_6bdd58b
#undef public_6bdd59b
