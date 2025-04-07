#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278830);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6278837 _public_6278837
#define public_6278872 _public_6278872
#define public_627887f _public_627887f
#define public_6278890 _public_6278890
#define public_627889e _public_627889e

PROC_DECLARE(0x6278830, internal_6278830, public_6278830);
extern "C" NAKED register_t __cdecl internal_6278830()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        push ebx
        public_6278837 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_627887f
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_627887f
        mov ebx, dword ptr ds : [ecx+esi*4]
        test ebx, ebx
        je public_6278872
        push ebx
        call public_6334430
        lea eax, ds:[ebx+4]
        push eax
        call public_6334430
        lea ecx, ds:[ebx+0x48]
        push ecx
        call public_6334430
        push ebx
        call public_6391d5a
        add esp, 0x10
        public_6278872 : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+esi*4], 0
        inc esi
        jmp public_6278837
        public_627887f : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_627889e
        lea esp, ss:[esp]
        public_6278890 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6278890
        public_627889e : nop
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6278830)
    }
}

#undef public_6278837
#undef public_6278872
#undef public_627887f
#undef public_6278890
#undef public_627889e
