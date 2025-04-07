#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62820d0 _public_62820d0
#define public_62820f7 _public_62820f7
#define public_6282107 _public_6282107
#define public_628211c _public_628211c
#define public_6282142 _public_6282142
#define public_628214d _public_628214d

PROC_DECLARE(0x62820c0, internal_62820c0, public_62820c0);
extern "C" NAKED register_t __cdecl internal_62820c0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62820f7
        mov edi, edi
        public_62820d0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+8], ecx
        jne public_62820d0
        public_62820f7 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_628214d
        push ebp
        mov ebp, eax
        public_6282107 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_628211c
        mov esi, eax
        public_628211c : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6282142
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6282142 : nop
        mov ecx, dword ptr ds : [ebx+8]
        inc ecx
        dec ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6282107
        pop ebp
        public_628214d : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62820c0)
    }
}

#undef public_62820d0
#undef public_62820f7
#undef public_6282107
#undef public_628211c
#undef public_6282142
#undef public_628214d
