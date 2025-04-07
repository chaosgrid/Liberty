#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62234e0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248d2b);

#define public_6223572 _public_6223572
#define public_6223574 _public_6223574

PROC_DECLARE(0x62234e0, internal_62234e0, public_62234e0);
extern "C" NAKED register_t __cdecl internal_62234e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248d2b @0x62234e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xB8
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6223572
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624dc60
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624dbb8
        mov dword ptr ds : [esi], offset public_624db58
        mov dword ptr ds : [edi+0xB4], eax
        jmp public_6223574
        public_6223572 : nop
        xor edi, edi
        public_6223574 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6244f90
        mov eax, dword ptr ds : [ebx+0x9C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x9C], eax
        xor eax, eax
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62234e0)
    }
}

#undef public_6223572
#undef public_6223574
