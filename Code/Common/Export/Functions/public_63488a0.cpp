#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63488a0);

#define public_63488b5 _public_63488b5
#define public_63488c3 _public_63488c3
#define public_63488dc _public_63488dc

PROC_DECLARE(0x63488a0, internal_63488a0, public_63488a0);
extern "C" NAKED register_t __cdecl internal_63488a0()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x1E]
        push esi
        push edi
        dec eax
        js public_63488c3
        mov edx, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_63488b5 : nop
        mov edi, dword ptr ds : [edx]
        cmp dword ptr ds : [edi], esi
        je public_63488c3
        dec eax
        sub edx, 4
        test eax, eax
        jge public_63488b5
        public_63488c3 : nop
        mov ecx, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [ecx+eax*4]
        mov dx, word ptr ds : [esi+6]
        add esi, 4
        cmp dx, word ptr ds : [esi]
        jb public_63488dc
        mov ecx, esi
        call public_63441a0
        public_63488dc : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        pop edi
        mov dword ptr ds : [ecx+eax*4], edx
        inc word ptr ds : [esi+2]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63488a0)
    }
}

#undef public_63488b5
#undef public_63488c3
#undef public_63488dc
