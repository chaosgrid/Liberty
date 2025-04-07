#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617220);

#define public_6617232 _public_6617232
#define public_661723a _public_661723a
#define public_6617251 _public_6617251

PROC_DECLARE(0x6617220, internal_6617220, public_6617220);
extern "C" NAKED register_t __cdecl internal_6617220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+8]
        test edx, edx
        jne public_6617232
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx], edx
        jmp public_661723a
        public_6617232 : nop
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], esi
        pop esi
        public_661723a : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+8]
        test edx, edx
        jne public_6617251
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        dec eax
        mov dword ptr ds : [ecx+8], eax
        ret 4
        public_6617251 : nop
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [ecx+8]
        dec eax
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x6617220)
    }
}

#undef public_6617232
#undef public_661723a
#undef public_6617251
