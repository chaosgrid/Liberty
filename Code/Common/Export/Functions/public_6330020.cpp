#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6330020);

#define public_6330067 _public_6330067
#define public_6330095 _public_6330095
#define public_63300ab _public_63300ab
#define public_63300ad _public_63300ad
#define public_63300bb _public_63300bb

PROC_DECLARE(0x6330020, internal_6330020, public_6330020);
extern "C" NAKED register_t __cdecl internal_6330020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        lea esi, ds:[ecx+0xC]
        mov edx, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], edi
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], 0
        jle public_63300bb
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 0xC
        mov edi, eax
        push ebp
        public_6330067 : nop
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx-4]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [edx-8]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [edx]
        faddp 
        fsub dword ptr ds : [esi+0xC]
        fcom 
        fnstsw ax
        test ah, 0x41
        jne public_6330095
        fstp st(0)
        mov eax, 1
        fstp st(0)
        jmp public_63300ad
        public_6330095 : nop
        fxch 
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_63300ab
        mov eax, 2
        jmp public_63300ad
        public_63300ab : nop
        xor eax, eax
        public_63300ad : nop
        mov ebp, dword ptr ds : [ecx+eax*4]
        inc ebp
        add edx, 0x14
        dec edi
        mov dword ptr ds : [ecx+eax*4], ebp
        jne public_6330067
        pop ebp
        public_63300bb : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6330020)
    }
}

#undef public_6330067
#undef public_6330095
#undef public_63300ab
#undef public_63300ad
#undef public_63300bb
