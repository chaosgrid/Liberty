#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ecc697 _public_6ecc697
#define public_6ecc6bf _public_6ecc6bf
#define public_6ecc6dc _public_6ecc6dc
#define public_6ecc6f7 _public_6ecc6f7
#define public_6ecc711 _public_6ecc711

PROC_DECLARE(0x6ecc610, internal_6ecc610, public_6ecc610);
extern "C" NAKED register_t __cdecl internal_6ecc610()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0xC
        push esi
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecc711
        mov ecx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        mov esi, eax
        test esi, esi
        je public_6ecc711
        mov ecx, dword ptr ds : [ebx+4]
        add ecx, 0x21C
        call public_6f1c990
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0x230
        lea edx, ds:[ebx+0xC]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+0x29C], eax
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [eax+0x284], ecx
        mov eax, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+0x288], eax
        mov eax, dword ptr ds : [ebx+0x4C]
        test eax, 0x3FFFFFFF
        jne public_6ecc697
        mov eax, dword ptr ds : [esi+0x48]
        public_6ecc697 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+0x28C], eax
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_6ecc6f7
        mov edx, dword ptr ds : [ebx+4]
        lea esi, ds:[ebx+0x1C]
        add edx, 0x244
        test esi, esi
        jne public_6ecc6bf
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        jmp public_6ecc6f7
        public_6ecc6bf : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+4]
        jb public_6ecc6dc
        mov eax, 0x2F
        public_6ecc6dc : nop
        mov edi, ebp
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx+4], 0
        mov dword ptr ds : [edx], eax
        pop ebp
        public_6ecc6f7 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, 1
        mov dword ptr ds : [edx+0x294], eax
        mov ecx, dword ptr ds : [ebx+4]
        pop esi
        mov byte ptr ds : [ecx+0x290], al
        pop ebx
        ret 
        public_6ecc711 : nop
        pop esi
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecc610)
    }
}

#undef public_6ecc697
#undef public_6ecc6bf
#undef public_6ecc6dc
#undef public_6ecc6f7
#undef public_6ecc711
