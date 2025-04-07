#include "Server-PCH.h"


#define public_6d3a31a _public_6d3a31a
#define public_6d3a32f _public_6d3a32f
#define public_6d3a33b _public_6d3a33b
#define public_6d3a34d _public_6d3a34d
#define public_6d3a351 _public_6d3a351
#define public_6d3a36d _public_6d3a36d
#define public_6d3a374 _public_6d3a374
#define public_6d3a378 _public_6d3a378
#define public_6d3a38b _public_6d3a38b
#define public_6d3a3a7 _public_6d3a3a7
#define public_6d3a3b3 _public_6d3a3b3
#define public_6d3a3bc _public_6d3a3bc

PROC_DECLARE(0x6d3a2d0, internal_6d3a2d0, public_6d3a2d0);
extern "C" NAKED register_t __cdecl internal_6d3a2d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        xor ebx, ebx
        call dword ptr ds : [edx+0x24]
        test al, al
        je public_6d3a36d
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        cmp edx, eax
        jne public_6d3a33b
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d3a31a
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d3a31a : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d3a32f
        cmp dword ptr ds : [edi+8], eax
        jne public_6d3a32f
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d3a32f : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3a33b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6d3a34d
        mov eax, edx
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, 1
        public_6d3a34d : nop
        cmp ebx, ecx
        jae public_6d3a378
        public_6d3a351 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3a3bc
        mov eax, dword ptr ds : [esi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d3a351
        jmp public_6d3a374
        public_6d3a36d : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6d3a3bc
        public_6d3a374 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6d3a378 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d3a3a7
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d3a38b : nop
        jne public_6d3a3b3
        cmp ebx, dword ptr ds : [esi+0x10]
        jae public_6d3a3bc
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        inc ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3a3bc
        jmp public_6d3a374
        public_6d3a3a7 : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d3a3b3
        cmp dword ptr ds : [edi+8], eax
        jmp public_6d3a38b
        public_6d3a3b3 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3a3bc : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3a2d0)
    }
}

#undef public_6d3a31a
#undef public_6d3a32f
#undef public_6d3a33b
#undef public_6d3a34d
#undef public_6d3a351
#undef public_6d3a36d
#undef public_6d3a374
#undef public_6d3a378
#undef public_6d3a38b
#undef public_6d3a3a7
#undef public_6d3a3b3
#undef public_6d3a3bc
