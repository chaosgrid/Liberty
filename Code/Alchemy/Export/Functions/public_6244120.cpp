#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d690);
CLANG_FORWARD_PROC_SYMBOL(public_623fc30);
CLANG_FORWARD_PROC_SYMBOL(public_6244120);
CLANG_FORWARD_PROC_SYMBOL(public_6244770);
CLANG_FORWARD_PROC_SYMBOL(public_6244aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6244af0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6244164 _public_6244164
#define public_624416c _public_624416c
#define public_6244177 _public_6244177
#define public_624417f _public_624417f
#define public_624418c _public_624418c
#define public_62441a2 _public_62441a2
#define public_62441ab _public_62441ab
#define public_62441bf _public_62441bf
#define public_62441d9 _public_62441d9
#define public_62441f2 _public_62441f2
#define public_62441fa _public_62441fa
#define public_6244202 _public_6244202
#define public_624420a _public_624420a
#define public_6244212 _public_6244212
#define public_6244222 _public_6244222
#define public_624422a _public_624422a
#define public_6244233 _public_6244233
#define public_6244249 _public_6244249
#define public_6244259 _public_6244259
#define public_6244271 _public_6244271
#define public_624428f _public_624428f
#define public_62442a8 _public_62442a8
#define public_62442b1 _public_62442b1
#define public_62442c1 _public_62442c1
#define public_62442dc _public_62442dc
#define public_62442e4 _public_62442e4
#define public_62442ea _public_62442ea
#define public_6244313 _public_6244313

PROC_DECLARE(0x6244120, internal_6244120, public_6244120);
extern "C" NAKED register_t __cdecl internal_6244120()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        mov ebp, ecx
        call public_623fc30
        mov eax, dword ptr ds : [esi+0xA8]
        lea edx, ds:[esi+0x98]
        mov dword ptr ss : [ebp+0xA8], eax
        add ebp, 0x98
        cmp ebp, edx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6244313
        mov esi, dword ptr ds : [edx+4]
        test esi, esi
        jne public_6244164
        xor edi, edi
        jmp public_624416c
        public_6244164 : nop
        mov edi, dword ptr ds : [edx+8]
        sub edi, esi
        sar edi, 2
        public_624416c : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6244177
        xor ecx, ecx
        jmp public_624417f
        public_6244177 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        sar ecx, 2
        public_624417f : nop
        cmp edi, ecx
        ja public_62441f2
        mov ebx, dword ptr ds : [edx+8]
        mov edi, eax
        cmp esi, ebx
        je public_62441a2
        public_624418c : nop
        push esi
        mov ecx, edi
        call public_620d690
        add esi, 4
        add edi, 4
        cmp esi, ebx
        jne public_624418c
        mov edx, dword ptr ss : [esp+0x18]
        public_62441a2 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, edi
        cmp edi, ebx
        je public_62441bf
        public_62441ab : nop
        push 0
        mov ecx, esi
        call public_6244af0
        add esi, 4
        cmp esi, ebx
        jne public_62441ab
        mov edx, dword ptr ss : [esp+0x18]
        public_62441bf : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        jne public_62441d9
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        pop edi
        pop esi
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62441d9 : nop
        mov eax, dword ptr ds : [edx+8]
        pop edi
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 2
        pop esi
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62441f2 : nop
        test esi, esi
        jne public_62441fa
        xor edi, edi
        jmp public_6244202
        public_62441fa : nop
        mov edi, dword ptr ds : [edx+8]
        sub edi, esi
        sar edi, 2
        public_6244202 : nop
        test eax, eax
        jne public_624420a
        xor ecx, ecx
        jmp public_6244212
        public_624420a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6244212 : nop
        cmp edi, ecx
        ja public_62442a8
        test eax, eax
        jne public_6244222
        xor ecx, ecx
        jmp public_624422a
        public_6244222 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        sar ecx, 2
        public_624422a : nop
        lea edi, ds:[esi+ecx*4]
        mov ebx, eax
        cmp esi, edi
        je public_6244249
        public_6244233 : nop
        push esi
        mov ecx, ebx
        call public_620d690
        add esi, 4
        add ebx, 4
        cmp esi, edi
        jne public_6244233
        mov edx, dword ptr ss : [esp+0x18]
        public_6244249 : nop
        mov ebp, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x10]
        cmp edi, ebp
        mov esi, edi
        mov ebx, dword ptr ds : [edx+8]
        je public_6244271
        public_6244259 : nop
        push esi
        push ebx
        call public_6244aa0
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_6244259
        mov edx, dword ptr ss : [esp+0x10]
        public_6244271 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_624428f
        mov ecx, dword ptr ds : [edx+4]
        xor eax, eax
        pop edi
        pop esi
        lea eax, ds:[ecx+eax*4]
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        pop ecx
        ret 4
        public_624428f : nop
        mov eax, dword ptr ds : [eax+8]
        pop edi
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sar eax, 2
        pop esi
        pop ebp
        lea eax, ds:[ecx+eax*4]
        pop ebx
        mov dword ptr ds : [edx+8], eax
        pop ecx
        ret 4
        public_62442a8 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, eax
        cmp esi, edi
        je public_62442c1
        public_62442b1 : nop
        push 0
        mov ecx, esi
        call public_6244af0
        add esi, 4
        cmp esi, edi
        jne public_62442b1
        public_62442c1 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_62460e0
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62442dc
        xor eax, eax
        jmp public_62442e4
        public_62442dc : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_62442e4 : nop
        test eax, eax
        jge public_62442ea
        xor eax, eax
        public_62442ea : nop
        lea edx, ds:[eax*4]
        push edx
        call public_624612c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebp
        call public_6244770
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6244313 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6244120)
    }
}

#undef public_6244164
#undef public_624416c
#undef public_6244177
#undef public_624417f
#undef public_624418c
#undef public_62441a2
#undef public_62441ab
#undef public_62441bf
#undef public_62441d9
#undef public_62441f2
#undef public_62441fa
#undef public_6244202
#undef public_624420a
#undef public_6244212
#undef public_6244222
#undef public_624422a
#undef public_6244233
#undef public_6244249
#undef public_6244259
#undef public_6244271
#undef public_624428f
#undef public_62442a8
#undef public_62442b1
#undef public_62442c1
#undef public_62442dc
#undef public_62442e4
#undef public_62442ea
#undef public_6244313
