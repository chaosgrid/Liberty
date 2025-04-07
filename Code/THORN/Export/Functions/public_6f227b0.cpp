#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21000);

#define public_6f227e4 _public_6f227e4
#define public_6f22818 _public_6f22818
#define public_6f22830 _public_6f22830
#define public_6f22845 _public_6f22845

PROC_DECLARE(0x6f227b0, internal_6f227b0, public_6f227b0);
extern "C" NAKED register_t __cdecl internal_6f227b0()
{
    __asm
    {
        fld dword ptr ds : [public_6f5a1d4]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x44
        jp public_6f227e4
        mov eax, dword ptr ds : [ecx+0x54]
        mov ecx, dword ptr ds : [ecx+0x18]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        ret 8
        public_6f227e4 : nop
        fld dword ptr ds : [public_6f5a1b8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_6f22818
        mov eax, dword ptr ds : [ecx+0x58]
        mov ecx, dword ptr ds : [ecx+0x18]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        ret 8
        public_6f22818 : nop
        mov edx, dword ptr ds : [ecx+0x54]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x58]
        cmp edx, edi
        jae public_6f22845
        mov eax, dword ptr ds : [ecx+0x38]
        lea esi, ds:[eax+edx*4]
        lea ebx, ds:[ebx]
        public_6f22830 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        je public_6f22845
        inc edx
        add esi, 4
        cmp edx, edi
        jb public_6f22830
        public_6f22845 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[edx+edx*2+6]
        lea esi, ds:[edx+edx*2]
        lea esi, ds:[eax+esi*4]
        lea edi, ds:[eax+edi*4]
        push edi
        lea edx, ds:[edx+edx*2+3]
        lea eax, ds:[eax+edx*4]
        push eax
        push esi
        add esi, 0xFFFFFFF4
        push esi
        call public_6f21000
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f227b0)
    }
}

#undef public_6f227e4
#undef public_6f22818
#undef public_6f22830
#undef public_6f22845
