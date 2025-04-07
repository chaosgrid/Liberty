#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489a80);
CLANG_FORWARD_PROC_SYMBOL(public_489e00);
CLANG_FORWARD_PROC_SYMBOL(public_489f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_489e2b _public_489e2b
#define public_489e73 _public_489e73

PROC_DECLARE(0x489e00, internal_489e00, public_489e00);
extern "C" NAKED register_t __cdecl internal_489e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_671f58]
        test eax, eax
        je public_489e73
        mov eax, dword ptr ds : [public_671f54]
        mov eax, dword ptr ds : [eax]
        add eax, 8
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_489e2b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x74]
        neg al
        sbb al, al
        inc al
        test al, al
        jne public_489e73
        public_489e2b : nop
        mov eax, dword ptr ds : [public_671f54]
        push esi
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_489f70
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_671f58]
        add esp, 4
        dec eax
        pop esi
        mov dword ptr ds : [public_671f58], eax
        je public_489e73
        mov edx, dword ptr ds : [public_671f54]
        mov ecx, dword ptr ds : [edx]
        add ecx, 8
        jmp public_489a80
        public_489e73 : nop
        ret 
        UNREACHABLE_TRAP(0x489e00)
    }
}

#undef public_489e2b
#undef public_489e73
