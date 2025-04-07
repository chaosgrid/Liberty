#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d83f00 _public_6d83f00
#define public_6d83f15 _public_6d83f15
#define public_6d83f24 _public_6d83f24
#define public_6d83f51 _public_6d83f51
#define public_6d83f60 _public_6d83f60
#define public_6d83f8d _public_6d83f8d

PROC_DECLARE(0x6d83ed0, internal_6d83ed0, public_6d83ed0);
extern "C" NAKED register_t __cdecl internal_6d83ed0()
{
    __asm
    {
        xor eax, eax
        push ebx
        mov ebx, ecx
        push ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx+0x48], eax
        mov dword ptr ds : [ebx+0x6C], eax
        mov byte ptr ds : [ebx+0xA8], al
        mov dword ptr ds : [ebx+0x10], 0xFFFFFFFF
        mov ebp, dword ptr ds : [ebx+0x78]
        mov edx, dword ptr ds : [ebx+0x74]
        mov eax, ebp
        cmp eax, ebp
        push esi
        push edi
        je public_6d83f15
        public_6d83f00 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebp
        rep movsd
        jne public_6d83f00
        public_6d83f15 : nop
        mov dword ptr ds : [ebx+0x78], edx
        mov edi, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d83f51
        public_6d83f24 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [ebx+0x88]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x88], ecx
        jne public_6d83f24
        public_6d83f51 : nop
        mov edi, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d83f8d
        lea ecx, ds:[ecx]
        public_6d83f60 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [ebx+0x94]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x94], ecx
        jne public_6d83f60
        public_6d83f8d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d83ed0)
    }
}

#undef public_6d83f00
#undef public_6d83f15
#undef public_6d83f24
#undef public_6d83f51
#undef public_6d83f60
#undef public_6d83f8d
