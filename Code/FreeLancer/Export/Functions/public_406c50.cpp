#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_406c50);

#define public_406c67 _public_406c67
#define public_406c93 _public_406c93
#define public_406c98 _public_406c98
#define public_406cb1 _public_406cb1
#define public_406cc8 _public_406cc8

PROC_DECLARE(0x406c50, internal_406c50, public_406c50);
extern "C" NAKED register_t __cdecl internal_406c50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_406c67
        mov dword ptr ds : [esi+0xC], 0xBF800000
        pop esi
        pop ecx
        ret 4
        public_406c67 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_406cc8
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 3
        je public_406c93
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+4], 0
        jne public_406c98
        public_406c93 : nop
        mov byte ptr ss : [esp+4], 1
        public_406c98 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_406cb1
        mov dword ptr ds : [esi+0xC], 0xBF800000
        pop esi
        pop ecx
        ret 4
        public_406cb1 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_406cc8 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x406c50)
    }
}

#undef public_406c67
#undef public_406c93
#undef public_406c98
#undef public_406cb1
#undef public_406cc8
