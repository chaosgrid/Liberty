#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639633b);

#define public_630d935 _public_630d935
#define public_630d960 _public_630d960
#define public_630d968 _public_630d968
#define public_630d96a _public_630d96a

PROC_DECLARE(0x630d8e0, internal_630d8e0, public_630d8e0);
extern "C" NAKED register_t __cdecl internal_630d8e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639633b @0x630d8e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639633b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push 0xC
        mov ebp, ecx
        call dword ptr ds : [public_6399328]
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebx
        xor esi, esi
        cmp ebx, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_630d96a
        push 0x14
        call public_6391d9c
        add esp, 4
        cmp eax, esi
        je public_630d935
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov esi, eax
        pop edi
        public_630d935 : nop
        mov al, byte ptr ss : [ebp+8]
        mov cl, al
        inc cl
        mov byte ptr ss : [ebp+8], cl
        mov byte ptr ds : [ebx+0xA], al
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], esi
        mov word ptr ds : [ebx+8], 0x4E
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        je public_630d968
        mov ecx, ebp
        lea esp, ss:[esp]
        public_630d960 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jne public_630d960
        public_630d968 : nop
        mov dword ptr ds : [eax], ebx
        public_630d96a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x630d8e0)
    }
}

#undef public_630d935
#undef public_630d960
#undef public_630d968
#undef public_630d96a
