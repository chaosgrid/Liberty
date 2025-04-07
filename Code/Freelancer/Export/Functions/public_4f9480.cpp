#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f94c4 _public_4f94c4
#define public_4f94da _public_4f94da
#define public_4f94dd _public_4f94dd

PROC_DECLARE(0x4f9480, internal_4f9480, public_4f9480);
extern "C" NAKED register_t __cdecl internal_4f9480()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        push esi
        push edi
        je public_4f94da
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f94da
        mov ecx, dword ptr ds : [ebx+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f94da
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f94c4
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f94c4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x3C]
        jmp public_4f94dd
        public_4f94da : nop
        lea esi, ds:[ebx+0x10]
        public_4f94dd : nop
        mov eax, dword ptr ss : [esp+0x70]
        lea edi, ss:[esp+0xC]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        pop esi
        fld dword ptr ds : [ebx+0x74]
        pop ebx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x4f9480)
    }
}

#undef public_4f94c4
#undef public_4f94da
#undef public_4f94dd
