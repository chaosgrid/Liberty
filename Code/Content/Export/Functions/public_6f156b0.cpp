#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f156e0 _public_6f156e0
#define public_6f156e8 _public_6f156e8
#define public_6f156fd _public_6f156fd

PROC_DECLARE(0x6f156b0, internal_6f156b0, public_6f156b0);
extern "C" NAKED register_t __cdecl internal_6f156b0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0xA4]
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f156e0
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f156e0
        lea eax, ss:[esp+0x14]
        jmp public_6f156e8
        public_6f156e0 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f156e8 : nop
        mov ecx, dword ptr ds : [edi+0xA8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        jne public_6f156fd
        xor eax, eax
        pop ecx
        ret 4
        public_6f156fd : nop
        mov eax, dword ptr ds : [eax+0x10]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f156b0)
    }
}

#undef public_6f156e0
#undef public_6f156e8
#undef public_6f156fd
