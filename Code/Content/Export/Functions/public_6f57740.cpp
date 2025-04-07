#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);

#define public_6f57777 _public_6f57777
#define public_6f57786 _public_6f57786
#define public_6f57790 _public_6f57790
#define public_6f577b9 _public_6f577b9

PROC_DECLARE(0x6f57740, internal_6f57740, public_6f57740);
extern "C" NAKED register_t __cdecl internal_6f57740()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb31b4]
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3408]
        mov eax, dword ptr ss : [ebp+0x15C]
        mov esi, dword ptr ds : [eax]
        lea edi, ss:[ebp+0x158]
        add esp, 8
        cmp esi, eax
        je public_6f57786
        public_6f57777 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6f57777
        public_6f57786 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6f577b9
        nop 
        public_6f57790 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f57790
        mov ecx, dword ptr ss : [ebp+0x15C]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x164], ecx
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_6f577b9 : nop
        mov edx, dword ptr ss : [ebp+0x15C]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x164], edx
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f57740)
    }
}

#undef public_6f57777
#undef public_6f57786
#undef public_6f57790
#undef public_6f577b9
