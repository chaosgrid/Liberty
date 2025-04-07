#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57d10);

#define public_6d57d23 _public_6d57d23
#define public_6d57d3e _public_6d57d3e
#define public_6d57d42 _public_6d57d42
#define public_6d57d47 _public_6d57d47
#define public_6d57d79 _public_6d57d79

PROC_DECLARE(0x6d57d10, internal_6d57d10, public_6d57d10);
extern "C" NAKED register_t __cdecl internal_6d57d10()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57d47
        public_6d57d23 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d57d3e
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d57d42
        public_6d57d3e : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6d57d42 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d57d23
        public_6d57d47 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_6d57d79
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 0xC
        push ebx
        push edx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d57d79
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6d57d79 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d57d10)
    }
}

#undef public_6d57d23
#undef public_6d57d3e
#undef public_6d57d42
#undef public_6d57d47
#undef public_6d57d79
