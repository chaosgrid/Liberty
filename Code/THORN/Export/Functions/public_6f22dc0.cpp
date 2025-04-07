#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f230b0);

#define public_6f22df4 _public_6f22df4
#define public_6f22e28 _public_6f22e28
#define public_6f22e40 _public_6f22e40
#define public_6f22e56 _public_6f22e56

PROC_DECLARE(0x6f22dc0, internal_6f22dc0, public_6f22dc0);
extern "C" NAKED register_t __cdecl internal_6f22dc0()
{
    __asm
    {
        fld dword ptr ds : [public_6f5a1d4]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 1
        jne public_6f22df4
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
        public_6f22df4 : nop
        fld dword ptr ds : [public_6f5a1b8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_6f22e28
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
        public_6f22e28 : nop
        mov edx, dword ptr ds : [ecx+0x54]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x58]
        xor ebx, ebx
        cmp edx, esi
        push edi
        jae public_6f22e56
        mov eax, dword ptr ds : [ecx+0x38]
        lea edi, ds:[eax+edx*4]
        lea ecx, ds:[ecx]
        public_6f22e40 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6f22e56
        inc ebx
        inc edx
        add edi, 4
        cmp edx, esi
        jb public_6f22e40
        public_6f22e56 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ebx
        call public_6f230b0
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f22dc0)
    }
}

#undef public_6f22df4
#undef public_6f22e28
#undef public_6f22e40
#undef public_6f22e56
