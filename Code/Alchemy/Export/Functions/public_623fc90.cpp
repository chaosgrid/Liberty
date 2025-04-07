#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_623fc90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a73b);

#define public_623fd69 _public_623fd69
#define public_623fd6b _public_623fd6b
#define public_623fd9c _public_623fd9c
#define public_623fdaf _public_623fdaf

PROC_DECLARE(0x623fc90, internal_623fc90, public_623fc90);
extern "C" NAKED register_t __cdecl internal_623fc90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a73b @0x623fc92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a73b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xA0
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_623fd69
        lea edi, ds:[esi+0x20]
        mov dword ptr ds : [esi], offset public_624b280
        mov ecx, edi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        call public_6206c70
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x50]
        mov ecx, edi
        call public_6206c70
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], 0x42C80000
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], 0x3F800000
        mov byte ptr ds : [esi+0x98], bl
        mov byte ptr ds : [esi+0x99], bl
        mov byte ptr ds : [esi+0x9A], bl
        mov dword ptr ds : [esi+4], offset public_624f930
        mov dword ptr ds : [esi+0x1C], esi
        mov dword ptr ds : [esi], offset public_624b190
        mov dword ptr ds : [esi+4], offset public_624b230
        mov dword ptr ds : [esi+0x9C], 1
        jmp public_623fd6b
        public_623fd69 : nop
        xor esi, esi
        public_623fd6b : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov eax, dword ptr ds : [edi+0x80]
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [esi+0x8C], ecx
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, ebx
        je public_623fd9c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_623fd9c : nop
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x80], eax
        je public_623fdaf
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_623fdaf : nop
        mov edx, dword ptr ds : [edi+0x80]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x84], edx
        mov dword ptr ds : [eax], esi
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x623fc90)
    }
}

#undef public_623fd69
#undef public_623fd6b
#undef public_623fd9c
#undef public_623fdaf
