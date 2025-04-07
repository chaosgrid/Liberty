#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_629f090);
CLANG_FORWARD_PROC_SYMBOL(public_62a0300);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab396 _public_62ab396
#define public_62ab3be _public_62ab3be
#define public_62ab3e2 _public_62ab3e2

PROC_DECLARE(0x62ab330, internal_62ab330, public_62ab330);
extern "C" NAKED register_t __cdecl internal_62ab330()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, ebp
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        push edi
        mov dword ptr ds : [edx+8], eax
        call public_6334510
        add esp, 4
        test al, al
        push edi
        je public_62ab396
        lea ecx, ds:[esi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62ab3e2
        push eax
        call public_629f090
        add esp, 4
        test eax, eax
        je public_62ab3e2
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x6C]
        jmp public_62ab3be
        public_62ab396 : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab3e2
        push edi
        lea ecx, ds:[esi+0x144]
        call public_62a1540
        test eax, eax
        je public_62ab3e2
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call public_62a0300
        public_62ab3be : nop
        test al, al
        je public_62ab3e2
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ss : [ebp+4], ecx
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 8
        public_62ab3e2 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62ab330)
    }
}

#undef public_62ab396
#undef public_62ab3be
#undef public_62ab3e2
