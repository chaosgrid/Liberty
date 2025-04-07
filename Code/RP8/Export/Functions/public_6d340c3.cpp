#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d340c3);

#define public_6d340ff _public_6d340ff
#define public_6d34128 _public_6d34128
#define public_6d341bd _public_6d341bd
#define public_6d341df _public_6d341df

PROC_DECLARE(0x6d340c3, internal_6d340c3, public_6d340c3);
extern "C" NAKED register_t __cdecl internal_6d340c3()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x105C]
        push ebx
        mov ebx, dword ptr ds : [eax+0x1050]
        imul edx, ebx
        push esi
        mov esi, dword ptr ds : [eax+0x18]
        add edx, esi
        cmp esi, edx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        jae public_6d341df
        push ebp
        push edi
        mov edi, 0x7C1F
        public_6d340ff : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x1058]
        lea eax, ds:[esi+eax*2]
        mov dword ptr ss : [esp+0x10], ebp
        add ebx, esi
        cmp esi, eax
        mov ebp, esi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x24], eax
        jae public_6d341bd
        public_6d34128 : nop
        movzx ecx, word ptr ss : [ebp]
        movzx edx, word ptr ss : [ebp+2]
        movzx eax, word ptr ds : [ebx+2]
        movzx ebx, word ptr ds : [ebx]
        mov ebp, eax
        and ebp, 0xFFFF03E0
        mov dword ptr ss : [esp+0x20], ecx
        and ecx, 0xFFFF03E0
        add ebp, ecx
        mov ecx, ebx
        and ecx, 0xFFFF03E0
        add ebp, ecx
        mov ecx, edx
        and ecx, 0xFFFF03E0
        lea ebp, ds:[ecx+ebp+0x40]
        mov ecx, dword ptr ss : [esp+0x20]
        and eax, edi
        and ecx, edi
        add eax, ecx
        and ebx, edi
        add eax, ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        and edx, edi
        lea eax, ds:[eax+edx+0x802]
        shr eax, 2
        and ax, di
        shr ebp, 2
        and ebp, 0xFFFF03E0
        add ebx, 4
        mov dword ptr ss : [esp+0x1C], ebx
        or ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ss : [esp+0x10], 2
        mov word ptr ds : [eax], bp
        mov ebp, dword ptr ss : [esp+0x18]
        add ebp, 4
        cmp ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ebp
        jb public_6d34128
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        public_6d341bd : nop
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x1050]
        add dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax+0x1050]
        lea esi, ds:[esi+ebx*2]
        cmp esi, edx
        jb public_6d340ff
        pop edi
        pop ebp
        public_6d341df : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d340c3)
    }
}

#undef public_6d340ff
#undef public_6d34128
#undef public_6d341bd
#undef public_6d341df
