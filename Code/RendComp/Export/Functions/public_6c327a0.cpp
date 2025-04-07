#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34380);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c327d7 _public_6c327d7
#define public_6c327df _public_6c327df
#define public_6c32800 _public_6c32800
#define public_6c32819 _public_6c32819
#define public_6c32829 _public_6c32829

PROC_DECLARE(0x6c327a0, internal_6c327a0, public_6c327a0);
extern "C" NAKED register_t __cdecl internal_6c327a0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+8]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_6c34ab0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6c327d7
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6c327d7
        lea eax, ss:[esp+0x18]
        jmp public_6c327df
        public_6c327d7 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6c327df : nop
        mov ebp, dword ptr ds : [eax]
        cmp ebp, dword ptr ds : [edi+0xC]
        je public_6c32829
        lea edi, ss:[ebp+0x10]
        push ebx
        mov ecx, edi
        call public_6c2f7d0
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle public_6c32819
        lea esp, ss:[esp]
        public_6c32800 : nop
        push esi
        mov ecx, edi
        call public_6c31ff0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x14]
        inc esi
        cmp esi, ebx
        jl public_6c32800
        public_6c32819 : nop
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_6c34380
        pop ebx
        public_6c32829 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6c327a0)
    }
}

#undef public_6c327d7
#undef public_6c327df
#undef public_6c32800
#undef public_6c32819
#undef public_6c32829
