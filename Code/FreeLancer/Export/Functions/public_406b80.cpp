#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4024d0);
CLANG_FORWARD_PROC_SYMBOL(public_406b80);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b84cc);

#define public_406bd0 _public_406bd0
#define public_406bf5 _public_406bf5

PROC_DECLARE(0x406b80, internal_406b80, public_406b80);
extern "C" NAKED register_t __cdecl internal_406b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b84cc @0x406b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b84cc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_5c7734
        lea eax, ds:[edi+4]
        push eax
        mov dword ptr ss : [esp+0x20], 2
        call public_4024d0
        mov esi, dword ptr ds : [edi+0x44]
        mov ebp, dword ptr ds : [edi+0x48]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0xC], esi
        je public_406bf5
        mov edi, edi
        public_406bd0 : nop
        lea ecx, ds:[esi+0x14]
        mov byte ptr ss : [esp+0x1C], 3
        call public_4de730
        lea ecx, ds:[esi+4]
        mov byte ptr ss : [esp+0x1C], 1
        call public_4de730
        add esi, 0x24
        cmp esi, ebp
        mov dword ptr ss : [esp+0xC], esi
        jne public_406bd0
        public_406bf5 : nop
        mov ecx, dword ptr ds : [edi+0x44]
        push ecx
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+0x44], esi
        mov dword ptr ds : [edi+0x48], esi
        mov dword ptr ds : [edi+0x4C], esi
        mov edx, dword ptr ds : [edi+0x34]
        push edx
        call public_5b7e1d
        mov dword ptr ds : [edi+0x34], esi
        mov dword ptr ds : [edi+0x38], esi
        mov dword ptr ds : [edi+0x3C], esi
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov dword ptr ds : [edi+0x24], esi
        mov dword ptr ds : [edi+0x28], esi
        mov dword ptr ds : [edi+0x2C], esi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x406b80)
    }
}

#undef public_406bd0
#undef public_406bf5
