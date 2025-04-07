#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d30ce7);

#define public_6d30cfe _public_6d30cfe
#define public_6d30d12 _public_6d30d12
#define public_6d30d76 _public_6d30d76
#define public_6d30d7b _public_6d30d7b
#define public_6d30d82 _public_6d30d82

PROC_DECLARE(0x6d30ce7, internal_6d30ce7, public_6d30ce7);
extern "C" NAKED register_t __cdecl internal_6d30ce7()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6d30cfe
        cmp dword ptr ds : [ebx+0x38], 0
        je public_6d30cfe
        push eax
        call public_6d2f249
        pop ecx
        public_6d30cfe : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d30d12
        cmp dword ptr ds : [ebx+0x3C], 0
        je public_6d30d12
        push eax
        call public_6d2f249
        pop ecx
        public_6d30d12 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        mov dword ptr ds : [ebx+4], ecx
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [ebx+8], ecx
        push 6
        lea edx, ds:[ebx+0x18]
        lea esi, ds:[eax+0x28]
        pop ecx
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x30], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx+0x34], eax
        mov eax, dword ptr ds : [ebx]
        cmp eax, 0x31545844
        pop edi
        pop esi
        je public_6d30d7b
        cmp eax, 0x32545844
        je public_6d30d7b
        cmp eax, 0x32595559
        je public_6d30d76
        cmp eax, 0x33545844
        je public_6d30d7b
        cmp eax, 0x34545844
        je public_6d30d7b
        cmp eax, 0x35545844
        je public_6d30d7b
        cmp eax, 0x59565955
        jne public_6d30d82
        public_6d30d76 : nop
        and dword ptr ds : [edx], 0xFFFFFFFE
        jmp public_6d30d82
        public_6d30d7b : nop
        and dword ptr ds : [edx], 0xFFFFFFFC
        and dword ptr ds : [ebx+0x1C], 0xFFFFFFFC
        public_6d30d82 : nop
        mov eax, dword ptr ds : [ebx+0x20]
        sub eax, dword ptr ds : [edx]
        and dword ptr ds : [ebx+0x38], 0
        and dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+0x24]
        sub eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ds : [ebx+0x2C]
        sub eax, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [ebx+0x14], eax
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d30ce7)
    }
}

#undef public_6d30cfe
#undef public_6d30d12
#undef public_6d30d76
#undef public_6d30d7b
#undef public_6d30d82
