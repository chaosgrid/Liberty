#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec150);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eec15f _public_6eec15f
#define public_6eec167 _public_6eec167
#define public_6eec177 _public_6eec177
#define public_6eec193 _public_6eec193
#define public_6eec19b _public_6eec19b
#define public_6eec1a6 _public_6eec1a6
#define public_6eec1d0 _public_6eec1d0
#define public_6eec1e2 _public_6eec1e2

PROC_DECLARE(0x6eec150, internal_6eec150, public_6eec150);
extern "C" NAKED register_t __cdecl internal_6eec150()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6eec15f
        xor eax, eax
        jmp public_6eec167
        public_6eec15f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6eec167 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6eec1e2
        test ebx, ebx
        mov eax, ebx
        jge public_6eec177
        xor eax, eax
        public_6eec177 : nop
        shl eax, 2
        push edi
        push eax
        call public_6fa912a
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_6eec1a6
        push ebp
        public_6eec193 : nop
        test ecx, ecx
        je public_6eec19b
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        public_6eec19b : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6eec193
        pop ebp
        public_6eec1a6 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6eec1d0
        xor eax, eax
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6eec1d0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6eec1e2 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eec150)
    }
}

#undef public_6eec15f
#undef public_6eec167
#undef public_6eec177
#undef public_6eec193
#undef public_6eec19b
#undef public_6eec1a6
#undef public_6eec1d0
#undef public_6eec1e2
