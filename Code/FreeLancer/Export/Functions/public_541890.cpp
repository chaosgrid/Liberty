#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_541890);

#define public_5418d0 _public_5418d0
#define public_5418ef _public_5418ef
#define public_5418f1 _public_5418f1
#define public_541902 _public_541902
#define public_541904 _public_541904
#define public_541927 _public_541927
#define public_541946 _public_541946
#define public_541948 _public_541948
#define public_54195d _public_54195d
#define public_541974 _public_541974
#define public_54198c _public_54198c
#define public_54198e _public_54198e
#define public_541990 _public_541990

PROC_DECLARE(0x541890, internal_541890, public_541890);
extern "C" NAKED register_t __cdecl internal_541890()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        xor eax, eax
        test ebx, 0x3FFFFFFF
        push edi
        je public_541990
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        test eax, eax
        jne public_54195d
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 1
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541904
        mov edi, edi
        public_5418d0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_5418ef
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5418f1
        public_5418ef : nop
        xor eax, eax
        public_5418f1 : nop
        cmp dword ptr ds : [eax+0x104], ebx
        je public_541902
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_5418d0
        jmp public_541904
        public_541902 : nop
        mov edi, esi
        public_541904 : nop
        test edi, edi
        jne public_54198e
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], 2
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54198e
        public_541927 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_541946
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_541948
        public_541946 : nop
        xor eax, eax
        public_541948 : nop
        cmp dword ptr ds : [eax+0x104], ebx
        je public_54198c
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541927
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_54195d : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54198e
        public_541974 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        je public_54198c
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541974
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_54198c : nop
        mov edi, esi
        public_54198e : nop
        mov eax, edi
        public_541990 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x541890)
    }
}

#undef public_5418d0
#undef public_5418ef
#undef public_5418f1
#undef public_541902
#undef public_541904
#undef public_541927
#undef public_541946
#undef public_541948
#undef public_54195d
#undef public_541974
#undef public_54198c
#undef public_54198e
#undef public_541990
