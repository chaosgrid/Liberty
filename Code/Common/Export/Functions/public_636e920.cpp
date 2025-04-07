#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);

#define public_636e92f _public_636e92f
#define public_636e965 _public_636e965
#define public_636e96e _public_636e96e
#define public_636e99f _public_636e99f
#define public_636e9a8 _public_636e9a8

PROC_DECLARE(0x636e920, internal_636e920, public_636e920);
extern "C" NAKED register_t __cdecl internal_636e920()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jne public_636e92f
        mov edi, 1
        public_636e92f : nop
        mov eax, dword ptr ds : [public_658b970]
        lea esi, ds:[edi*4+8]
        cmp esi, eax
        ja public_636e99f
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [public_658b978]
        mov eax, dword ptr ds : [edx+ecx*4]
        test eax, eax
        lea ecx, ds:[edx+ecx*4]
        je public_636e965
        inc dword ptr ds : [public_658b99c]
        mov edx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        jmp public_636e96e
        public_636e965 : nop
        push esi
        call public_6377e60
        add esp, 4
        public_636e96e : nop
        mov ecx, dword ptr ds : [public_658b980]
        mov edx, dword ptr ds : [ecx+esi*4]
        mov ecx, dword ptr ds : [public_658b97c]
        mov ecx, dword ptr ds : [ecx+edx*4]
        cmp ecx, esi
        jle public_636e9a8
        sub ecx, esi
        shr ecx, 2
        add edi, ecx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+edi*4+4], 1
        pop edi
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_636e99f : nop
        push esi
        call public_6377e60
        add esp, 4
        public_636e9a8 : nop
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+edi*4+4], 1
        pop edi
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e920)
    }
}

#undef public_636e92f
#undef public_636e965
#undef public_636e96e
#undef public_636e99f
#undef public_636e9a8
