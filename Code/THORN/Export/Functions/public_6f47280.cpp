#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47280);

#define public_6f472f0 _public_6f472f0
#define public_6f472f7 _public_6f472f7

PROC_DECLARE(0x6f47280, internal_6f47280, public_6f47280);
extern "C" NAKED register_t __cdecl internal_6f47280()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        xor eax, eax
        mov ecx, 0x168
        mov dword ptr ds : [ebx+0x68], ecx
        mov dword ptr ds : [ebx+0x6C], ecx
        sub esp, 0x2C
        lea ebp, ds:[ebx+0x28]
        mov edi, esp
        mov dword ptr ds : [ebx+0x58], eax
        mov dword ptr ds : [ebx+0x5C], eax
        mov dword ptr ds : [ebx+0x60], 0x42480000
        mov dword ptr ds : [ebx+0x64], 0x447A0000
        mov dword ptr ds : [ebx+0x70], eax
        mov dword ptr ds : [ebx+0x74], eax
        mov ecx, 0xB
        push ebp
        rep movsd
        call public_6f438c0
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [ebp], 0xF
        mov ecx, dword ptr ds : [eax]
        add esp, 0x30
        cmp ecx, 0xF
        jne public_6f472f0
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [ebx+0x54], ecx
        lea esi, ds:[eax+0x30]
        mov ecx, 8
        lea edi, ds:[ebx+0x58]
        rep movsd
        jmp public_6f472f7
        public_6f472f0 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_6f472f7 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ds : [ebx+0x48]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        add edx, eax
        mov eax, dword ptr ds : [ebx+0x44]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0xF
        mov dword ptr ds : [ebx+0x1C], edx
        mov dword ptr ds : [ebx+0x14], eax
        mov dword ptr ds : [ebx+0x18], ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f47280)
    }
}

#undef public_6f472f0
#undef public_6f472f7
