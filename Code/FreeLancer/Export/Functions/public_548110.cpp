#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5125f0);
CLANG_FORWARD_PROC_SYMBOL(public_512620);
CLANG_FORWARD_PROC_SYMBOL(public_539810);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_548150 _public_548150
#define public_54816f _public_54816f
#define public_548171 _public_548171
#define public_5481d0 _public_5481d0
#define public_5481fe _public_5481fe

PROC_DECLARE(0x548110, internal_548110, public_548110);
extern "C" NAKED register_t __cdecl internal_548110()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xE4]
        test ecx, ecx
        je public_548150
        lea eax, ss:[esp+8]
        push eax
        call public_5125f0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0xE4]
        call public_512620
        pop esi
        add esp, 0x10
        ret 4
        public_548150 : nop
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_54816f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_54816f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_548171
        public_54816f : nop
        xor eax, eax
        public_548171 : nop
        test byte ptr ds : [eax+0xE0], 7
        je public_5481fe
        mov edx, dword ptr ds : [public_5c6d90]
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        push ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [ebx+0x88]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_678b88]
        test eax, eax
        jne public_5481d0
        call public_5b73e0
        mov dword ptr ds : [public_678b88], eax
        public_5481d0 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop ebx
        pop esi
        add esp, 0x10
        ret 4
        public_5481fe : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        call public_539810
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x548110)
    }
}

#undef public_548150
#undef public_54816f
#undef public_548171
#undef public_5481d0
#undef public_5481fe
