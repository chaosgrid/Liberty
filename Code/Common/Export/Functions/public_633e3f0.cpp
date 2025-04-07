#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633e4de _public_633e4de
#define public_633e4e9 _public_633e4e9
#define public_633e4ef _public_633e4ef
#define public_633e517 _public_633e517
#define public_633e525 _public_633e525
#define public_633e52f _public_633e52f

PROC_DECLARE(0x633e3f0, internal_633e3f0, public_633e3f0);
extern "C" NAKED register_t __cdecl internal_633e3f0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        push esi
        push edi
        lea eax, ss:[ebp+0xC]
        mov esi, eax
        lea edx, ds:[ebx+0xC]
        mov edi, edx
        mov ecx, 9
        rep movsd
        lea ecx, ss:[ebp+0x30]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[ebx+0x30]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, eax
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], edx
        mov eax, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], eax
        lea ecx, ss:[ebp+0x44]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x44]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], edx
        mov eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], edx
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        mov ecx, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [ebx+0x70], ecx
        mov edx, dword ptr ss : [ebp+0x74]
        mov dword ptr ds : [ebx+0x74], edx
        lea eax, ss:[ebp+0x78]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x78]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], ecx
        mov dl, byte ptr ss : [ebp+0x88]
        mov byte ptr ds : [ebx+0x88], dl
        mov al, byte ptr ss : [ebp+0x8C]
        mov byte ptr ds : [ebx+0x8C], al
        mov ecx, dword ptr ss : [ebp+0x90]
        test ecx, ecx
        jne public_633e4de
        xor eax, eax
        jmp public_633e4e9
        public_633e4de : nop
        mov eax, dword ptr ss : [ebp+0x94]
        sub eax, ecx
        sar eax, 3
        public_633e4e9 : nop
        test eax, eax
        jge public_633e4ef
        xor eax, eax
        public_633e4ef : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+0x90], eax
        mov edx, dword ptr ss : [ebp+0x94]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x90]
        add esp, 4
        cmp eax, edx
        je public_633e52f
        public_633e517 : nop
        test ecx, ecx
        je public_633e525
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_633e525 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_633e517
        public_633e52f : nop
        mov dword ptr ds : [ebx+0x94], ecx
        mov dword ptr ds : [ebx+0x98], ecx
        mov dl, byte ptr ss : [ebp+0x9C]
        mov byte ptr ds : [ebx+0x9C], dl
        mov eax, dword ptr ss : [ebp+0xA0]
        pop edi
        mov dword ptr ds : [ebx+0xA0], eax
        mov ecx, dword ptr ss : [ebp+0xA4]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0xA4], ecx
        mov dword ptr ds : [ebx], offset public_63a5094
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x633e3f0)
    }
}

#undef public_633e4de
#undef public_633e4e9
#undef public_633e4ef
#undef public_633e517
#undef public_633e525
#undef public_633e52f
