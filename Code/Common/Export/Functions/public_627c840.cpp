#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c85e _public_627c85e
#define public_627c867 _public_627c867
#define public_627c87d _public_627c87d
#define public_627c885 _public_627c885
#define public_627c88f _public_627c88f
#define public_627c8af _public_627c8af
#define public_627c8bc _public_627c8bc
#define public_627c8bf _public_627c8bf

PROC_DECLARE(0x627c840, internal_627c840, public_627c840);
extern "C" NAKED register_t __cdecl internal_627c840()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_627c8bf
        cmp dword ptr ds : [ecx+4], eax
        jne public_627c867
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_627c85e
        mov dword ptr ds : [ecx+8], eax
        jmp public_627c88f
        public_627c85e : nop
        mov dword ptr ds : [eax+4], 0
        jmp public_627c88f
        public_627c867 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, eax
        jne public_627c885
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        jne public_627c87d
        mov dword ptr ds : [ecx+4], eax
        jmp public_627c88f
        public_627c87d : nop
        mov dword ptr ds : [eax], 0
        jmp public_627c88f
        public_627c885 : nop
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [eax+4], edx
        public_627c88f : nop
        mov dl, byte ptr ds : [ecx+0xC]
        test dl, dl
        mov eax, dword ptr ds : [edi]
        push esi
        mov esi, dword ptr ds : [eax+4]
        je public_627c8af
        test eax, eax
        je public_627c8bc
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [edi], esi
        pop esi
        pop edi
        ret 4
        public_627c8af : nop
        test eax, eax
        je public_627c8bc
        push eax
        call public_6391d5a
        add esp, 4
        public_627c8bc : nop
        mov dword ptr ds : [edi], esi
        pop esi
        public_627c8bf : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x627c840)
    }
}

#undef public_627c85e
#undef public_627c867
#undef public_627c87d
#undef public_627c885
#undef public_627c88f
#undef public_627c8af
#undef public_627c8bc
#undef public_627c8bf
