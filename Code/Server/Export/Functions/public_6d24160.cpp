#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d24160);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d24173 _public_6d24173
#define public_6d24188 _public_6d24188
#define public_6d241a8 _public_6d241a8
#define public_6d241bd _public_6d241bd

PROC_DECLARE(0x6d24160, internal_6d24160, public_6d24160);
extern "C" NAKED register_t __cdecl internal_6d24160()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        push edi
        lea edi, ss:[ebp+0x48]
        je public_6d24188
        public_6d24173 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebx
        jne public_6d24173
        public_6d24188 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebx, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [ebx]
        lea edi, ss:[ebp+0x3C]
        add esp, 4
        cmp esi, ebx
        je public_6d241bd
        public_6d241a8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebx
        jne public_6d241a8
        public_6d241bd : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov ecx, dword ptr ss : [ebp+0x30]
        push ecx
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [ebp+0x34], esi
        mov dword ptr ss : [ebp+0x38], esi
        pop esi
        mov dword ptr ss : [ebp], offset public_6d68b9c
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d24160)
    }
}

#undef public_6d24173
#undef public_6d24188
#undef public_6d241a8
#undef public_6d241bd
