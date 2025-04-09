#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531b40);
CLANG_FORWARD_PROC_SYMBOL(public_531cf0);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_JUMP_SYMBOL(public_5c06c3);

#define public_531bd0 _public_531bd0
#define public_531bd2 _public_531bd2
#define public_531bff _public_531bff

PROC_DECLARE(0x531b40, internal_531b40, public_531b40);
extern "C" NAKED register_t __cdecl internal_531b40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c06c3 @0x531b42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c06c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi], offset public_5de13c
        call dword ptr ds : [public_5c6934]
        push ebx
        call dword ptr ds : [public_5c6570]
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_531bd2
        mov ecx, edi
        call dword ptr ds : [public_5c6930]
        mov ecx, eax
        add ecx, 0x70
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_531bd0
        mov ecx, edi
        call dword ptr ds : [public_5c6930]
        add eax, 0x70
        push eax
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ds : [esi+0xC], eax
        je public_531bd2
        push eax
        call public_536100
        add esp, 4
        jmp public_531bd2
        public_531bd0 : nop
        xor ebp, ebp
        public_531bd2 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi], offset public_5de14c
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 1
        call dword ptr ds : [edx+4]
        test al, al
        je public_531bff
        mov ecx, esi
        call public_531cf0
        public_531bff : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x531b40)
    }
}

#undef public_531bd0
#undef public_531bd2
#undef public_531bff
