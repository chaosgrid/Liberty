#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d43f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d44080);

#define public_6d43f84 _public_6d43f84
#define public_6d43f96 _public_6d43f96
#define public_6d43fa6 _public_6d43fa6
#define public_6d44013 _public_6d44013
#define public_6d4401d _public_6d4401d

PROC_DECLARE(0x6d43f70, internal_6d43f70, public_6d43f70);
extern "C" NAKED register_t __cdecl internal_6d43f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f62c]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        cmp ecx, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        je public_6d43f96
        public_6d43f84 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edx+0x18], ebx
        je public_6d4401d
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        jne public_6d43f84
        public_6d43f96 : nop
        mov edx, dword ptr ds : [public_6d8f644]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d4401d
        public_6d43fa6 : nop
        cmp dword ptr ds : [ecx+0x18], ebx
        jne public_6d44013
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        mov ecx, offset public_6d8f628
        call public_6cfc340
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d06720
        mov eax, dword ptr ds : [public_6d8f630]
        mov edx, dword ptr ss : [esp+0x1C]
        inc eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ds : [public_6d8f630], eax
        mov eax, dword ptr ds : [edx+0x18]
        lea edx, ss:[esp+0x18]
        push 0xC
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        call public_6d44080
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_6d8f62c]
        mov edx, dword ptr ds : [public_6d8f644]
        add esp, 0x14
        public_6d44013 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d43fa6
        public_6d4401d : nop
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d43f70)
    }
}

#undef public_6d43f84
#undef public_6d43f96
#undef public_6d43fa6
#undef public_6d44013
#undef public_6d4401d
