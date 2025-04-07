#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f233b0);

#define public_6f22f04 _public_6f22f04
#define public_6f22f3d _public_6f22f3d
#define public_6f22f52 _public_6f22f52
#define public_6f22f68 _public_6f22f68
#define public_6f22f7b _public_6f22f7b

PROC_DECLARE(0x6f22ec0, internal_6f22ec0, public_6f22ec0);
extern "C" NAKED register_t __cdecl internal_6f22ec0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x5D]
        test al, al
        je public_6f22f7b
        fld dword ptr ds : [public_6f5a1d4]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 1
        jne public_6f22f04
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
        public_6f22f04 : nop
        fld dword ptr ds : [public_6f5a1b8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_6f22f3d
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
        public_6f22f3d : nop
        mov edx, dword ptr ds : [ecx+0x54]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x58]
        xor ebx, ebx
        cmp edx, esi
        push edi
        jae public_6f22f68
        mov eax, dword ptr ds : [ecx+0x38]
        lea edi, ds:[eax+edx*4]
        public_6f22f52 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6f22f68
        inc ebx
        inc edx
        add edi, 4
        cmp edx, esi
        jb public_6f22f52
        public_6f22f68 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ebx
        call public_6f233b0
        pop edi
        pop esi
        pop ebx
        public_6f22f7b : nop
        ret 8
        UNREACHABLE_TRAP(0x6f22ec0)
    }
}

#undef public_6f22f04
#undef public_6f22f3d
#undef public_6f22f52
#undef public_6f22f68
#undef public_6f22f7b
