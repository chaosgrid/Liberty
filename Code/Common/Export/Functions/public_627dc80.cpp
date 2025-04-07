#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_627ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_627f370);
CLANG_FORWARD_PROC_SYMBOL(public_627f600);
CLANG_FORWARD_PROC_SYMBOL(public_627f620);
CLANG_FORWARD_PROC_SYMBOL(public_627f750);
CLANG_FORWARD_PROC_SYMBOL(public_627f780);
CLANG_FORWARD_PROC_SYMBOL(public_627f900);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627dcb0 _public_627dcb0
#define public_627dcc5 _public_627dcc5
#define public_627dcd0 _public_627dcd0
#define public_627dcda _public_627dcda
#define public_627dce1 _public_627dce1
#define public_627dce5 _public_627dce5
#define public_627dd10 _public_627dd10
#define public_627dd44 _public_627dd44
#define public_627dd66 _public_627dd66
#define public_627dd70 _public_627dd70
#define public_627dd91 _public_627dd91

PROC_DECLARE(0x627dc80, internal_627dc80, public_627dc80);
extern "C" NAKED register_t __cdecl internal_627dc80()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_63fbff8
        call public_627f780
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_63fbff8
        mov edi, eax
        call public_627f750
        mov esi, eax
        cmp esi, edi
        je public_627dce5
        nop 
        lea esp, ss:[esp]
        public_627dcb0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_627dcc5
        push ecx
        call public_627f600
        add esp, 4
        jmp public_627dce1
        public_627dcc5 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_627dcda
        lea ecx, ds:[ecx]
        public_627dcd0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_627dcd0
        public_627dcda : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_627dce1
        mov eax, ecx
        public_627dce1 : nop
        cmp eax, edi
        jne public_627dcb0
        public_627dce5 : nop
        mov eax, dword ptr ds : [public_63fc008]
        test eax, eax
        mov dword ptr ss : [esp+8], esi
        je public_627dd66
        mov ecx, dword ptr ds : [public_63fbffc]
        cmp esi, dword ptr ds : [ecx]
        jne public_627dd66
        cmp edi, ecx
        jne public_627dd66
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_63fc000]
        cmp edi, eax
        mov esi, edi
        je public_627dd44
        mov edi, edi
        public_627dd10 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, offset public_63fbff8
        call public_627f370
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_627f900
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fc000]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_627dd10
        mov ecx, dword ptr ds : [public_63fbffc]
        public_627dd44 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_63fbffc]
        mov dword ptr ds : [public_63fc008], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fbffc]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_627dd66 : nop
        cmp esi, edi
        je public_627dd91
        lea ebx, ds:[ebx]
        public_627dd70 : nop
        lea ecx, ss:[esp+8]
        call public_627f620
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fbff8
        call public_627ecf0
        mov esi, dword ptr ss : [esp+8]
        cmp esi, edi
        jne public_627dd70
        public_627dd91 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x627dc80)
    }
}

#undef public_627dcb0
#undef public_627dcc5
#undef public_627dcd0
#undef public_627dcda
#undef public_627dce1
#undef public_627dce5
#undef public_627dd10
#undef public_627dd44
#undef public_627dd66
#undef public_627dd70
#undef public_627dd91
