#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48700);

#define public_6f4870e _public_6f4870e
#define public_6f48710 _public_6f48710

PROC_DECLARE(0x6f48700, internal_6f48700, public_6f48700);
extern "C" NAKED register_t __cdecl internal_6f48700()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f4870e
        lea eax, ds:[ebx+0x28]
        jmp public_6f48710
        public_6f4870e : nop
        xor eax, eax
        public_6f48710 : nop
        mov esi, dword ptr ss : [esp+0x10]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        push eax
        rep movsd
        call public_6f438c0
        mov eax, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [ebx+0x44]
        mov ecx, 0xD
        mov dword ptr ds : [ebx+0x28], ecx
        mov dword ptr ds : [ebx+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x40]
        add esp, 0x30
        mov dword ptr ds : [ebx+8], eax
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0x48]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f48700)
    }
}

#undef public_6f4870e
#undef public_6f48710
