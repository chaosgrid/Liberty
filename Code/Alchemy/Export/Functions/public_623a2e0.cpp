#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);

#define public_623a32f _public_623a32f
#define public_623a331 _public_623a331
#define public_623a34d _public_623a34d

PROC_DECLARE(0x623a2e0, internal_623a2e0, public_623a2e0);
extern "C" NAKED register_t __cdecl internal_623a2e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        call public_623ec90
        test eax, eax
        je public_623a32f
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x28]
        push esi
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        test edx, edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x28], ecx
        pop esi
        fstp dword ptr ds : [eax+0x2C]
        je public_623a331
        inc dword ptr ds : [edx+0xE4]
        jmp public_623a331
        public_623a32f : nop
        xor eax, eax
        public_623a331 : nop
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_623a34d
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 0x24
        public_623a34d : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 0x24
        UNREACHABLE_TRAP(0x623a2e0)
    }
}

#undef public_623a32f
#undef public_623a331
#undef public_623a34d
