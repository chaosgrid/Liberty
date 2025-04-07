#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21770);

#define public_6f22c04 _public_6f22c04
#define public_6f22c3d _public_6f22c3d
#define public_6f22c50 _public_6f22c50
#define public_6f22c65 _public_6f22c65
#define public_6f22c95 _public_6f22c95

PROC_DECLARE(0x6f22bc0, internal_6f22bc0, public_6f22bc0);
extern "C" NAKED register_t __cdecl internal_6f22bc0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x5D]
        test al, al
        je public_6f22c95
        fld dword ptr ds : [public_6f5a1d4]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x44
        jp public_6f22c04
        mov eax, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+8]
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        ret 8
        public_6f22c04 : nop
        fld dword ptr ds : [public_6f5a1b8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_6f22c3d
        mov edx, dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ds : [ecx+0x28]
        shl edx, 4
        add edx, eax
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        ret 8
        public_6f22c3d : nop
        mov edx, dword ptr ds : [ecx+0x54]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x58]
        cmp edx, edi
        jae public_6f22c65
        mov eax, dword ptr ds : [ecx+0x38]
        lea esi, ds:[eax+edx*4]
        nop 
        public_6f22c50 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        je public_6f22c65
        inc edx
        add esi, 4
        cmp edx, edi
        jb public_6f22c50
        public_6f22c65 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, edx
        lea edi, ds:[edx+2]
        shl esi, 4
        shl edi, 4
        add esi, eax
        add edi, eax
        inc edx
        push edi
        shl edx, 4
        add edx, eax
        push edx
        push esi
        add esi, 0xFFFFFFF0
        push esi
        call public_6f21770
        pop edi
        pop esi
        public_6f22c95 : nop
        ret 8
        UNREACHABLE_TRAP(0x6f22bc0)
    }
}

#undef public_6f22c04
#undef public_6f22c3d
#undef public_6f22c50
#undef public_6f22c65
#undef public_6f22c95
