#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261d90);
CLANG_FORWARD_PROC_SYMBOL(public_634b1a0);

#define public_634b1b5 _public_634b1b5
#define public_634b1cb _public_634b1cb
#define public_634b1ce _public_634b1ce
#define public_634b1d3 _public_634b1d3
#define public_634b1e1 _public_634b1e1
#define public_634b1e5 _public_634b1e5
#define public_634b200 _public_634b200
#define public_634b207 _public_634b207
#define public_634b215 _public_634b215
#define public_634b21d _public_634b21d
#define public_634b21f _public_634b21f

PROC_DECLARE(0x634b1a0, internal_634b1a0, public_634b1a0);
extern "C" NAKED register_t __cdecl internal_634b1a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_634b215
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, 1
        public_634b1b5 : nop
        test eax, eax
        jne public_634b1cb
        mov ecx, edi
        call public_6261d90
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        mov ecx, eax
        je public_634b215
        jmp public_634b1ce
        public_634b1cb : nop
        mov ecx, dword ptr ds : [eax+8]
        public_634b1ce : nop
        cmp dword ptr ds : [eax+4], ebx
        jne public_634b1e1
        public_634b1d3 : nop
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_634b1e1
        cmp dword ptr ds : [eax+4], ebx
        jne public_634b21f
        jmp public_634b1d3
        public_634b1e1 : nop
        test ecx, ecx
        jne public_634b207
        public_634b1e5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_634b200
        mov ecx, edi
        call public_6261d90
        cmp eax, esi
        je public_634b215
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_634b215
        public_634b200 : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_634b1e5
        public_634b207 : nop
        cmp dword ptr ds : [ecx+4], ebx
        mov eax, ecx
        jne public_634b21d
        mov ecx, dword ptr ds : [edi+0x14]
        test ecx, ecx
        jne public_634b1b5
        public_634b215 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_634b21d : nop
        mov eax, ecx
        public_634b21f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b1a0)
    }
}

#undef public_634b1b5
#undef public_634b1cb
#undef public_634b1ce
#undef public_634b1d3
#undef public_634b1e1
#undef public_634b1e5
#undef public_634b200
#undef public_634b207
#undef public_634b215
#undef public_634b21d
#undef public_634b21f
