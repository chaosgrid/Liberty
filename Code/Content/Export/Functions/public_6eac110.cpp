#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6eac13d _public_6eac13d
#define public_6eac145 _public_6eac145
#define public_6eac158 _public_6eac158

PROC_DECLARE(0x6eac110, internal_6eac110, public_6eac110);
extern "C" NAKED register_t __cdecl internal_6eac110()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x70]
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6eac13d
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6eac13d
        lea eax, ss:[esp+0x14]
        jmp public_6eac145
        public_6eac13d : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6eac145 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6eac158
        add eax, 0x10
        pop ecx
        ret 4
        public_6eac158 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eac110)
    }
}

#undef public_6eac13d
#undef public_6eac145
#undef public_6eac158
