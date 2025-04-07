#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acb0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6acb30d _public_6acb30d
#define public_6acb348 _public_6acb348
#define public_6acb352 _public_6acb352

PROC_DECLARE(0x6acb290, internal_6acb290, public_6acb290);
extern "C" NAKED register_t __cdecl internal_6acb290()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        mov eax, dword ptr ds : [eax+ebp*4+8]
        mov dword ptr ss : [esp+0x10], ecx
        lea edx, ds:[ebx+eax*4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        ja public_6acb348
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax*4]
        mov ecx, edx
        mov edi, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        lea edi, ds:[edx+ebx]
        sub ecx, eax
        xor eax, eax
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        xor eax, eax
        test ebp, ebp
        je public_6acb352
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, offset public_6ada800
        lea ebx, ds:[ecx+ebp*4+4]
        public_6acb30d : nop
        mov ecx, dword ptr ds : [edi]
        lea esi, ds:[eax+1]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, ecx
        shr edx, 1
        add edx, eax
        mov eax, dword ptr ds : [ebx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, esi
        shr edx, cl
        push edx
        push eax
        call public_6acb0a0
        mov eax, esi
        add edi, 4
        sub ebx, 4
        cmp eax, ebp
        jne public_6acb30d
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        public_6acb348 : nop
        mov dword ptr ds : [public_6ae097c], 0x37
        public_6acb352 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6acb290)
    }
}

#undef public_6acb30d
#undef public_6acb348
#undef public_6acb352
