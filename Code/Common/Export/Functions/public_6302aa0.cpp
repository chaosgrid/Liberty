#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_6302d50);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6302ad1 _public_6302ad1
#define public_6302afb _public_6302afb
#define public_6302b1d _public_6302b1d
#define public_6302b21 _public_6302b21
#define public_6302b44 _public_6302b44

PROC_DECLARE(0x6302aa0, internal_6302aa0, public_6302aa0);
extern "C" NAKED register_t __cdecl internal_6302aa0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_63fcc5c]
        mov edx, dword ptr ds : [public_63fcc68]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6302b1d
        mov edx, eax
        cmp eax, edx
        jne public_6302b1d
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_63fcc60]
        cmp edi, eax
        mov esi, edi
        je public_6302afb
        public_6302ad1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_63fcc58
        call public_6302d50
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fcc60]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6302ad1
        mov ecx, dword ptr ds : [public_63fcc5c]
        public_6302afb : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_63fcc5c]
        mov dword ptr ds : [public_63fcc68], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fcc5c]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6302b1d : nop
        cmp eax, ecx
        je public_6302b44
        public_6302b21 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_63429f0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fcc58
        call public_62be400
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6302b21
        public_6302b44 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6302aa0)
    }
}

#undef public_6302ad1
#undef public_6302afb
#undef public_6302b1d
#undef public_6302b21
#undef public_6302b44
