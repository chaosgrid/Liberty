#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c46c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4780);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ea0);

#define public_53c390 _public_53c390
#define public_53c3a1 _public_53c3a1
#define public_53c3a9 _public_53c3a9
#define public_53c3bd _public_53c3bd

PROC_DECLARE(0x53c370, internal_53c370, public_53c370);
extern "C" NAKED register_t __cdecl internal_53c370()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [ebx+8]
        push esi
        push edi
        lea edi, ds:[ebx+0xC]
        mov byte ptr ds : [public_6720a8], al
        call public_4c46c0
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        test eax, eax
        jle public_53c3bd
        public_53c390 : nop
        dec eax
        cmp esi, eax
        jne public_53c3a1
        call public_4c4ea0
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        push ecx
        jmp public_53c3a9
        public_53c3a1 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0x10]
        push edx
        push eax
        public_53c3a9 : nop
        push edi
        call public_4c4780
        mov eax, dword ptr ds : [ebx+4]
        add esp, 0xC
        add edi, 0x14
        inc esi
        cmp esi, eax
        jl public_53c390
        public_53c3bd : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x53c370)
    }
}

#undef public_53c390
#undef public_53c3a1
#undef public_53c3a9
#undef public_53c3bd
