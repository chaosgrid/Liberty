#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44bf0);

#define public_6f44bff _public_6f44bff
#define public_6f44c01 _public_6f44c01
#define public_6f44c33 _public_6f44c33
#define public_6f44c3a _public_6f44c3a

PROC_DECLARE(0x6f44bf0, internal_6f44bf0, public_6f44bf0);
extern "C" NAKED register_t __cdecl internal_6f44bf0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f44bff
        lea eax, ds:[ebx+0x28]
        jmp public_6f44c01
        public_6f44bff : nop
        xor eax, eax
        public_6f44c01 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov ecx, 1
        mov dword ptr ds : [ebx+0x28], ecx
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, ecx
        jne public_6f44c33
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x54], eax
        jmp public_6f44c3a
        public_6f44c33 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_6f44c3a : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [ebx+0x44]
        mov dword ptr ds : [ebx+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x40]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0x48]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f44bf0)
    }
}

#undef public_6f44bff
#undef public_6f44c01
#undef public_6f44c33
#undef public_6f44c3a
