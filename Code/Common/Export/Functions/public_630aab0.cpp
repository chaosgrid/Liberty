#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630aac5 _public_630aac5
#define public_630aace _public_630aace
#define public_630aad0 _public_630aad0
#define public_630aae1 _public_630aae1
#define public_630aaf7 _public_630aaf7
#define public_630aafe _public_630aafe
#define public_630ab2b _public_630ab2b
#define public_630ab30 _public_630ab30
#define public_630ab46 _public_630ab46
#define public_630ab4a _public_630ab4a
#define public_630ab54 _public_630ab54
#define public_630ab6a _public_630ab6a
#define public_630ab7a _public_630ab7a
#define public_630ab84 _public_630ab84

PROC_DECLARE(0x630aab0, internal_630aab0, public_630aab0);
extern "C" NAKED register_t __cdecl internal_630aab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        or ebx, 0xFFFFFFFF
        xor edi, edi
        xor esi, esi
        xor ecx, ecx
        public_630aac5 : nop
        test ecx, ecx
        jne public_630aace
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_630aad0
        public_630aace : nop
        mov ecx, dword ptr ds : [ecx]
        public_630aad0 : nop
        test ecx, ecx
        je public_630aae1
        mov edx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edx], eax
        jne public_630aac5
        mov edi, edx
        mov esi, ecx
        jmp public_630aac5
        public_630aae1 : nop
        test edi, edi
        je public_630ab84
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 0xFFFFFFFF
        je public_630aaf7
        sub dword ptr ds : [edi+4], eax
        jmp public_630aafe
        public_630aaf7 : nop
        mov dword ptr ds : [edi+4], 0
        public_630aafe : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_630ab7a
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_62fd570
        xor edi, edi
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp eax, esi
        jne public_630ab30
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ss : [ebp+4], eax
        jne public_630ab2b
        mov dword ptr ss : [ebp+8], edi
        jmp public_630ab54
        public_630ab2b : nop
        mov dword ptr ds : [eax+4], edi
        jmp public_630ab54
        public_630ab30 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        jne public_630ab4a
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        mov dword ptr ss : [ebp+8], eax
        jne public_630ab46
        mov dword ptr ss : [ebp+4], edi
        jmp public_630ab54
        public_630ab46 : nop
        mov dword ptr ds : [eax], edi
        jmp public_630ab54
        public_630ab4a : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_630ab54 : nop
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_630ab6a
        mov ecx, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ss : [ebp+0x10], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_630ab6a : nop
        push esi
        call public_6391d5a
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_630ab7a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_630ab84 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630aab0)
    }
}

#undef public_630aac5
#undef public_630aace
#undef public_630aad0
#undef public_630aae1
#undef public_630aaf7
#undef public_630aafe
#undef public_630ab2b
#undef public_630ab30
#undef public_630ab46
#undef public_630ab4a
#undef public_630ab54
#undef public_630ab6a
#undef public_630ab7a
#undef public_630ab84
