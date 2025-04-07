#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48cc0);

#define public_6f48ccf _public_6f48ccf
#define public_6f48cd1 _public_6f48cd1
#define public_6f48d10 _public_6f48d10
#define public_6f48d17 _public_6f48d17

PROC_DECLARE(0x6f48cc0, internal_6f48cc0, public_6f48cc0);
extern "C" NAKED register_t __cdecl internal_6f48cc0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f48ccf
        lea eax, ds:[ebx+0x28]
        jmp public_6f48cd1
        public_6f48ccf : nop
        xor eax, eax
        public_6f48cd1 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov edx, 0x10
        mov dword ptr ds : [ebx+0x28], edx
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, edx
        jne public_6f48d10
        mov eax, dword ptr ss : [ebp+0x2C]
        lea esi, ss:[ebp+0x30]
        lea edi, ds:[ebx+0x58]
        mov ecx, 8
        mov dword ptr ds : [ebx+0x54], eax
        rep movsd
        jmp public_6f48d17
        public_6f48d10 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_6f48d17 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x40]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0x10], edx
        mov edx, dword ptr ds : [ebx+0x44]
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0x48]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f48cc0)
    }
}

#undef public_6f48ccf
#undef public_6f48cd1
#undef public_6f48d10
#undef public_6f48d17
