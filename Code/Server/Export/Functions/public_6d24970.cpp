#include "Server-PCH.h"


#define public_6d249a4 _public_6d249a4
#define public_6d249c6 _public_6d249c6
#define public_6d249df _public_6d249df
#define public_6d249eb _public_6d249eb

PROC_DECLARE(0x6d24970, internal_6d24970, public_6d24970);
extern "C" NAKED register_t __cdecl internal_6d24970()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp]
        push esi
        mov esi, dword ptr ds : [edx+4]
        test esi, esi
        push edi
        mov edi, dword ptr ds : [ebx]
        je public_6d249a4
        mov eax, dword ptr ds : [edx+8]
        sub eax, esi
        mov esi, dword ptr ds : [ecx+0x30]
        sar eax, 5
        cmp esi, eax
        jae public_6d249a4
        mov eax, dword ptr ds : [edx+4]
        shl esi, 5
        mov dl, byte ptr ds : [esi+eax+8]
        test dl, dl
        jne public_6d249eb
        public_6d249a4 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d249eb
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d249c6
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        ret 8
        public_6d249c6 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d249df
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [esp+0x18]
        jne public_6d249df
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d249df : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d249eb : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d24970)
    }
}

#undef public_6d249a4
#undef public_6d249c6
#undef public_6d249df
#undef public_6d249eb
