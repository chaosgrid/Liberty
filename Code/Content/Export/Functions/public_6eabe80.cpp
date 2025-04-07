#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eabcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eabe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0f80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eabeb1 _public_6eabeb1
#define public_6eabee3 _public_6eabee3
#define public_6eabf05 _public_6eabf05
#define public_6eabf10 _public_6eabf10
#define public_6eabf33 _public_6eabf33

PROC_DECLARE(0x6eabe80, internal_6eabe80, public_6eabe80);
extern "C" NAKED register_t __cdecl internal_6eabe80()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fcee74]
        mov edx, dword ptr ds : [public_6fcee80]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6eabf05
        mov edx, eax
        cmp eax, edx
        jne public_6eabf05
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fcee78]
        cmp edi, eax
        mov esi, edi
        je public_6eabee3
        public_6eabeb1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fcee70
        call public_6eb0cc0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6eabcf0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fcee78]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eabeb1
        mov ecx, dword ptr ds : [public_6fcee74]
        public_6eabee3 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fcee74]
        mov dword ptr ds : [public_6fcee80], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fcee74]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6eabf05 : nop
        cmp eax, ecx
        je public_6eabf33
        lea esp, ss:[esp]
        public_6eabf10 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6eb0f80
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fcee70
        call public_6eb0870
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6eabf10
        public_6eabf33 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eabe80)
    }
}

#undef public_6eabeb1
#undef public_6eabee3
#undef public_6eabf05
#undef public_6eabf10
#undef public_6eabf33
