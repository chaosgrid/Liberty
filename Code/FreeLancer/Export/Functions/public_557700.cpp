#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557700);

#define public_5577e1 _public_5577e1
#define public_5577e7 _public_5577e7
#define public_5577f0 _public_5577f0

PROC_DECLARE(0x557700, internal_557700, public_557700);
extern "C" NAKED register_t __cdecl internal_557700()
{
    __asm
    {
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x50], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x6C], ecx
        mov dword ptr ds : [esi+0x5C], ecx
        mov dword ptr ds : [esi+0x4C], ecx
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x70], eax
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+0x54]
        mov ebp, dword ptr ds : [edx]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        lea edx, ds:[edi+0x6C]
        mov ebp, dword ptr ds : [edx]
        lea ebx, ds:[esi+0xC]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [edi+0x78]
        mov ebx, dword ptr ds : [public_5c71dc]
        mov dword ptr ds : [esi+0x38], edx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x3C], edx
        mov edx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x44], edx
        mov edx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x48], edx
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x40], ecx
        call ebx
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5da4c0]
        fadd qword ptr ds : [public_5da4b8]
        fmul dword ptr ds : [edi+0x80]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5577f0
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x14]
        fst dword ptr ds : [esi+0x30]
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_5577e1
        fld dword ptr ss : [esp+0x14]
        jmp public_5577e7
        public_5577e1 : nop
        fld dword ptr ds : [edi+0x84]
        public_5577e7 : nop
        fxch 
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x40]
        fstp st(0)
        public_5577f0 : nop
        call ebx
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ds : [esi+0x34]
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x557700)
    }
}

#undef public_5577e1
#undef public_5577e7
#undef public_5577f0
