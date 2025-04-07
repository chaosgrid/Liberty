#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee280);

#define public_62ee2c3 _public_62ee2c3
#define public_62ee2c5 _public_62ee2c5
#define public_62ee2db _public_62ee2db
#define public_62ee2ef _public_62ee2ef
#define public_62ee2f1 _public_62ee2f1
#define public_62ee307 _public_62ee307
#define public_62ee31f _public_62ee31f
#define public_62ee321 _public_62ee321
#define public_62ee33a _public_62ee33a
#define public_62ee34b _public_62ee34b
#define public_62ee34d _public_62ee34d
#define public_62ee35f _public_62ee35f
#define public_62ee38a _public_62ee38a

PROC_DECLARE(0x62ee280, internal_62ee280, public_62ee280);
extern "C" NAKED register_t __cdecl internal_62ee280()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+8], ecx
        push edi
        je public_62ee38a
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ecx
        sub ecx, 0
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [edx+0x110]
        je public_62ee307
        dec ecx
        je public_62ee2db
        dec ecx
        jne public_62ee38a
        test edi, edi
        je public_62ee38a
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62ee2c3
        lea ecx, ds:[eax-8]
        jmp public_62ee2c5
        public_62ee2c3 : nop
        xor ecx, ecx
        public_62ee2c5 : nop
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edi]
        push 0
        call dword ptr ds : [eax+0x20]
        push eax
        push 4
        mov ecx, edi
        call dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        ret 4
        public_62ee2db : nop
        test edi, edi
        je public_62ee38a
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62ee2ef
        lea ecx, ds:[eax-8]
        jmp public_62ee2f1
        public_62ee2ef : nop
        xor ecx, ecx
        public_62ee2f1 : nop
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edi]
        push 0
        call dword ptr ds : [edx+0x20]
        push eax
        push 2
        mov ecx, edi
        call dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        ret 4
        public_62ee307 : nop
        test edi, edi
        je public_62ee35f
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        push ebp
        je public_62ee31f
        lea ecx, ds:[eax-8]
        jmp public_62ee321
        public_62ee31f : nop
        xor ecx, ecx
        public_62ee321 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_62ee33a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov ebx, eax
        public_62ee33a : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ee34b
        lea ecx, ds:[eax-8]
        jmp public_62ee34d
        public_62ee34b : nop
        xor ecx, ecx
        public_62ee34d : nop
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [edi]
        push ebx
        call dword ptr ds : [edx+0x20]
        push eax
        push 0
        mov ecx, edi
        call dword ptr ss : [ebp+0x1C]
        pop ebp
        pop ebx
        public_62ee35f : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        add eax, 0x24
        mov ecx, dword ptr ds : [eax]
        add esi, 0x3C
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        public_62ee38a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ee280)
    }
}

#undef public_62ee2c3
#undef public_62ee2c5
#undef public_62ee2db
#undef public_62ee2ef
#undef public_62ee2f1
#undef public_62ee307
#undef public_62ee31f
#undef public_62ee321
#undef public_62ee33a
#undef public_62ee34b
#undef public_62ee34d
#undef public_62ee35f
#undef public_62ee38a
