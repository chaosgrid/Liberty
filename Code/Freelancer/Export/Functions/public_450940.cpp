#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cb0);
CLANG_FORWARD_PROC_SYMBOL(public_556cc0);

#define public_45099b _public_45099b
#define public_4509dd _public_4509dd

PROC_DECLARE(0x450940, internal_450940, public_450940);
extern "C" NAKED register_t __cdecl internal_450940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        add eax, 0x24
        push eax
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x2C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6270]
        mov edx, dword ptr ds : [edi+0x6C]
        mov ebp, dword ptr ds : [eax]
        mov ecx, edx
        shl ecx, 6
        add ecx, offset public_668b00
        lea ebx, ds:[ecx+4]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        cmp edx, dword ptr ds : [public_66d100]
        jne public_45099b
        lea eax, ds:[ecx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        push ecx
        call public_556cb0
        add esp, 8
        public_45099b : nop
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6274]
        mov ebx, dword ptr ds : [edi+0x6C]
        mov edx, ebx
        shl edx, 6
        add edx, offset public_668b00
        lea ebp, ds:[edx+0x10]
        mov esi, eax
        mov ecx, 9
        mov edi, ebp
        rep movsd
        cmp ebx, dword ptr ds : [public_66d100]
        jne public_4509dd
        mov ecx, dword ptr ds : [edx]
        push ebp
        push ecx
        call public_556cc0
        add esp, 8
        public_4509dd : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x450940)
    }
}

#undef public_45099b
#undef public_4509dd
