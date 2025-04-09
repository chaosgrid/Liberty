#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_562930);
CLANG_FORWARD_PROC_SYMBOL(public_562fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_563705 _public_563705
#define public_563717 _public_563717
#define public_56372d _public_56372d
#define public_563758 _public_563758
#define public_56376a _public_56376a
#define public_563780 _public_563780
#define public_563793 _public_563793

PROC_DECLARE(0x5636d0, internal_5636d0, public_5636d0);
extern "C" NAKED register_t __cdecl internal_5636d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0x26
        push edi
        jne public_563780
        cmp eax, dword ptr ds : [esi+0x32C]
        jne public_56372d
        mov ecx, esi
        call public_562fd0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_563717
        public_563705 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_563705
        public_563717 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_56372d : nop
        cmp eax, dword ptr ds : [esi+0x330]
        jne public_563793
        lea ecx, ds:[esi+0x378]
        push ecx
        mov ecx, dword ptr ds : [esi+0x374]
        call public_562930
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_56376a
        public_563758 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_563758
        public_56376a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_563780 : nop
        cmp ecx, 0x30
        jne public_563793
        mov ecx, esi
        call public_562fd0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_563793 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_5a13c0
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5636d0)
    }
}

#undef public_563705
#undef public_563717
#undef public_56372d
#undef public_563758
#undef public_56376a
#undef public_563780
#undef public_563793
