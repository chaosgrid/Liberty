#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fd90);

#define public_51fda0 _public_51fda0
#define public_51fdb4 _public_51fdb4
#define public_51fdd6 _public_51fdd6

PROC_DECLARE(0x51fd90, internal_51fd90, public_51fd90);
extern "C" NAKED register_t __cdecl internal_51fd90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov edi, edi
        public_51fda0 : nop
        mov esi, dword ptr ds : [edx]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jne public_51fdb4
        add edx, 4
        jmp public_51fda0
        public_51fdb4 : nop
        mov eax, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [eax+4]
        sub ecx, 4
        fnstsw ax
        test ah, 0x41
        je public_51fdb4
        cmp ecx, edx
        jbe public_51fdd6
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [ecx], esi
        add edx, 4
        jmp public_51fda0
        public_51fdd6 : nop
        pop edi
        mov eax, edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51fd90)
    }
}

#undef public_51fda0
#undef public_51fdb4
#undef public_51fdd6
