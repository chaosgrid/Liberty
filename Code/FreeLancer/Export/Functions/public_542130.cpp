#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_542164 _public_542164
#define public_542178 _public_542178
#define public_54217a _public_54217a
#define public_5421a0 _public_5421a0
#define public_5421b4 _public_5421b4
#define public_5421b6 _public_5421b6
#define public_5421e0 _public_5421e0
#define public_5421f4 _public_5421f4
#define public_5421f6 _public_5421f6
#define public_542220 _public_542220
#define public_542234 _public_542234
#define public_542236 _public_542236
#define public_542255 _public_542255
#define public_542269 _public_542269
#define public_54226b _public_54226b
#define public_542290 _public_542290
#define public_5422aa _public_5422aa
#define public_5422ac _public_5422ac
#define public_5422ae _public_5422ae

PROC_DECLARE(0x542130, internal_542130, public_542130);
extern "C" NAKED register_t __cdecl internal_542130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push esi
        xor eax, eax
        test ebx, 0x3FFFFFFF
        push edi
        je public_5422ae
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 1
        xor edi, edi
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54217a
        public_542164 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_542178
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_542164
        jmp public_54217a
        public_542178 : nop
        mov edi, esi
        public_54217a : nop
        test edi, edi
        jne public_5422ac
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 4
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_5421b6
        lea ecx, ds:[ecx]
        public_5421a0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_5421b4
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_5421a0
        jmp public_5421b6
        public_5421b4 : nop
        mov edi, esi
        public_5421b6 : nop
        test edi, edi
        jne public_5422ac
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 5
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_5421f6
        lea esp, ss:[esp]
        public_5421e0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_5421f4
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_5421e0
        jmp public_5421f6
        public_5421f4 : nop
        mov edi, esi
        public_5421f6 : nop
        test edi, edi
        jne public_5422ac
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 6
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_542236
        lea esp, ss:[esp]
        public_542220 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_542234
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_542220
        jmp public_542236
        public_542234 : nop
        mov edi, esi
        public_542236 : nop
        test edi, edi
        jne public_5422ac
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 7
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54226b
        public_542255 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_542269
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_542255
        jmp public_54226b
        public_542269 : nop
        mov edi, esi
        public_54226b : nop
        test edi, edi
        jne public_5422ac
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 2
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_5422ac
        lea ebx, ds:[ebx]
        public_542290 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_5422aa
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_542290
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_5422aa : nop
        mov edi, esi
        public_5422ac : nop
        mov eax, edi
        public_5422ae : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x542130)
    }
}

#undef public_542164
#undef public_542178
#undef public_54217a
#undef public_5421a0
#undef public_5421b4
#undef public_5421b6
#undef public_5421e0
#undef public_5421f4
#undef public_5421f6
#undef public_542220
#undef public_542234
#undef public_542236
#undef public_542255
#undef public_542269
#undef public_54226b
#undef public_542290
#undef public_5422aa
#undef public_5422ac
#undef public_5422ae
