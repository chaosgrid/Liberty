#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614580);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_66145b3 _public_66145b3
#define public_66145bb _public_66145bb
#define public_66145d6 _public_66145d6

PROC_DECLARE(0x6614580, internal_6614580, public_6614580);
extern "C" NAKED register_t __cdecl internal_6614580()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        xor bl, bl
        lea esi, ds:[edi+0x14]
        push eax
        mov ecx, esi
        call public_6627a70
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, esi
        je public_66145b3
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jl public_66145b3
        lea eax, ss:[esp+0xC]
        jmp public_66145bb
        public_66145b3 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_66145bb : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x18]
        cmp eax, ecx
        je public_66145d6
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 0x10
        pop edi
        pop esi
        mov dword ptr ds : [edx], eax
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_66145d6 : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6614580)
    }
}

#undef public_66145b3
#undef public_66145bb
#undef public_66145d6
