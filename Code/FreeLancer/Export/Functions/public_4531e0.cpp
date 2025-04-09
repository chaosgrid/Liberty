#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_410f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_453200 _public_453200
#define public_453221 _public_453221
#define public_453275 _public_453275

PROC_DECLARE(0x4531e0, internal_4531e0, public_4531e0);
extern "C" NAKED register_t __cdecl internal_4531e0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        je public_453200
        lea edx, ds:[esi+0x24]
        push edx
        call public_410ef0
        public_453200 : nop
        push edi
        lea ebp, ds:[ebx+0x74]
        mov ecx, 9
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [public_66d27c]
        test eax, eax
        pop edi
        jne public_453221
        call public_5b73e0
        mov dword ptr ds : [public_66d27c], eax
        public_453221 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x98]
        push edx
        push ebp
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [public_5c6280]
        mov edx, dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ds : [edx]
        add esp, 8
        test ecx, ecx
        pop esi
        pop ebp
        pop ebx
        je public_453275
        lea eax, ss:[esp+0x18]
        push eax
        call public_410f60
        public_453275 : nop
        xor eax, eax
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x4531e0)
    }
}

#undef public_453200
#undef public_453221
#undef public_453275
