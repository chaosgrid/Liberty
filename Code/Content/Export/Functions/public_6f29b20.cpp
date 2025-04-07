#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f29b98 _public_6f29b98
#define public_6f29ba9 _public_6f29ba9
#define public_6f29bc5 _public_6f29bc5
#define public_6f29bdf _public_6f29bdf
#define public_6f29c01 _public_6f29c01
#define public_6f29c09 _public_6f29c09

PROC_DECLARE(0x6f29b20, internal_6f29b20, public_6f29b20);
extern "C" NAKED register_t __cdecl internal_6f29b20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 8
        push edi
        or edi, 0xFFFFFFFF
        sub eax, 0
        je public_6f29bc5
        dec eax
        je public_6f29ba9
        dec eax
        jne public_6f29c09
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_6fd0794
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6fd0798]
        je public_6f29c09
        push esi
        lea esi, ds:[eax+0x10]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6f2e220
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        je public_6f29b98
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f29b98
        mov edx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x1C]
        mov eax, dword ptr ds : [eax]
        pop esi
        jmp public_6f29c01
        public_6f29b98 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        mov eax, dword ptr ds : [eax]
        pop esi
        jmp public_6f29c01
        public_6f29ba9 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6fd07ac
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd07b0]
        jmp public_6f29bdf
        public_6f29bc5 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6fd07c4
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd07c8]
        public_6f29bdf : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_6f29c09
        lea edx, ss:[esp+0x14]
        lea ecx, ss:[esp+8]
        push edx
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x18]
        public_6f29c01 : nop
        cmp eax, dword ptr ds : [edx+0x14]
        je public_6f29c09
        mov edi, dword ptr ds : [eax+0x18]
        public_6f29c09 : nop
        mov eax, edi
        pop edi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f29b20)
    }
}

#undef public_6f29b98
#undef public_6f29ba9
#undef public_6f29bc5
#undef public_6f29bdf
#undef public_6f29c01
#undef public_6f29c09
