#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f019c0);

#define public_6f01a00 _public_6f01a00
#define public_6f01a16 _public_6f01a16

PROC_DECLARE(0x6f019c0, internal_6f019c0, public_6f019c0);
extern "C" NAKED register_t __cdecl internal_6f019c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb303c]
        mov ebp, dword ptr ds : [public_6fb314c]
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, edi
        call ebp
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6fb3148]
        mov eax, dword ptr ds : [esi+0x10]
        add esi, 0x10
        xor ebx, ebx
        cmp eax, 0xFFFFFFFF
        je public_6f01a16
        nop 
        public_6f01a00 : nop
        cmp ebx, 3
        jae public_6f01a16
        push esi
        mov ecx, edi
        call ebp
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        inc ebx
        cmp eax, 0xFFFFFFFF
        jne public_6f01a00
        public_6f01a16 : nop
        mov ecx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        jmp dword ptr ds : [public_6fb3038]
        UNREACHABLE_TRAP(0x6f019c0)
    }
}

#undef public_6f01a00
#undef public_6f01a16
