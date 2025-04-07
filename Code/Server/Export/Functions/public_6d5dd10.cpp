#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dd28 _public_6d5dd28
#define public_6d5dd3a _public_6d5dd3a
#define public_6d5dd3c _public_6d5dd3c
#define public_6d5dd9a _public_6d5dd9a
#define public_6d5ddac _public_6d5ddac

PROC_DECLARE(0x6d5dd10, internal_6d5dd10, public_6d5dd10);
extern "C" NAKED register_t __cdecl internal_6d5dd10()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5dd28
        pop edi
        pop esi
        pop ebx
        ret 
        public_6d5dd28 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6d5dd3a
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d5dd3c
        public_6d5dd3a : nop
        xor ecx, ecx
        public_6d5dd3c : nop
        mov edx, dword ptr ds : [ecx+0xB4]
        test edx, edx
        jbe public_6d5dd9a
        mov esi, dword ptr ds : [public_6d90264]
        lea ecx, ds:[edx-1]
        cmp ecx, esi
        jae public_6d5dd9a
        mov esi, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov ebx, dword ptr ds : [ecx+esi+0x348]
        test ebx, ebx
        je public_6d5dd9a
        mov ecx, edx
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+esi-0x34], edi
        jne public_6d5dd9a
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push edx
        call dword ptr ds : [eax+0x1B4]
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        ret 
        public_6d5dd9a : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5ddac
        pop edi
        pop esi
        pop ebx
        ret 
        public_6d5ddac : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_6d649d4]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5dd10)
    }
}

#undef public_6d5dd28
#undef public_6d5dd3a
#undef public_6d5dd3c
#undef public_6d5dd9a
#undef public_6d5ddac
