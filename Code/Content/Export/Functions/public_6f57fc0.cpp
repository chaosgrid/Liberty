#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f57ff1 _public_6f57ff1
#define public_6f58023 _public_6f58023
#define public_6f58045 _public_6f58045
#define public_6f58050 _public_6f58050
#define public_6f58073 _public_6f58073

PROC_DECLARE(0x6f57fc0, internal_6f57fc0, public_6f57fc0);
extern "C" NAKED register_t __cdecl internal_6f57fc0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fd0de0]
        mov edx, dword ptr ds : [public_6fd0dec]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f58045
        mov edx, eax
        cmp eax, edx
        jne public_6f58045
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fd0de4]
        cmp edi, eax
        mov esi, edi
        je public_6f58023
        public_6f57ff1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd0ddc
        call public_6f58ac0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f98760
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd0de4]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f57ff1
        mov ecx, dword ptr ds : [public_6fd0de0]
        public_6f58023 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fd0de0]
        mov dword ptr ds : [public_6fd0dec], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd0de0]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6f58045 : nop
        cmp eax, ecx
        je public_6f58073
        lea esp, ss:[esp]
        public_6f58050 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6f03670
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0ddc
        call public_6f30b60
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6f58050
        public_6f58073 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f57fc0)
    }
}

#undef public_6f57ff1
#undef public_6f58023
#undef public_6f58045
#undef public_6f58050
#undef public_6f58073
