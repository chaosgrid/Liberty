#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48920);

#define public_6f4892f _public_6f4892f
#define public_6f48931 _public_6f48931
#define public_6f48969 _public_6f48969
#define public_6f48971 _public_6f48971

PROC_DECLARE(0x6f48920, internal_6f48920, public_6f48920);
extern "C" NAKED register_t __cdecl internal_6f48920()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f4892f
        lea eax, ds:[ebx+0x28]
        jmp public_6f48931
        public_6f4892f : nop
        xor eax, eax
        public_6f48931 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov ecx, 0xE
        mov dword ptr ds : [ebx+0x28], ecx
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, ecx
        jne public_6f48969
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x54], eax
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x58], edx
        jmp public_6f48971
        public_6f48969 : nop
        xor eax, eax
        mov dword ptr ds : [ebx+0x54], eax
        mov dword ptr ds : [ebx+0x58], eax
        public_6f48971 : nop
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
        UNREACHABLE_TRAP(0x6f48920)
    }
}

#undef public_6f4892f
#undef public_6f48931
#undef public_6f48969
#undef public_6f48971
