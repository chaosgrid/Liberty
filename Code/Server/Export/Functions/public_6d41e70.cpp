#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d41e7f _public_6d41e7f
#define public_6d41e87 _public_6d41e87
#define public_6d41e97 _public_6d41e97
#define public_6d41eb3 _public_6d41eb3
#define public_6d41ebb _public_6d41ebb
#define public_6d41ec6 _public_6d41ec6
#define public_6d41ef0 _public_6d41ef0
#define public_6d41f02 _public_6d41f02

PROC_DECLARE(0x6d41e70, internal_6d41e70, public_6d41e70);
extern "C" NAKED register_t __cdecl internal_6d41e70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d41e7f
        xor eax, eax
        jmp public_6d41e87
        public_6d41e7f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d41e87 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6d41f02
        test ebx, ebx
        mov eax, ebx
        jge public_6d41e97
        xor eax, eax
        public_6d41e97 : nop
        shl eax, 2
        push edi
        push eax
        call public_6d60012
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_6d41ec6
        push ebp
        public_6d41eb3 : nop
        test ecx, ecx
        je public_6d41ebb
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        public_6d41ebb : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6d41eb3
        pop ebp
        public_6d41ec6 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6d41ef0
        xor eax, eax
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6d41ef0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6d41f02 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d41e70)
    }
}

#undef public_6d41e7f
#undef public_6d41e87
#undef public_6d41e97
#undef public_6d41eb3
#undef public_6d41ebb
#undef public_6d41ec6
#undef public_6d41ef0
#undef public_6d41f02
