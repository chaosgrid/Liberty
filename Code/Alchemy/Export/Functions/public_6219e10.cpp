#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6219e10);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248663);

#define public_6219efc _public_6219efc
#define public_6219efe _public_6219efe

PROC_DECLARE(0x6219e10, internal_6219e10, public_6219e10);
extern "C" NAKED register_t __cdecl internal_6219e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248663 @0x6219e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248663
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        push 0x104
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6219efc
        lea esi, ss:[ebp+4]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [ebp], offset public_624bf40
        mov dword ptr ss : [esp+0x14], esi
        call public_623fb80
        mov dword ptr ds : [esi+0x98], edi
        mov dword ptr ds : [esi], offset public_624d108
        mov byte ptr ds : [esi+0x96], 1
        lea ebx, ds:[esi+0xCC]
        mov byte ptr ss : [esp+0x20], 1
        mov ecx, ebx
        call public_6206c70
        mov dword ptr ds : [ebx+0x2C], edi
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x24], edi
        mov dword ptr ds : [esi], offset public_624d0a8
        mov dword ptr ds : [esi+0xA4], edi
        mov dword ptr ds : [esi+0xA0], edi
        mov dword ptr ds : [esi+0xB0], edi
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ds : [esi+0xA8], edi
        mov dword ptr ds : [esi+0xBC], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xC8], edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ss : [ebp+0x1C], ebp
        mov dword ptr ss : [ebp], offset public_624d000
        mov dword ptr ss : [ebp+4], offset public_624cfa0
        mov dword ptr ss : [ebp+0x100], 1
        pop ebx
        jmp public_6219efe
        public_6219efc : nop
        xor ebp, ebp
        public_6219efe : nop
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+4]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6244f90
        mov eax, dword ptr ds : [edi+0x9C]
        pop edi
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x9C], eax
        pop esi
        xor eax, eax
        mov dword ptr ds : [ecx], ebp
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6219e10)
    }
}

#undef public_6219efc
#undef public_6219efe
