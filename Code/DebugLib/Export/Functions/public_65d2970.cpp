#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d298d _public_65d298d
#define public_65d29c8 _public_65d29c8

PROC_DECLARE(0x65d2970, internal_65d2970, public_65d2970);
extern "C" NAKED register_t __cdecl internal_65d2970()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65d298d
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_65d298d : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], 0
        push edi
        call public_65d6f71
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        je public_65d29c8
        mov dword ptr ds : [esi+8], edi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        xor eax, eax
        rep movsb
        pop edi
        pop esi
        ret 0xC
        public_65d29c8 : nop
        pop edi
        mov eax, 0xFFFFFFFC
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65d2970)
    }
}

#undef public_65d298d
#undef public_65d29c8
