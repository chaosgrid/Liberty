#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636b5e0);

#define public_636b61f _public_636b61f
#define public_636b65e _public_636b65e
#define public_636b661 _public_636b661
#define public_636b684 _public_636b684

PROC_DECLARE(0x636b5e0, internal_636b5e0, public_636b5e0);
extern "C" NAKED register_t __cdecl internal_636b5e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx+0x80]
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [ebx+0x80], eax
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x10], eax
        fld dword ptr ds : [edi+0x14]
        mov ecx, edi
        mov ebp, 0xFFFFFFE8
        fstp dword ptr ds : [esi+0x14]
        sub ecx, esi
        lea eax, ds:[esi+0x18]
        sub ebp, esi
        public_636b61f : nop
        mov dl, byte ptr ds : [ecx+eax]
        mov byte ptr ds : [eax], dl
        inc eax
        lea edx, ds:[eax+ebp]
        cmp edx, 3
        jl public_636b61f
        xor ecx, ecx
        mov byte ptr ds : [esi+0x1B], cl
        cmp dword ptr ds : [edi+0x20], ecx
        mov eax, dword ptr ds : [edi+0x1C]
        je public_636b684
        cmp eax, ecx
        je public_636b65e
        sub eax, esi
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, esi
        sub ecx, eax
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [eax+8]
        and edx, 0xFFFFFFFD
        or edx, 1
        mov dword ptr ds : [eax+8], edx
        jmp public_636b661
        public_636b65e : nop
        mov dword ptr ds : [esi+4], ecx
        public_636b661 : nop
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        mov ecx, ebx
        call public_636b5e0
        mov ecx, dword ptr ds : [edi+0x24]
        push ecx
        mov ecx, ebx
        call public_636b5e0
        sub eax, esi
        pop edi
        mov dword ptr ds : [esi], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_636b684 : nop
        and dword ptr ds : [eax+8], 0xFFFFFFFC
        mov edx, dword ptr ds : [edi+0x1C]
        sub edx, esi
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x636b5e0)
    }
}

#undef public_636b61f
#undef public_636b65e
#undef public_636b661
#undef public_636b684
