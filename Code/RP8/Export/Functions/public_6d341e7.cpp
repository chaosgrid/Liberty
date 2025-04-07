#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d341e7);

#define public_6d34227 _public_6d34227
#define public_6d34250 _public_6d34250
#define public_6d34308 _public_6d34308
#define public_6d3432d _public_6d3432d

PROC_DECLARE(0x6d341e7, internal_6d341e7, public_6d341e7);
extern "C" NAKED register_t __cdecl internal_6d341e7()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x18]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [esi+0x105C]
        mov edx, dword ptr ds : [esi+0x18]
        push edi
        mov edi, dword ptr ds : [esi+0x1050]
        imul ebp, edi
        add ebp, edx
        cmp edx, ebp
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x2C], ebp
        jae public_6d3432d
        mov eax, 0x83E0
        push ebx
        public_6d34227 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+0x1058]
        lea esi, ds:[edx+esi*2]
        mov dword ptr ss : [esp+0x10], ebx
        add edi, edx
        cmp edx, esi
        mov ebx, edx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x28], esi
        jae public_6d34308
        public_6d34250 : nop
        movzx ecx, word ptr ds : [ebx]
        movzx esi, word ptr ds : [ebx+2]
        movzx edx, word ptr ds : [edi+2]
        movzx edi, word ptr ds : [edi]
        mov ebp, ecx
        and ebp, eax
        mov ebx, edx
        and ebx, eax
        add ebx, ebp
        mov ebp, edi
        and ebp, eax
        add ebx, ebp
        mov dword ptr ss : [esp+0x24], ecx
        and ecx, 0x7C1F
        mov ebp, esi
        and ebp, eax
        lea ebx, ds:[ebx+ebp+0x10040]
        mov ebp, edx
        and ebp, 0x7C1F
        add ebp, ecx
        mov ecx, edi
        and ecx, 0x7C1F
        add ebp, ecx
        mov ecx, esi
        and ecx, 0x7C1F
        lea ecx, ds:[ecx+ebp+0x802]
        shr ecx, 2
        shr ebx, 2
        xor ebx, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        and ecx, eax
        and edx, eax
        add edx, ecx
        and edi, eax
        add edx, edi
        mov edi, dword ptr ss : [esp+0x1C]
        and esi, eax
        and ebx, 0xFFFF7C1F
        lea ecx, ds:[edx+esi+0x10040]
        shr ecx, 2
        xor ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        add dword ptr ss : [esp+0x10], 2
        mov word ptr ds : [ecx], bx
        mov ebx, dword ptr ss : [esp+0x18]
        add ebx, 4
        add edi, 4
        cmp ebx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edi
        jb public_6d34250
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        public_6d34308 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [esi+0x1050]
        add dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+0x1050]
        lea edx, ds:[edx+edi*2]
        cmp edx, ebp
        mov dword ptr ss : [esp+0x20], edx
        jb public_6d34227
        pop ebx
        public_6d3432d : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d341e7)
    }
}

#undef public_6d34227
#undef public_6d34250
#undef public_6d34308
#undef public_6d3432d
