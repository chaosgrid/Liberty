#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8e20);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_6322b40);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_633bd80);
CLANG_FORWARD_PROC_SYMBOL(public_633e970);
CLANG_FORWARD_PROC_SYMBOL(public_633ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6340460);
CLANG_FORWARD_PROC_SYMBOL(public_63408b0);
CLANG_FORWARD_PROC_SYMBOL(public_6340b70);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_633be29 _public_633be29
#define public_633be30 _public_633be30
#define public_633be58 _public_633be58
#define public_633bebd _public_633bebd
#define public_633bec1 _public_633bec1
#define public_633bee4 _public_633bee4
#define public_633bf04 _public_633bf04

PROC_DECLARE(0x633bd80, internal_633bd80, public_633bd80);
extern "C" NAKED register_t __cdecl internal_633bd80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a9bc]
        sub esp, 0x10
        dec eax
        mov dword ptr ds : [public_658a9bc], eax
        jne public_633bf04
        mov eax, dword ptr ds : [public_658a82c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        push ecx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_658a828
        call public_633e970
        mov eax, dword ptr ds : [public_658a840]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_658a83c
        call public_633ed10
        mov eax, dword ptr ds : [public_658a854]
        mov edx, dword ptr ds : [public_658a860]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov esi, eax
        mov dword ptr ss : [esp+8], ecx
        je public_633be29
        mov edx, ecx
        cmp ecx, edx
        jne public_633be29
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, offset public_658a850
        call public_63408b0
        mov eax, dword ptr ds : [public_658a854]
        mov ecx, dword ptr ds : [public_658a858]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_658a854]
        mov dword ptr ds : [public_658a860], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_658a854]
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_658a850
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_633be58
        public_633be29 : nop
        cmp ecx, eax
        je public_633be58
        lea ecx, ds:[ecx]
        public_633be30 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6340b70
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_658a850
        call public_6340460
        cmp dword ptr ss : [esp+8], esi
        jne public_633be30
        public_633be58 : nop
        mov ecx, dword ptr ds : [public_658a868]
        mov edx, dword ptr ds : [public_658a874]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_633bebd
        mov edx, eax
        cmp eax, edx
        jne public_633bebd
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, offset public_658a864
        call public_6322b40
        mov ecx, dword ptr ds : [public_658a868]
        mov edx, dword ptr ds : [public_658a86c]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [public_658a868]
        mov dword ptr ds : [public_658a874], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_658a868]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_658a864
        call public_632c410
        jmp public_633bee4
        public_633bebd : nop
        cmp eax, ecx
        je public_633bee4
        public_633bec1 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_63429f0
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_658a864
        call public_62be400
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_633bec1
        public_633bee4 : nop
        call public_62b8e20
        mov eax, dword ptr ds : [public_658a9b4]
        test eax, eax
        pop edi
        pop esi
        je public_633bf04
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_658a9b4], 0
        public_633bf04 : nop
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x633bd80)
    }
}

#undef public_633be29
#undef public_633be30
#undef public_633be58
#undef public_633bebd
#undef public_633bec1
#undef public_633bee4
#undef public_633bf04
