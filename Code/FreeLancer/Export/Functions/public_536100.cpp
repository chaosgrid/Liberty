#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_536100);

#define public_536113 _public_536113
#define public_53612c _public_53612c
#define public_536133 _public_536133
#define public_536142 _public_536142
#define public_536155 _public_536155
#define public_536160 _public_536160

PROC_DECLARE(0x536100, internal_536100, public_536100);
extern "C" NAKED register_t __cdecl internal_536100()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_536160
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_536133
        public_536113 : nop
        lea eax, ds:[esi+8]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        je public_53612c
        push 1
        mov ecx, eax
        call public_40e960
        public_53612c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x24]
        jne public_536113
        public_536133 : nop
        mov esi, dword ptr ds : [edi+0x44]
        cmp esi, dword ptr ds : [edi+0x48]
        je public_536160
        push ebx
        mov ebx, dword ptr ds : [public_5c621c]
        public_536142 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_536155
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_536155 : nop
        mov eax, dword ptr ds : [edi+0x48]
        add esi, 4
        cmp esi, eax
        jne public_536142
        pop ebx
        public_536160 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x536100)
    }
}

#undef public_536113
#undef public_53612c
#undef public_536133
#undef public_536142
#undef public_536155
#undef public_536160
