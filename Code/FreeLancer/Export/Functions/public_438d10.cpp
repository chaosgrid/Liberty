#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438d10);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_438d22 _public_438d22
#define public_438d49 _public_438d49
#define public_438d53 _public_438d53
#define public_438d9a _public_438d9a

PROC_DECLARE(0x438d10, internal_438d10, public_438d10);
extern "C" NAKED register_t __cdecl internal_438d10()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_438d49
        public_438d22 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x14]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x14], ecx
        jne public_438d22
        public_438d49 : nop
        mov ebp, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_438d9a
        public_438d53 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_5afe80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x14]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x14], ecx
        jne public_438d53
        public_438d9a : nop
        mov edx, dword ptr ds : [ebx+0x10]
        push edx
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+0x10], eax
        mov dword ptr ds : [ebx+0x14], eax
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x438d10)
    }
}

#undef public_438d22
#undef public_438d49
#undef public_438d53
#undef public_438d9a
