#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee940);

#define public_62ee95e _public_62ee95e
#define public_62ee960 _public_62ee960
#define public_62ee992 _public_62ee992
#define public_62ee9a3 _public_62ee9a3
#define public_62ee9a5 _public_62ee9a5
#define public_62ee9b5 _public_62ee9b5
#define public_62ee9bd _public_62ee9bd

PROC_DECLARE(0x62ee940, internal_62ee940, public_62ee940);
extern "C" NAKED register_t __cdecl internal_62ee940()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push edi
        je public_62ee95e
        lea ecx, ds:[eax-8]
        jmp public_62ee960
        public_62ee95e : nop
        xor ecx, ecx
        public_62ee960 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+8]
        mov edi, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        je public_62ee9bd
        test ecx, ecx
        je public_62ee992
        test edi, edi
        je public_62ee992
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [edx+0x20]
        cmp ebx, eax
        pop ebx
        je public_62ee9b5
        public_62ee992 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ee9a3
        add eax, 0xFFFFFFF8
        jmp public_62ee9a5
        public_62ee9a3 : nop
        xor eax, eax
        public_62ee9a5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+0x48]
        public_62ee9b5 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_62ee9bd : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62ee940)
    }
}

#undef public_62ee95e
#undef public_62ee960
#undef public_62ee992
#undef public_62ee9a3
#undef public_62ee9a5
#undef public_62ee9b5
#undef public_62ee9bd
