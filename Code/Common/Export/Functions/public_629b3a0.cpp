#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);

#define public_629b3e2 _public_629b3e2
#define public_629b414 _public_629b414
#define public_629b41e _public_629b41e
#define public_629b424 _public_629b424

PROC_DECLARE(0x629b3a0, internal_629b3a0, public_629b3a0);
extern "C" NAKED register_t __cdecl internal_629b3a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x14
        push edi
        cmp eax, 0xFFFFFFFF
        mov ax, word ptr ds : [public_63a4aa4]
        mov edi, ecx
        je public_629b424
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov word ptr ss : [esp+0xC], ax
        mov dword ptr ss : [esp+0x10], 0x1FE0
        mov byte ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_629b440
        mov esi, eax
        test esi, esi
        je public_629b41e
        public_629b3e2 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        test al, al
        jne public_629b414
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        call public_629b440
        mov esi, eax
        test esi, esi
        jne public_629b3e2
        mov ax, word ptr ss : [esp+8]
        pop esi
        pop edi
        add esp, 0x14
        ret 4
        public_629b414 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        mov dword ptr ss : [esp+8], edx
        public_629b41e : nop
        mov ax, word ptr ss : [esp+8]
        pop esi
        public_629b424 : nop
        pop edi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x629b3a0)
    }
}

#undef public_629b3e2
#undef public_629b414
#undef public_629b41e
#undef public_629b424
