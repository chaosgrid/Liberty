#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60db3);

#define public_6cfcc7a _public_6cfcc7a
#define public_6cfcc7c _public_6cfcc7c

PROC_DECLARE(0x6cfcc00, internal_6cfcc00, public_6cfcc00);
extern "C" NAKED register_t __cdecl internal_6cfcc00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60db3 @0x6cfcc02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60db3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x30
        mov edi, ecx
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6cfcc7a
        mov eax, 0xBF800000
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov al, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], bl
        mov byte ptr ds : [esi+0x14], al
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x1C], 1
        call dword ptr ds : [public_6d6453c]
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi], offset public_6d66da0
        jmp public_6cfcc7c
        public_6cfcc7a : nop
        xor esi, esi
        public_6cfcc7c : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cfcc00)
    }
}

#undef public_6cfcc7a
#undef public_6cfcc7c
