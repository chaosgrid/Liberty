#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ca90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c200 _public_627c200
#define public_627c209 _public_627c209
#define public_627c20b _public_627c20b
#define public_627c220 _public_627c220
#define public_627c227 _public_627c227
#define public_627c23a _public_627c23a
#define public_627c243 _public_627c243
#define public_627c247 _public_627c247
#define public_627c250 _public_627c250
#define public_627c259 _public_627c259
#define public_627c25b _public_627c25b
#define public_627c270 _public_627c270
#define public_627c277 _public_627c277
#define public_627c28a _public_627c28a
#define public_627c291 _public_627c291
#define public_627c295 _public_627c295

PROC_DECLARE(0x627c1f0, internal_627c1f0, public_627c1f0);
extern "C" NAKED register_t __cdecl internal_627c1f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        xor edi, edi
        lea esp, ss:[esp]
        public_627c200 : nop
        cmp edi, ebx
        jne public_627c209
        mov edi, dword ptr ds : [esi+0x10]
        jmp public_627c20b
        public_627c209 : nop
        mov edi, dword ptr ds : [edi]
        public_627c20b : nop
        cmp edi, ebx
        je public_627c220
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_627c200
        public_627c220 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        je public_627c247
        public_627c227 : nop
        cmp byte ptr ds : [esi+0x18], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_627c23a
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x1C], eax
        jmp public_627c243
        public_627c23a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627c243 : nop
        cmp edi, ebx
        jne public_627c227
        public_627c247 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x10], ebx
        xor edi, edi
        nop 
        public_627c250 : nop
        cmp edi, ebx
        jne public_627c259
        mov edi, dword ptr ds : [esi+0x24]
        jmp public_627c25b
        public_627c259 : nop
        mov edi, dword ptr ds : [edi]
        public_627c25b : nop
        cmp edi, ebx
        je public_627c270
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_627c250
        public_627c270 : nop
        mov edi, dword ptr ds : [esi+0x24]
        cmp edi, ebx
        je public_627c295
        public_627c277 : nop
        cmp byte ptr ds : [esi+0x2C], bl
        mov ecx, edi
        mov edi, dword ptr ds : [edi]
        je public_627c28a
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+0x30], ecx
        jmp public_627c291
        public_627c28a : nop
        push 1
        call public_627ca90
        public_627c291 : nop
        cmp edi, ebx
        jne public_627c277
        public_627c295 : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x24], ebx
        pop edi
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+8], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627c1f0)
    }
}

#undef public_627c200
#undef public_627c209
#undef public_627c20b
#undef public_627c220
#undef public_627c227
#undef public_627c23a
#undef public_627c243
#undef public_627c247
#undef public_627c250
#undef public_627c259
#undef public_627c25b
#undef public_627c270
#undef public_627c277
#undef public_627c28a
#undef public_627c291
#undef public_627c295
