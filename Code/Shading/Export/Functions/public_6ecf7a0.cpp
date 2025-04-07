#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecf7af _public_6ecf7af
#define public_6ecf7b7 _public_6ecf7b7
#define public_6ecf7c7 _public_6ecf7c7
#define public_6ecf7e3 _public_6ecf7e3
#define public_6ecf7f1 _public_6ecf7f1
#define public_6ecf7fc _public_6ecf7fc
#define public_6ecf826 _public_6ecf826
#define public_6ecf838 _public_6ecf838

PROC_DECLARE(0x6ecf7a0, internal_6ecf7a0, public_6ecf7a0);
extern "C" NAKED register_t __cdecl internal_6ecf7a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ecf7af
        xor eax, eax
        jmp public_6ecf7b7
        public_6ecf7af : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6ecf7b7 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6ecf838
        test ebx, ebx
        mov eax, ebx
        jge public_6ecf7c7
        xor eax, eax
        public_6ecf7c7 : nop
        shl eax, 3
        push edi
        push eax
        call public_6ed0c5c
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_6ecf7fc
        push ebp
        public_6ecf7e3 : nop
        test ecx, ecx
        je public_6ecf7f1
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        public_6ecf7f1 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ecf7e3
        pop ebp
        public_6ecf7fc : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*8]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6ecf826
        xor eax, eax
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6ecf826 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6ecf838 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecf7a0)
    }
}

#undef public_6ecf7af
#undef public_6ecf7b7
#undef public_6ecf7c7
#undef public_6ecf7e3
#undef public_6ecf7f1
#undef public_6ecf7fc
#undef public_6ecf826
#undef public_6ecf838
