#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b457a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b457eb _public_6b457eb
#define public_6b457f7 _public_6b457f7

PROC_DECLARE(0x6b457a0, internal_6b457a0, public_6b457a0);
extern "C" NAKED register_t __cdecl internal_6b457a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6b6c2e8
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_6b6a092
        xor ebx, ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov eax, dword ptr ds : [esi+0x44]
        add esp, 4
        cmp eax, ebx
        je public_6b457f7
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6b457eb
        cmp cl, 0xFF
        je public_6b457eb
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6b4e730
        public_6b457eb : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6b6a092
        add esp, 4
        public_6b457f7 : nop
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b457a0)
    }
}

#undef public_6b457eb
#undef public_6b457f7
