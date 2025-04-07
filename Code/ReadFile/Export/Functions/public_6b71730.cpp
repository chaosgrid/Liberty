#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71730);

#define public_6b7174d _public_6b7174d
#define public_6b71774 _public_6b71774
#define public_6b7177d _public_6b7177d

PROC_DECLARE(0x6b71730, internal_6b71730, public_6b71730);
extern "C" NAKED register_t __cdecl internal_6b71730()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebx, dword ptr ds : [eax+4]
        add esi, ebx
        cmp esi, ebx
        je public_6b71774
        mov ebp, dword ptr ss : [esp+0x14]
        public_6b7174d : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+0xC]
        add edx, eax
        push edx
        push ebp
        call dword ptr ds : [public_6b79008]
        add esp, 8
        test eax, eax
        je public_6b7177d
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, edx
        mov esi, ecx
        cmp esi, ebx
        jne public_6b7174d
        public_6b71774 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6b7177d : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b71730)
    }
}

#undef public_6b7174d
#undef public_6b71774
#undef public_6b7177d
