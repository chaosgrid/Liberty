#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f3b760 _public_6f3b760
#define public_6f3b7a5 _public_6f3b7a5
#define public_6f3b7f4 _public_6f3b7f4
#define public_6f3b82a _public_6f3b82a
#define public_6f3b843 _public_6f3b843

PROC_DECLARE(0x6f3b6c0, internal_6f3b6c0, public_6f3b6c0);
extern "C" NAKED register_t __cdecl internal_6f3b6c0()
{
    __asm
    {
        sub esp, 0xC4
        push ebx
        mov ebx, dword ptr ss : [esp+0xCC]
        push ebp
        push esi
        push edi
        lea ebp, ds:[ebx+0x60]
        add ebx, 0x30
        mov ecx, 0xC
        mov esi, ebp
        lea edi, ss:[esp+0x80]
        rep movsd
        mov esi, dword ptr ss : [esp+0xDC]
        lea eax, ds:[ebx+0x24]
        push eax
        mov ecx, 9
        mov edi, ebx
        rep movsd
        lea ecx, ss:[esp+0x24]
        push ebx
        push ecx
        call public_6f3b9a0
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f23090
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, ebx
        call public_6f3b670
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f3b970
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0xD8]
        mov ecx, 0xC
        lea esi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xA4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3b843
        lea ebx, ds:[ebx]
        public_6f3b760 : nop
        mov ebx, dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_6f3b82a
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6f3b82a
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xB0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [public_6f61e1c]
        test eax, eax
        jne public_6f3b7a5
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f3b7a5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [public_6f61e1c]
        test eax, eax
        jne public_6f3b7f4
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f3b7f4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ebx]
        mov ecx, 9
        lea esi, ss:[esp+0x2C]
        lea edi, ss:[esp+0x5C]
        rep movsd
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x10]
        public_6f3b82a : nop
        lea ecx, ss:[esp+0x10]
        call public_6f3cc20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [ebp+0xA4]
        jne public_6f3b760
        public_6f3b843 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC4
        ret 8
        UNREACHABLE_TRAP(0x6f3b6c0)
    }
}

#undef public_6f3b760
#undef public_6f3b7a5
#undef public_6f3b7f4
#undef public_6f3b82a
#undef public_6f3b843
