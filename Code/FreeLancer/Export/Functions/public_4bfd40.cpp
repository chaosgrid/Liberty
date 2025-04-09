#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bfd40);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd5f1);

#define public_4bfd9a _public_4bfd9a
#define public_4bfdb0 _public_4bfdb0
#define public_4bfdc6 _public_4bfdc6

PROC_DECLARE(0x4bfd40, internal_4bfd40, public_4bfd40);
extern "C" NAKED register_t __cdecl internal_4bfd40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd5f1 @0x4bfd42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd5f1
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
        lea edi, ds:[esi+0x32C]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d62ac
        mov dword ptr ds : [esi+0x7C], offset public_5d629c
        mov dword ptr ds : [edi], offset public_5d6294
        mov ecx, dword ptr ds : [esi+0x330]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], 1
        je public_4bfd9a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x330], ebx
        public_4bfd9a : nop
        mov ecx, dword ptr ds : [esi+0x334]
        cmp ecx, ebx
        je public_4bfdb0
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x334], ebx
        public_4bfdb0 : nop
        mov ecx, dword ptr ds : [esi+0x338]
        cmp ecx, ebx
        je public_4bfdc6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x338], ebx
        public_4bfdc6 : nop
        mov ecx, edi
        mov dword ptr ds : [public_6724b4], ebx
        mov byte ptr ss : [esp+0x1C], bl
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4bfd40)
    }
}

#undef public_4bfd9a
#undef public_4bfdb0
#undef public_4bfdc6
