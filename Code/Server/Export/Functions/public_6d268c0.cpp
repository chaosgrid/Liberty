#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d268c0);

#define public_6d26905 _public_6d26905
#define public_6d2691c _public_6d2691c
#define public_6d26925 _public_6d26925
#define public_6d26952 _public_6d26952
#define public_6d26969 _public_6d26969
#define public_6d26972 _public_6d26972
#define public_6d2699b _public_6d2699b
#define public_6d269c0 _public_6d269c0

PROC_DECLARE(0x6d268c0, internal_6d268c0, public_6d268c0);
extern "C" NAKED register_t __cdecl internal_6d268c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0x8001
        cmp eax, 0x8000
        push esi
        ja public_6d2699b
        je public_6d26952
        sub eax, 0
        je public_6d26905
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x10
        call public_6d1baa0
        test eax, eax
        je public_6d269c0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d69274
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26905 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d2691c
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x10
        cmp edx, eax
        jbe public_6d26925
        public_6d2691c : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26925 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+ecx+8]
        add edx, 0x10
        test eax, eax
        mov dword ptr ds : [ecx+4], edx
        je public_6d269c0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d6924c
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26952 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d26969
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x10
        cmp edx, eax
        jbe public_6d26972
        public_6d26969 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26972 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+ecx+8]
        add edx, 0x10
        test eax, eax
        mov dword ptr ds : [ecx+4], edx
        je public_6d269c0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d69224
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d2699b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x10
        call public_6d1baa0
        test eax, eax
        je public_6d269c0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6d691fc
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d269c0 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d268c0)
    }
}

#undef public_6d26905
#undef public_6d2691c
#undef public_6d26925
#undef public_6d26952
#undef public_6d26969
#undef public_6d26972
#undef public_6d2699b
#undef public_6d269c0
