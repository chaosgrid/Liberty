#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44e60);

#define public_6f44e6e _public_6f44e6e
#define public_6f44e70 _public_6f44e70

PROC_DECLARE(0x6f44e60, internal_6f44e60, public_6f44e60);
extern "C" NAKED register_t __cdecl internal_6f44e60()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f44e6e
        lea eax, ds:[ebx+0x28]
        jmp public_6f44e70
        public_6f44e6e : nop
        xor eax, eax
        public_6f44e70 : nop
        mov esi, dword ptr ss : [esp+0x10]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        push eax
        rep movsd
        call public_6f438c0
        mov eax, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [ebx+0x44]
        mov ecx, 2
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
        UNREACHABLE_TRAP(0x6f44e60)
    }
}

#undef public_6f44e6e
#undef public_6f44e70
