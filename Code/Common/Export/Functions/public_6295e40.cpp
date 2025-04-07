#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6295e40);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629b0c0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63937f2);

#define public_6295eaf _public_6295eaf

PROC_DECLARE(0x6295e40, internal_6295e40, public_6295e40);
extern "C" NAKED register_t __cdecl internal_6295e40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63937f2 @0x6295e42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63937f2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x20]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_639ce6c
        mov dword ptr ds : [edi], offset public_639ce3c
        mov dword ptr ss : [esp+0x1C], 2
        call public_629af40
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_639be28
        cmp byte ptr ds : [edi+0x10], bl
        mov byte ptr ss : [esp+0x1C], 3
        je public_6295eaf
        mov ecx, edi
        call public_629b0c0
        public_6295eaf : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], bl
        call public_6285b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_629f2f0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6295e40)
    }
}

#undef public_6295eaf
