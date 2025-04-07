#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f38a39 _public_6f38a39
#define public_6f38a5a _public_6f38a5a
#define public_6f38a65 _public_6f38a65

PROC_DECLARE(0x6f38950, internal_6f38950, public_6f38950);
extern "C" NAKED register_t __cdecl internal_6f38950()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx+0xA0]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        cmp edi, eax
        jae public_6f38a65
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x30]
        lea esi, ds:[ebx+0xA4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], edi
        call public_6f3cbb0
        mov edx, dword ptr ds : [ebx+0xA8]
        cmp edx, dword ptr ss : [esp+0x2C]
        je public_6f38a65
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0
        call public_6f3c5d0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x10]
        mov ebx, dword ptr ss : [esp+0x34]
        add eax, 0x38
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0
        call public_6f3c5d0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6f38a5a
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0
        call public_6f3c5d0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_6f61e1c]
        test eax, eax
        mov edx, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [edx+4]
        jne public_6f38a39
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f38a39 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        public_6f38a5a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_6f38a65 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6f38950)
    }
}

#undef public_6f38a39
#undef public_6f38a5a
#undef public_6f38a65
