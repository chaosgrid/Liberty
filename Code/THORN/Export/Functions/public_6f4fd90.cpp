#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4fdb0 _public_6f4fdb0
#define public_6f4fdc1 _public_6f4fdc1
#define public_6f4fddd _public_6f4fddd

PROC_DECLARE(0x6f4fd90, internal_6f4fd90, public_6f4fd90);
extern "C" NAKED register_t __cdecl internal_6f4fd90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+eax]
        cmp esi, dword ptr ss : [esp+0x20]
        jb public_6f4fdb0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6f4c7f0
        add esp, 4
        public_6f4fdb0 : nop
        mov edx, esi
        xor edx, edi
        cmp edx, edi
        jbe public_6f4fddd
        test edi, edi
        jbe public_6f4fdc1
        cmp esi, 8
        jb public_6f4fddd
        public_6f4fdc1 : nop
        push esi
        call public_6f4fdf0
        imul eax, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6f4fe10
        add esp, 0xC
        pop edi
        pop esi
        ret 
        public_6f4fddd : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4fd90)
    }
}

#undef public_6f4fdb0
#undef public_6f4fdc1
#undef public_6f4fddd
