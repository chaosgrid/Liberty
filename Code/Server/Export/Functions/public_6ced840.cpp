#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced840);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f260);

#define public_6ced89f _public_6ced89f
#define public_6ced8bf _public_6ced8bf
#define public_6ced8c1 _public_6ced8c1
#define public_6ced926 _public_6ced926
#define public_6ced92d _public_6ced92d

PROC_DECLARE(0x6ced840, internal_6ced840, public_6ced840);
extern "C" NAKED register_t __cdecl internal_6ced840()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_6ced92d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6ced92d
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6ced92d
        mov edx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [esi+4]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6ced89f
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xA4]
        test al, al
        je public_6ced92d
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        public_6ced89f : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6ced8bf
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_6ced8bf
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6ced8bf
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ced8c1
        public_6ced8bf : nop
        xor eax, eax
        public_6ced8c1 : nop
        mov esi, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        test esi, esi
        jbe public_6ced926
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[esi-1]
        cmp ecx, edx
        jae public_6ced926
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push ebx
        mov ebx, dword ptr ds : [ecx+edx+0x348]
        test ebx, ebx
        pop ebx
        je public_6ced926
        imul esi, 0x418
        lea ecx, ds:[esi+edx]
        cmp dword ptr ds : [ecx-0x34], eax
        jne public_6ced926
        mov eax, dword ptr ds : [edi+0x4C]
        mov dl, byte ptr ds : [eax+0x78]
        test dl, dl
        je public_6ced926
        mov edx, dword ptr ds : [eax+8]
        push 0
        push 0x3F800000
        push 1
        push edx
        add ecx, 0xFFFFFBE8
        call public_6d4f260
        public_6ced926 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6ced92d : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ced840)
    }
}

#undef public_6ced89f
#undef public_6ced8bf
#undef public_6ced8c1
#undef public_6ced926
#undef public_6ced92d
