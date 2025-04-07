#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801080);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803460);
CLANG_FORWARD_PROC_SYMBOL(public_68035f0);

#define public_68010c0 _public_68010c0
#define public_68010d3 _public_68010d3
#define public_68010eb _public_68010eb
#define public_68010fe _public_68010fe
#define public_6801111 _public_6801111

PROC_DECLARE(0x6801080, internal_6801080, public_6801080);
extern "C" NAKED register_t __cdecl internal_6801080()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        mov dword ptr ds : [edi], offset public_680c0f0
        mov dword ptr ds : [edi+4], offset public_680c0cc
        mov dword ptr ds : [edi+8], offset public_680c0bc
        call public_68026d0
        mov esi, dword ptr ds : [edi+0x10]
        add esp, 4
        test esi, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0xC], ebx
        je public_68010eb
        push ebp
        mov ebp, dword ptr ds : [public_680c018]
        lea ebx, ds:[ebx]
        public_68010c0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        mov ebx, dword ptr ds : [esi]
        je public_68010d3
        push eax
        call public_68035f0
        add esp, 4
        public_68010d3 : nop
        push esi
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        call ebp
        add esp, 4
        test ebx, ebx
        mov esi, ebx
        jne public_68010c0
        mov ebx, dword ptr ss : [esp+0x10]
        pop ebp
        public_68010eb : nop
        call public_6803460
        cmp ebx, dword ptr ds : [edi+0xC]
        je public_68010fe
        push ebx
        call public_68026d0
        add esp, 4
        public_68010fe : nop
        mov eax, dword ptr ds : [edi+0x14]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_6801111
        push eax
        call public_68035f0
        add esp, 4
        public_6801111 : nop
        mov dword ptr ds : [edi+0x14], esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6801080)
    }
}

#undef public_68010c0
#undef public_68010d3
#undef public_68010eb
#undef public_68010fe
#undef public_6801111
