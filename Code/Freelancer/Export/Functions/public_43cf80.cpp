#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cf9e _public_43cf9e
#define public_43cfa7 _public_43cfa7
#define public_43cfbd _public_43cfbd
#define public_43cfc5 _public_43cfc5
#define public_43cfcf _public_43cfcf
#define public_43cfef _public_43cfef
#define public_43cffc _public_43cffc
#define public_43cfff _public_43cfff

PROC_DECLARE(0x43cf80, internal_43cf80, public_43cf80);
extern "C" NAKED register_t __cdecl internal_43cf80()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_43cfff
        cmp dword ptr ds : [ecx+4], eax
        jne public_43cfa7
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_43cf9e
        mov dword ptr ds : [ecx+8], eax
        jmp public_43cfcf
        public_43cf9e : nop
        mov dword ptr ds : [eax+4], 0
        jmp public_43cfcf
        public_43cfa7 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, eax
        jne public_43cfc5
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        jne public_43cfbd
        mov dword ptr ds : [ecx+4], eax
        jmp public_43cfcf
        public_43cfbd : nop
        mov dword ptr ds : [eax], 0
        jmp public_43cfcf
        public_43cfc5 : nop
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [eax+4], edx
        public_43cfcf : nop
        mov dl, byte ptr ds : [ecx+0xC]
        test dl, dl
        mov eax, dword ptr ds : [edi]
        push esi
        mov esi, dword ptr ds : [eax+4]
        je public_43cfef
        test eax, eax
        je public_43cffc
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [edi], esi
        pop esi
        pop edi
        ret 4
        public_43cfef : nop
        test eax, eax
        je public_43cffc
        push eax
        call public_5b7e1d
        add esp, 4
        public_43cffc : nop
        mov dword ptr ds : [edi], esi
        pop esi
        public_43cfff : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x43cf80)
    }
}

#undef public_43cf9e
#undef public_43cfa7
#undef public_43cfbd
#undef public_43cfc5
#undef public_43cfcf
#undef public_43cfef
#undef public_43cffc
#undef public_43cfff
