#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6820);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6940);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf6860 _public_6cf6860
#define public_6cf6877 _public_6cf6877
#define public_6cf6889 _public_6cf6889
#define public_6cf688b _public_6cf688b
#define public_6cf689d _public_6cf689d
#define public_6cf68c1 _public_6cf68c1
#define public_6cf68d8 _public_6cf68d8
#define public_6cf6900 _public_6cf6900
#define public_6cf691a _public_6cf691a
#define public_6cf6929 _public_6cf6929

PROC_DECLARE(0x6cf6820, internal_6cf6820, public_6cf6820);
extern "C" NAKED register_t __cdecl internal_6cf6820()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6cf6877
        lea esp, ss:[esp]
        public_6cf6860 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+0xC]
        je public_6cf689d
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6cf6860
        public_6cf6877 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cf6889
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf688b
        public_6cf6889 : nop
        xor eax, eax
        public_6cf688b : nop
        mov edx, dword ptr ds : [edi+0x38]
        cmp dword ptr ds : [eax+0xB4], edx
        jne public_6cf6900
        lea esi, ss:[esp+0xC]
        push esi
        jmp public_6cf691a
        public_6cf689d : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+0x2F0]
        test al, al
        je public_6cf68c1
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call dword ptr ds : [edx+0xDC]
        public_6cf68c1 : nop
        mov ebp, dword ptr ds : [esi+8]
        test ebp, ebp
        je public_6cf68d8
        mov ecx, ebp
        call public_6cf6940
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6cf68d8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        public_6cf6900 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x154]
        test eax, 0xFDFF
        je public_6cf6929
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ds : [edi+0x38]
        public_6cf691a : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xDC]
        public_6cf6929 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6cf6820)
    }
}

#undef public_6cf6860
#undef public_6cf6877
#undef public_6cf6889
#undef public_6cf688b
#undef public_6cf689d
#undef public_6cf68c1
#undef public_6cf68d8
#undef public_6cf6900
#undef public_6cf691a
#undef public_6cf6929
