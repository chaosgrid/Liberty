#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d41b30 _public_6d41b30
#define public_6d41b38 _public_6d41b38
#define public_6d41b43 _public_6d41b43
#define public_6d41b4b _public_6d41b4b
#define public_6d41b5e _public_6d41b5e
#define public_6d41b66 _public_6d41b66
#define public_6d41b74 _public_6d41b74
#define public_6d41b7c _public_6d41b7c
#define public_6d41b88 _public_6d41b88
#define public_6d41ba4 _public_6d41ba4
#define public_6d41bac _public_6d41bac
#define public_6d41bb7 _public_6d41bb7
#define public_6d41bd4 _public_6d41bd4
#define public_6d41bdc _public_6d41bdc
#define public_6d41be6 _public_6d41be6

PROC_DECLARE(0x6d41b20, internal_6d41b20, public_6d41b20);
extern "C" NAKED register_t __cdecl internal_6d41b20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        push ebx
        push esi
        lea esi, ds:[ecx+0x2C]
        jne public_6d41b30
        xor ecx, ecx
        jmp public_6d41b38
        public_6d41b30 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d41b38 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6d41b43
        xor eax, eax
        jmp public_6d41b4b
        public_6d41b43 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6d41b4b : nop
        cmp ecx, eax
        jne public_6d41be6
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d41b5e
        xor eax, eax
        jmp public_6d41b66
        public_6d41b5e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d41b66 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea ebx, ds:[eax+5]
        jne public_6d41b74
        xor eax, eax
        jmp public_6d41b7c
        public_6d41b74 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d41b7c : nop
        cmp eax, ebx
        jae public_6d41be6
        test ebx, ebx
        mov eax, ebx
        jge public_6d41b88
        xor eax, eax
        public_6d41b88 : nop
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
        je public_6d41bb7
        push ebp
        public_6d41ba4 : nop
        test ecx, ecx
        je public_6d41bac
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        public_6d41bac : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6d41ba4
        pop ebp
        public_6d41bb7 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6d41bd4
        xor eax, eax
        jmp public_6d41bdc
        public_6d41bd4 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d41bdc : nop
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6d41be6 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 1
        push edx
        mov ecx, esi
        call public_6cecbd0
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d41b20)
    }
}

#undef public_6d41b30
#undef public_6d41b38
#undef public_6d41b43
#undef public_6d41b4b
#undef public_6d41b5e
#undef public_6d41b66
#undef public_6d41b74
#undef public_6d41b7c
#undef public_6d41b88
#undef public_6d41ba4
#undef public_6d41bac
#undef public_6d41bb7
#undef public_6d41bd4
#undef public_6d41bdc
#undef public_6d41be6
