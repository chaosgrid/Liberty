#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d54890);

#define public_6d548b0 _public_6d548b0
#define public_6d548e7 _public_6d548e7
#define public_6d548f8 _public_6d548f8

PROC_DECLARE(0x6d54890, internal_6d54890, public_6d54890);
extern "C" NAKED register_t __cdecl internal_6d54890()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, 1
        cmp eax, esi
        mov dword ptr ss : [esp+4], ecx
        jb public_6d548f8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        xor edi, edi
        nop 
        public_6d548b0 : nop
        test esi, esi
        jbe public_6d548e7
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, edx
        jae public_6d548e7
        mov edx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [edi+edx+0x348]
        test eax, eax
        je public_6d548e7
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        push esi
        call dword ptr ds : [eax+0x1D8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d548e7 : nop
        mov eax, dword ptr ds : [ecx+4]
        inc esi
        add edi, 0x418
        cmp esi, eax
        jbe public_6d548b0
        pop edi
        pop ebp
        pop ebx
        public_6d548f8 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d54890)
    }
}

#undef public_6d548b0
#undef public_6d548e7
#undef public_6d548f8
