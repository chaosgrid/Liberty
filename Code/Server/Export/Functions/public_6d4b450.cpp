#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b450);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);

#define public_6d4b469 _public_6d4b469
#define public_6d4b478 _public_6d4b478
#define public_6d4b486 _public_6d4b486
#define public_6d4b4bd _public_6d4b4bd
#define public_6d4b4ed _public_6d4b4ed
#define public_6d4b500 _public_6d4b500
#define public_6d4b514 _public_6d4b514

PROC_DECLARE(0x6d4b450, internal_6d4b450, public_6d4b450);
extern "C" NAKED register_t __cdecl internal_6d4b450()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x3B8]
        push edi
        xor edi, edi
        cmp ecx, edi
        jne public_6d4b469
        mov dword ptr ss : [esp+8], edi
        jmp public_6d4b478
        public_6d4b469 : nop
        mov eax, dword ptr ds : [esi+0x3BC]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+8], eax
        public_6d4b478 : nop
        cmp dword ptr ss : [esp+8], edi
        jle public_6d4b4ed
        push ebx
        push ebp
        lea ebp, ds:[esi+0x3A0]
        public_6d4b486 : nop
        mov eax, dword ptr ds : [esi+0x3B8]
        mov ecx, dword ptr ds : [eax+edi*8]
        mov bl, byte ptr ds : [eax+edi*8+4]
        lea eax, ds:[eax+edi*8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        or bl, 8
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x3A4]
        je public_6d4b4bd
        or bl, byte ptr ds : [eax+0x10]
        public_6d4b4bd : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x28], 0
        call public_6d5c600
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        inc edi
        cmp edi, eax
        mov byte ptr ds : [ecx+0x10], bl
        jl public_6d4b486
        pop ebp
        pop ebx
        public_6d4b4ed : nop
        mov edx, dword ptr ds : [esi+0x3BC]
        mov ecx, dword ptr ds : [esi+0x3B8]
        mov eax, edx
        cmp eax, edx
        je public_6d4b514
        nop 
        public_6d4b500 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6d4b500
        public_6d4b514 : nop
        pop edi
        mov dword ptr ds : [esi+0x3BC], ecx
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d4b450)
    }
}

#undef public_6d4b469
#undef public_6d4b478
#undef public_6d4b486
#undef public_6d4b4bd
#undef public_6d4b4ed
#undef public_6d4b500
#undef public_6d4b514
