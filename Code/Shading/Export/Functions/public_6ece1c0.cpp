#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ece1e0 _public_6ece1e0
#define public_6ece203 _public_6ece203
#define public_6ece213 _public_6ece213
#define public_6ece223 _public_6ece223
#define public_6ece240 _public_6ece240

PROC_DECLARE(0x6ece1c0, internal_6ece1c0, public_6ece1c0);
extern "C" NAKED register_t __cdecl internal_6ece1c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6ece240
        push ebx
        mov ebx, dword ptr ds : [public_6ed1054]
        push ebp
        push esi
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_6ece1e0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_6ece203
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        public_6ece203 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        je public_6ece213
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0x10], ebp
        public_6ece213 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebp
        je public_6ece223
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0x14], ebp
        public_6ece223 : nop
        push esi
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        cmp edi, dword ptr ss : [esp+0x20]
        jne public_6ece1e0
        pop esi
        pop ebp
        pop ebx
        public_6ece240 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ece1c0)
    }
}

#undef public_6ece1e0
#undef public_6ece203
#undef public_6ece213
#undef public_6ece223
#undef public_6ece240
