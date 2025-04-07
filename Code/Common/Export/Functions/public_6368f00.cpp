#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6368f00);

#define public_6368f11 _public_6368f11
#define public_6368f51 _public_6368f51
#define public_6368f56 _public_6368f56

PROC_DECLARE(0x6368f00, internal_6368f00, public_6368f00);
extern "C" NAKED register_t __cdecl internal_6368f00()
{
    __asm
    {
        push ebx
        push edi
        xor ebx, ebx
        mov edi, ecx
        mov bx, word ptr ds : [edi+0x2E]
        dec ebx
        js public_6368f56
        push ebp
        push esi
        xor ebp, ebp
        public_6368f11 : nop
        mov eax, dword ptr ds : [edi+0x30]
        mov esi, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [esi]
        and ecx, 0xFFFFFFFD
        or ecx, 1
        mov dword ptr ds : [esi], ecx
        push esi
        mov ecx, edi
        call public_6368ea0
        test eax, eax
        jne public_6368f51
        mov dword ptr ds : [esi+0xA4], ebp
        mov dword ptr ds : [esi+0xA8], ebp
        mov dword ptr ds : [esi+0xAC], ebp
        mov dword ptr ds : [esi+0x94], ebp
        mov dword ptr ds : [esi+0x98], ebp
        mov dword ptr ds : [esi+0x9C], ebp
        public_6368f51 : nop
        dec ebx
        jns public_6368f11
        pop esi
        pop ebp
        public_6368f56 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6368f00)
    }
}

#undef public_6368f11
#undef public_6368f51
#undef public_6368f56
