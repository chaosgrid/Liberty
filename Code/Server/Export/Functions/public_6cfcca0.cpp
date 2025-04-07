#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60db3);

#define public_6cfcd1e _public_6cfcd1e
#define public_6cfcd20 _public_6cfcd20

PROC_DECLARE(0x6cfcca0, internal_6cfcca0, public_6cfcca0);
extern "C" NAKED register_t __cdecl internal_6cfcca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60db3 @0x6cfcca2*/
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
        push 0x34
        mov edi, ecx
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6cfcd1e
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
        mov byte ptr ds : [esi+0x30], 1
        mov dword ptr ds : [esi], offset public_6d66d58
        jmp public_6cfcd20
        public_6cfcd1e : nop
        xor esi, esi
        public_6cfcd20 : nop
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
        UNREACHABLE_TRAP(0x6cfcca0)
    }
}

#undef public_6cfcd1e
#undef public_6cfcd20
