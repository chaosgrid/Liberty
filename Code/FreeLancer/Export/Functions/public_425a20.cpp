#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420800);
CLANG_FORWARD_PROC_SYMBOL(public_420be0);
CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_426fc0);
CLANG_FORWARD_PROC_SYMBOL(public_427710);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_425a30 _public_425a30
#define public_425a4c _public_425a4c
#define public_425a61 _public_425a61
#define public_425a70 _public_425a70
#define public_425a7a _public_425a7a
#define public_425a7f _public_425a7f
#define public_425a81 _public_425a81
#define public_425a86 _public_425a86
#define public_425aef _public_425aef
#define public_425af3 _public_425af3
#define public_425b24 _public_425b24

PROC_DECLARE(0x425a20, internal_425a20, public_425a20);
extern "C" NAKED register_t __cdecl internal_425a20()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_425a86
        public_425a30 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_425a4c
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0x28], 0
        public_425a4c : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x59]
        test cl, cl
        jne public_425a61
        push eax
        call public_427710
        add esp, 4
        jmp public_425a7f
        public_425a61 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_425a7a
        lea esp, ss:[esp]
        public_425a70 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_425a70
        public_425a7a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_425a81
        public_425a7f : nop
        mov esi, eax
        public_425a81 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_425a30
        public_425a86 : nop
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], ecx
        je public_425aef
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [eax]
        jne public_425aef
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_425aef
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_420be0
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x14], edx
        pop edi
        pop esi
        add esp, 0x10
        ret 
        public_425aef : nop
        cmp ecx, esi
        je public_425b24
        public_425af3 : nop
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_426fc0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_420800
        cmp dword ptr ss : [esp+8], esi
        jne public_425af3
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x14], eax
        pop edi
        pop esi
        add esp, 0x10
        ret 
        public_425b24 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x14], ecx
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x425a20)
    }
}

#undef public_425a30
#undef public_425a4c
#undef public_425a61
#undef public_425a70
#undef public_425a7a
#undef public_425a7f
#undef public_425a81
#undef public_425a86
#undef public_425aef
#undef public_425af3
#undef public_425b24
