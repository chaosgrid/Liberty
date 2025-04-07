#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d348d0);

#define public_6d34910 _public_6d34910
#define public_6d34939 _public_6d34939
#define public_6d349ee _public_6d349ee
#define public_6d34a14 _public_6d34a14

PROC_DECLARE(0x6d348d0, internal_6d348d0, public_6d348d0);
extern "C" NAKED register_t __cdecl internal_6d348d0()
{
    __asm
    {
        sub esp, 0x24
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x18]
        push ebp
        mov ebp, dword ptr ds : [edx+0x1050]
        push edi
        mov edi, dword ptr ds : [edx+0x105C]
        imul edi, ebp
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edx+0x18]
        add edi, eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x28], edi
        jae public_6d34a14
        push ebx
        push esi
        mov esi, 0xFF00
        public_6d34910 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edx+0x1058]
        lea edx, ds:[eax+edx*2]
        mov dword ptr ss : [esp+0x10], ebx
        add ebp, eax
        cmp eax, edx
        mov ebx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x28], edx
        jae public_6d349ee
        public_6d34939 : nop
        movzx edx, word ptr ds : [ebx]
        movzx edi, word ptr ds : [ebx+2]
        movzx eax, word ptr ss : [ebp+2]
        movzx ebp, word ptr ss : [ebp]
        mov dword ptr ss : [esp+0x18], edx
        mov ebx, eax
        mov ecx, 0xFF
        and bx, cx
        and dx, cx
        add ebx, edx
        mov edx, ebp
        and dx, cx
        add ebx, edx
        mov edx, edi
        and dx, cx
        mov ecx, eax
        and cx, si
        and eax, esi
        lea edx, ds:[ebx+edx+2]
        mov ebx, dword ptr ss : [esp+0x18]
        and bx, si
        shr edx, 2
        add ecx, ebx
        mov ebx, ebp
        and bx, si
        and ebp, esi
        add ecx, ebx
        mov ebx, edi
        and bx, si
        and edi, esi
        lea ecx, ds:[ecx+ebx+0x200]
        mov ebx, dword ptr ss : [esp+0x1C]
        shr ecx, 2
        xor dl, cl
        mov ecx, dword ptr ss : [esp+0x18]
        and ecx, esi
        add eax, ecx
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x20]
        lea eax, ds:[eax+edi+0x200]
        shr eax, 2
        and edx, 0xFFFF00FF
        xor edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ss : [esp+0x10], 2
        add ebx, 4
        add ebp, 4
        cmp ebx, dword ptr ss : [esp+0x28]
        mov word ptr ds : [eax], dx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebp
        jb public_6d34939
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x30]
        public_6d349ee : nop
        mov edx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edx+0x1050]
        add dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [edx+0x1050]
        lea eax, ds:[eax+ebp*2]
        cmp eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jb public_6d34910
        pop esi
        pop ebx
        public_6d34a14 : nop
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d348d0)
    }
}

#undef public_6d34910
#undef public_6d34939
#undef public_6d349ee
#undef public_6d34a14
