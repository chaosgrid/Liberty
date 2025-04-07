#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63011b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63011bf _public_63011bf
#define public_63011c7 _public_63011c7
#define public_63011d7 _public_63011d7
#define public_63011f3 _public_63011f3
#define public_6301201 _public_6301201
#define public_630120c _public_630120c
#define public_6301236 _public_6301236
#define public_6301248 _public_6301248

PROC_DECLARE(0x63011b0, internal_63011b0, public_63011b0);
extern "C" NAKED register_t __cdecl internal_63011b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_63011bf
        xor eax, eax
        jmp public_63011c7
        public_63011bf : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_63011c7 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6301248
        test ebx, ebx
        mov eax, ebx
        jge public_63011d7
        xor eax, eax
        public_63011d7 : nop
        shl eax, 3
        push edi
        push eax
        call public_6391d9c
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_630120c
        push ebp
        public_63011f3 : nop
        test ecx, ecx
        je public_6301201
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        public_6301201 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_63011f3
        pop ebp
        public_630120c : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*8]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6301236
        xor eax, eax
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6301236 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6301248 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63011b0)
    }
}

#undef public_63011bf
#undef public_63011c7
#undef public_63011d7
#undef public_63011f3
#undef public_6301201
#undef public_630120c
#undef public_6301236
#undef public_6301248
