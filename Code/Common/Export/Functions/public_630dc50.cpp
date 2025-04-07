#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396366);

#define public_630dcb7 _public_630dcb7
#define public_630dcb9 _public_630dcb9
#define public_630dce0 _public_630dce0
#define public_630dce8 _public_630dce8
#define public_630dcea _public_630dcea

PROC_DECLARE(0x630dc50, internal_630dc50, public_630dc50);
extern "C" NAKED register_t __cdecl internal_630dc50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396366 @0x630dc52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396366
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        push 0xC
        mov edi, ecx
        call dword ptr ds : [public_6399328]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_630dcea
        push ebx
        push 0x18
        call public_6391d9c
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebx
        test ebx, ebx
        mov byte ptr ss : [esp+0x1C], 1
        je public_630dcb7
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, ebx
        mov dword ptr ds : [ebx], 0
        call public_630dda0
        jmp public_630dcb9
        public_630dcb7 : nop
        xor ebx, ebx
        public_630dcb9 : nop
        mov al, byte ptr ds : [edi+0x13]
        mov cl, al
        inc cl
        mov byte ptr ds : [edi+0x13], cl
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+0xA], al
        mov dword ptr ds : [esi], 0
        mov word ptr ds : [esi+8], 0x21
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        mov eax, edi
        pop ebx
        je public_630dce8
        mov edi, edi
        public_630dce0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jne public_630dce0
        public_630dce8 : nop
        mov dword ptr ds : [eax], esi
        public_630dcea : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x630dc50)
    }
}

#undef public_630dcb7
#undef public_630dcb9
#undef public_630dce0
#undef public_630dce8
#undef public_630dcea
