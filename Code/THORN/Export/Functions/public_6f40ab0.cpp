#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f40afb _public_6f40afb
#define public_6f40b17 _public_6f40b17
#define public_6f40b25 _public_6f40b25

PROC_DECLARE(0x6f40ab0, internal_6f40ab0, public_6f40ab0);
extern "C" NAKED register_t __cdecl internal_6f40ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        mov ebx, ecx
        push edi
        lea edi, ds:[eax+0x14]
        mov ecx, 9
        mov esi, ebp
        rep movsd
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6f40b25
        mov ecx, 9
        mov esi, ebp
        lea edi, ss:[esp+0x10]
        rep movsd
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f40b17
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f40afb
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40afb : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x10]
        rep movsd
        public_6f40b17 : nop
        mov ebx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        call dword ptr ds : [eax+0x10]
        public_6f40b25 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6f40ab0)
    }
}

#undef public_6f40afb
#undef public_6f40b17
#undef public_6f40b25
