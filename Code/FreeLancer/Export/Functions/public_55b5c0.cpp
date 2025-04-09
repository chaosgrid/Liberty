#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_55b5f2 _public_55b5f2
#define public_55b64b _public_55b64b

PROC_DECLARE(0x55b5c0, internal_55b5c0, public_55b5c0);
extern "C" NAKED register_t __cdecl internal_55b5c0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebx
        mov byte ptr ds : [ebx+0x328], 1
        call dword ptr ds : [eax+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_679aec]
        test eax, eax
        jne public_55b5f2
        call public_5b73e0
        mov dword ptr ds : [public_679aec], eax
        public_55b5f2 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [eax]
        push edi
        push esi
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea edx, ds:[ebx+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        pop edi
        je public_55b64b
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax]
        push edx
        push ecx
        push eax
        call dword ptr ds : [esi+0x94]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        public_55b64b : nop
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x55b5c0)
    }
}

#undef public_55b5f2
#undef public_55b64b
