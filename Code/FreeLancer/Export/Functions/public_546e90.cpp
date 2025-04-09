#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_515890);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_546eae _public_546eae
#define public_546ed2 _public_546ed2
#define public_546ed4 _public_546ed4
#define public_546f68 _public_546f68

PROC_DECLARE(0x546e90, internal_546e90, public_546e90);
extern "C" NAKED register_t __cdecl internal_546e90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        push esi
        push edi
        jne public_546eae
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 0x10
        ret 0x10
        public_546eae : nop
        lea edi, ds:[ecx-4]
        test edi, edi
        je public_546ed2
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_546ed2
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_546ed2
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_546ed4
        public_546ed2 : nop
        xor ecx, ecx
        public_546ed4 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x24]
        push edx
        push ebx
        push edi
        push ebp
        push esi
        call dword ptr ds : [public_5c6b1c]
        test eax, eax
        jne public_546f68
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov byte ptr ss : [esp+0x20], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [esi]
        push 2
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5416c0
        add esp, 8
        mov esi, eax
        mov eax, dword ptr ss : [ebp]
        push 2
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        push eax
        call public_5416c0
        push 0
        push edi
        push eax
        push esi
        call public_515890
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 0x10
        public_546f68 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x546e90)
    }
}

#undef public_546eae
#undef public_546ed2
#undef public_546ed4
#undef public_546f68
