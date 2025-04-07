#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8d90);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbe70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec8500 _public_6ec8500
#define public_6ec8533 _public_6ec8533

PROC_DECLARE(0x6ec84c0, internal_6ec84c0, public_6ec84c0);
extern "C" NAKED register_t __cdecl internal_6ec84c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_6ed2c40
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_6ed2c90
        mov dword ptr ds : [esi+8], offset public_6ed2c2c
        call public_6ec8d90
        xor eax, eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov ebp, dword ptr ds : [esi+0x58]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_6ec8533
        mov edi, edi
        public_6ec8500 : nop
        mov edi, ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ec8560
        push edi
        call public_6ed0c50
        mov ecx, dword ptr ds : [esi+0x5C]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x5C], ecx
        jne public_6ec8500
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec8533 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        push ecx
        call public_6ed0c50
        add esp, 4
        xor eax, eax
        mov ecx, edi
        pop edi
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 4
        jmp public_6ecbe70
        UNREACHABLE_TRAP(0x6ec84c0)
    }
}

#undef public_6ec8500
#undef public_6ec8533
