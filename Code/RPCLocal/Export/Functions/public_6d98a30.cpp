#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d98a30);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d98a7b _public_6d98a7b
#define public_6d98a87 _public_6d98a87

PROC_DECLARE(0x6d98a30, internal_6d98a30, public_6d98a30);
extern "C" NAKED register_t __cdecl internal_6d98a30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6db4018
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_6db1dc2
        xor ebx, ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov eax, dword ptr ds : [esi+0x44]
        add esp, 4
        cmp eax, ebx
        je public_6d98a87
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d98a7b
        cmp cl, 0xFF
        je public_6d98a7b
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6da1370
        public_6d98a7b : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d98a87 : nop
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d98a30)
    }
}

#undef public_6d98a7b
#undef public_6d98a87
