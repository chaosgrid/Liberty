#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bfa600);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bfa64b _public_6bfa64b
#define public_6bfa657 _public_6bfa657

PROC_DECLARE(0x6bfa600, internal_6bfa600, public_6bfa600);
extern "C" NAKED register_t __cdecl internal_6bfa600()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6c0ccb8
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_6c09aaa
        xor ebx, ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov eax, dword ptr ds : [esi+0x44]
        add esp, 4
        cmp eax, ebx
        je public_6bfa657
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6bfa64b
        cmp cl, 0xFF
        je public_6bfa64b
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6bebe40
        public_6bfa64b : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bfa657 : nop
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bfa600)
    }
}

#undef public_6bfa64b
#undef public_6bfa657
