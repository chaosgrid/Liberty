#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_48dd40);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc4d9);

#define public_48dd90 _public_48dd90
#define public_48dd9b _public_48dd9b
#define public_48dda2 _public_48dda2
#define public_48ddcd _public_48ddcd
#define public_48dddd _public_48dddd
#define public_48ddf4 _public_48ddf4

PROC_DECLARE(0x48dd40, internal_48dd40, public_48dd40);
extern "C" NAKED register_t __cdecl internal_48dd40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc4d9 @0x48dd42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc4d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov esi, dword ptr ds : [edi+0x78]
        cmp esi, ebx
        je public_48dddd
        mov dword ptr ss : [esp+0x10], esi
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        call public_4144f0
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 2
        je public_48dda2
        mov edi, edi
        public_48dd90 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_48dd9b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_48dd9b : nop
        add edi, 8
        cmp edi, ebp
        jne public_48dd90
        public_48dda2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        pop ebp
        je public_48ddcd
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        public_48ddcd : nop
        push esi
        call public_5b7e1d
        mov edi, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [edi+0x78], ebx
        public_48dddd : nop
        mov eax, dword ptr ds : [edi+0x5C]
        cmp eax, ebx
        je public_48ddf4
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ds : [edi+0x60], ebx
        public_48ddf4 : nop
        lea ecx, ds:[edi+8]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_59ef20
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x48dd40)
    }
}

#undef public_48dd90
#undef public_48dd9b
#undef public_48dda2
#undef public_48ddcd
#undef public_48dddd
#undef public_48ddf4
