#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7d0);

#define public_6f4f7fc _public_6f4f7fc
#define public_6f4f820 _public_6f4f820
#define public_6f4f838 _public_6f4f838

PROC_DECLARE(0x6f4f7d0, internal_6f4f7d0, public_6f4f7d0);
extern "C" NAKED register_t __cdecl internal_6f4f7d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        sub edi, 0xD
        cmp al, 0x40
        jne public_6f4f7fc
        mov eax, dword ptr ss : [esp+0xC]
        inc esi
        push esi
        push edi
/*FIXUP push offset public_6f609b0 @0x6f4f7ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f609b0
        push eax
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        pop edi
        pop esi
        ret 
        public_6f4f7fc : nop
        cmp al, 0x28
        jne public_6f4f820
        mov edx, dword ptr ds : [public_6f609a4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_6f609a8]
        mov dword ptr ds : [ecx+4], eax
        mov dl, byte ptr ds : [public_6f609ac]
        pop edi
        mov byte ptr ds : [ecx+8], dl
        pop esi
        ret 
        public_6f4f820 : nop
        push 0xA
        push esi
        call dword ptr ds : [public_6f5a0d0]
        add esp, 8
        test eax, eax
        je public_6f4f838
        sub eax, esi
        cmp eax, edi
        jge public_6f4f838
        mov edi, eax
        public_6f4f838 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
/*FIXUP push offset public_6f60994 @0x6f4f83e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60994
        push esi
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [public_6f6098c]
        lea eax, ds:[edi+esi+8]
        add esp, 0x10
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ds : [public_6f60990]
        pop edi
        mov byte ptr ds : [eax+4], dl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f7d0)
    }
}

#undef public_6f4f7fc
#undef public_6f4f820
#undef public_6f4f838
