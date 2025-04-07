#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d347af);

#define public_6d347e6 _public_6d347e6
#define public_6d3480b _public_6d3480b
#define public_6d348a6 _public_6d348a6
#define public_6d348c7 _public_6d348c7

PROC_DECLARE(0x6d347af, internal_6d347af, public_6d347af);
extern "C" NAKED register_t __cdecl internal_6d347af()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x105C]
        push esi
        mov esi, dword ptr ds : [eax+0x18]
        push edi
        mov edi, dword ptr ds : [eax+0x1050]
        imul edx, edi
        add edx, esi
        cmp esi, edx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x24], edx
        jae public_6d348c7
        push ebx
        public_6d347e6 : nop
        mov eax, dword ptr ds : [eax+0x1058]
        lea eax, ds:[esi+eax*2]
        add edi, esi
        cmp esi, eax
        mov ebx, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d348a6
        public_6d3480b : nop
        movzx edx, word ptr ds : [ebx+2]
        movzx eax, word ptr ds : [edi+2]
        movzx ebx, word ptr ds : [ebx]
        movzx edi, word ptr ds : [edi]
        mov ecx, eax
        mov ebp, ebx
        and ebp, 0xFFFF00F0
        and ecx, 0xFFFF00F0
        add ecx, ebp
        mov ebp, edi
        and ebp, 0xFFFF00F0
        add ecx, ebp
        mov ebp, edx
        and ebp, 0xFFFF00F0
        lea ebp, ds:[ecx+ebp+0x20]
        mov ecx, 0xF0F
        and ax, cx
        and bx, cx
        and di, cx
        and dx, cx
        shr ebp, 2
        and ebp, 0xFFFF00F0
        add eax, ebx
        mov ebx, dword ptr ss : [esp+0x14]
        add eax, edi
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+edx+0x202]
        shr eax, 2
        and ax, cx
        add ebx, 4
        add edi, 4
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        or ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ss : [esp+0x10], 2
        cmp ebx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [eax], bp
        jb public_6d3480b
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x28]
        public_6d348a6 : nop
        mov eax, dword ptr ds : [ecx+4]
        add ebp, dword ptr ds : [eax+0x1050]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax+0x1050]
        lea esi, ds:[esi+edi*2]
        cmp esi, edx
        mov dword ptr ss : [esp+0x1C], ebp
        jb public_6d347e6
        pop ebx
        public_6d348c7 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d347af)
    }
}

#undef public_6d347e6
#undef public_6d3480b
#undef public_6d348a6
#undef public_6d348c7
