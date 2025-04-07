#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4684e _public_6f4684e
#define public_6f46875 _public_6f46875
#define public_6f468b5 _public_6f468b5
#define public_6f468d4 _public_6f468d4
#define public_6f468f8 _public_6f468f8

PROC_DECLARE(0x6f467c0, internal_6f467c0, public_6f467c0);
extern "C" NAKED register_t __cdecl internal_6f467c0()
{
    __asm
    {
        sub esp, 0xC0
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xCC]
        test esi, esi
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], esi
        je public_6f468f8
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        call public_6f3b9a0
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0xC]
        call public_6f23090
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6f428b0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x7C]
        call public_6f3b970
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f4684e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f4684e : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        push edi
        lea ebx, ss:[ebp+0x88]
        push ebx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f46875
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46875 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x80]
        push ecx
        lea ecx, ss:[esp+0xB4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        lea edi, ss:[esp+0x4C]
        rep movsd
        jne public_6f468b5
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f468b5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f468d4
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f468d4 : nop
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[ebp+0x58]
        push edi
        lea ecx, ss:[esp+0x80]
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x4C]
        rep movsd
        pop edi
        pop ebx
        public_6f468f8 : nop
        pop esi
        pop ebp
        add esp, 0xC0
        ret 4
        UNREACHABLE_TRAP(0x6f467c0)
    }
}

#undef public_6f4684e
#undef public_6f46875
#undef public_6f468b5
#undef public_6f468d4
#undef public_6f468f8
