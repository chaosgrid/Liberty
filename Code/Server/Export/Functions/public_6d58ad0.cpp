#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d58ae7 _public_6d58ae7
#define public_6d58aef _public_6d58aef
#define public_6d58af5 _public_6d58af5
#define public_6d58b14 _public_6d58b14
#define public_6d58b22 _public_6d58b22
#define public_6d58b2c _public_6d58b2c

PROC_DECLARE(0x6d58ad0, internal_6d58ad0, public_6d58ad0);
extern "C" NAKED register_t __cdecl internal_6d58ad0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d58ae7
        xor eax, eax
        jmp public_6d58aef
        public_6d58ae7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6d58aef : nop
        test eax, eax
        jge public_6d58af5
        xor eax, eax
        public_6d58af5 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6d60012
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6d58b2c
        public_6d58b14 : nop
        test ecx, ecx
        je public_6d58b22
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6d58b22 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6d58b14
        public_6d58b2c : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d58ad0)
    }
}

#undef public_6d58ae7
#undef public_6d58aef
#undef public_6d58af5
#undef public_6d58b14
#undef public_6d58b22
#undef public_6d58b2c
