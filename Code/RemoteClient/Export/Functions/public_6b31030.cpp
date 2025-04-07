#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b31330);
CLANG_FORWARD_PROC_SYMBOL(public_6b31f10);
CLANG_FORWARD_PROC_SYMBOL(public_6b320f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b32200);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b31074 _public_6b31074
#define public_6b310ab _public_6b310ab
#define public_6b310c2 _public_6b310c2
#define public_6b310f6 _public_6b310f6
#define public_6b3110f _public_6b3110f
#define public_6b31114 _public_6b31114
#define public_6b31146 _public_6b31146
#define public_6b3115d _public_6b3115d
#define public_6b31191 _public_6b31191
#define public_6b311aa _public_6b311aa
#define public_6b311af _public_6b311af
#define public_6b311e1 _public_6b311e1
#define public_6b311f8 _public_6b311f8
#define public_6b31235 _public_6b31235
#define public_6b31252 _public_6b31252
#define public_6b312b8 _public_6b312b8
#define public_6b312d3 _public_6b312d3
#define public_6b31309 _public_6b31309
#define public_6b31321 _public_6b31321

PROC_DECLARE(0x6b31030, internal_6b31030, public_6b31030);
extern "C" NAKED register_t __cdecl internal_6b31030()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov dword ptr ss : [esp+0x10], ebp
        call dword ptr ds : [public_6b6b11c]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6b310c2
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b310ab
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6b310ab
        public_6b31074 : nop
        call public_6b31f10
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b310ab
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6b31074
        public_6b310ab : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_6b310c2
        mov ecx, esi
        call public_6b31330
        push esi
        call public_6b6a092
        add esp, 4
        public_6b310c2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6b3115d
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b31146
        lea eax, ds:[ecx+4]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6b31146
        public_6b310f6 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6b3110f
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b31114
        public_6b3110f : nop
        call public_6b320f0
        public_6b31114 : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b31146
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6b310f6
        public_6b31146 : nop
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_6b3115d
        mov ecx, esi
        call public_6b31330
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3115d : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_6b311f8
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b311e1
        lea eax, ds:[ecx+4]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6b311e1
        public_6b31191 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6b311aa
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b311af
        public_6b311aa : nop
        call public_6b320f0
        public_6b311af : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6b311e1
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6b31191
        public_6b311e1 : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6b311f8
        mov ecx, esi
        call public_6b31330
        push esi
        call public_6b6a092
        add esp, 4
        public_6b311f8 : nop
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        je public_6b31321
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push ebx
        jbe public_6b31309
        lea eax, ds:[esi+4]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6b31309
        public_6b31235 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x2C]
        add edx, 4
        dec ecx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x2C], ecx
        je public_6b31252
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b312d3
        public_6b31252 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6b6a092
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6b312b8
        lea ecx, ss:[esp+0x14]
        call public_6b32200
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], ebx
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        mov dword ptr ss : [ebp+0xC], ebx
        call public_6b6a092
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_6b312d3
        public_6b312b8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov ebx, ecx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], eax
        public_6b312d3 : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jbe public_6b31309
        lea ecx, ds:[esi+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6b31235
        public_6b31309 : nop
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        pop ebx
        je public_6b31321
        mov ecx, ebp
        call public_6b31330
        push ebp
        call public_6b6a092
        add esp, 4
        public_6b31321 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6b31030)
    }
}

#undef public_6b31074
#undef public_6b310ab
#undef public_6b310c2
#undef public_6b310f6
#undef public_6b3110f
#undef public_6b31114
#undef public_6b31146
#undef public_6b3115d
#undef public_6b31191
#undef public_6b311aa
#undef public_6b311af
#undef public_6b311e1
#undef public_6b311f8
#undef public_6b31235
#undef public_6b31252
#undef public_6b312b8
#undef public_6b312d3
#undef public_6b31309
#undef public_6b31321
