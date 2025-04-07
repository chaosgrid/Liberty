#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecad00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbc90);

#define public_6ecbc30 _public_6ecbc30
#define public_6ecbc47 _public_6ecbc47
#define public_6ecbc6f _public_6ecbc6f
#define public_6ecbc82 _public_6ecbc82

PROC_DECLARE(0x6ecbbd0, internal_6ecbbd0, public_6ecbbd0);
extern "C" NAKED register_t __cdecl internal_6ecbbd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push ebp
        push esi
        je public_6ecbc82
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx], eax
        mov dl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [ebx+4], dl
        mov esi, dword ptr ds : [public_6ed57fc]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6ed57f8]
        add ebx, 4
        add eax, edx
        add edx, 0xF8
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, ecx
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_6ecbc82
        push edi
        lea ebx, ds:[ebx]
        public_6ecbc30 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xF8
        mov ecx, ebx
        call public_6ecad00
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ecbc47
        mov edi, eax
        public_6ecbc47 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ecbc6f
        lea ecx, ds:[edi+4]
        call public_6ecbc90
        mov ecx, 0x3C
        lea esi, ss:[ebp+8]
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        public_6ecbc6f : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6ecbc30
        pop edi
        public_6ecbc82 : nop
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecbbd0)
    }
}

#undef public_6ecbc30
#undef public_6ecbc47
#undef public_6ecbc6f
#undef public_6ecbc82
