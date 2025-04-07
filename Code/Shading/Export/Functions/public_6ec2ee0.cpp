#include "Shading-PCH.h"


#define public_6ec2f05 _public_6ec2f05
#define public_6ec2f1b _public_6ec2f1b
#define public_6ec2f1e _public_6ec2f1e
#define public_6ec2f89 _public_6ec2f89

PROC_DECLARE(0x6ec2ee0, internal_6ec2ee0, public_6ec2ee0);
extern "C" NAKED register_t __cdecl internal_6ec2ee0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        or ebx, 0xFFFFFFFF
        test ecx, ecx
        push esi
        je public_6ec2f89
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, 0xFFFFFFFE
        jne public_6ec2f1e
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6ec2f05
        xor edx, edx
        jmp public_6ec2f1b
        public_6ec2f05 : nop
        mov edx, dword ptr ds : [ecx+0x18]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2f1b : nop
        lea esi, ds:[edx-1]
        public_6ec2f1e : nop
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6ec2f89
        mov edx, dword ptr ds : [ecx+0x18]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        jae public_6ec2f89
        mov edx, dword ptr ds : [ecx+0x14]
        lea eax, ds:[esi+esi*4]
        mov esi, dword ptr ds : [ecx+0x24]
        shl eax, 2
        mov edx, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi+edx*4]
        mov esi, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi+eax+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi+eax+8]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi+eax+0xC]
        mov dword ptr ds : [edx+0xC], esi
        mov ecx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ecx+eax+0x10]
        pop esi
        mov dword ptr ds : [edx+0x10], eax
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ec2f89 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec2ee0)
    }
}

#undef public_6ec2f05
#undef public_6ec2f1b
#undef public_6ec2f1e
#undef public_6ec2f89
