#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_483d40);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_483de2 _public_483de2

PROC_DECLARE(0x483d40, internal_483d40, public_483d40);
extern "C" NAKED register_t __cdecl internal_483d40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x978], 2
        push edi
        jne public_483de2
        mov eax, dword ptr ds : [esi+0x974]
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_5c6088]
        mov dword ptr ds : [esi+0x348], 0
        mov ecx, dword ptr ds : [eax+0x32C]
        push edx
        mov dword ptr ds : [esi+0x32C], ecx
        call ebx
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_483de2
        mov eax, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x97C], eax
        mov eax, dword ptr ds : [edi+0x90]
        push eax
        call ebx
        add esp, 4
        mov ebx, eax
        mov ecx, dword ptr ds : [ebx+0x54]
        push 0
        mov dword ptr ds : [esi+0x348], ecx
        add edi, 0x94
        push edi
        lea ecx, ds:[esi+0x330]
        call public_4c62b0
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        test eax, eax
        je public_483de2
        mov ebx, dword ptr ds : [ebx+0x48]
        push ebx
        mov ecx, eax
        call public_438060
        call public_5b7ec0
        mov dword ptr ds : [esi+0x9F8], eax
        public_483de2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x483d40)
    }
}

#undef public_483de2
