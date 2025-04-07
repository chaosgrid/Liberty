#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f93010 _public_6f93010
#define public_6f9305f _public_6f9305f
#define public_6f93061 _public_6f93061
#define public_6f9306c _public_6f9306c

PROC_DECLARE(0x6f92ff0, internal_6f92ff0, public_6f92ff0);
extern "C" NAKED register_t __cdecl internal_6f92ff0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [eax+8]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        or esi, 0xFFFFFFFF
        cmp edi, eax
        je public_6f9306c
        push ebp
        mov ebp, dword ptr ds : [public_6fb34d0]
        mov edi, edi
        public_6f93010 : nop
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+4]
        test cl, cl
        je public_6f93061
        cmp dword ptr ds : [eax+0x3C], 2
        jne public_6f93061
        mov ecx, dword ptr ds : [eax+0x60]
        cmp ecx, dword ptr ds : [ebx+0x48]
        jne public_6f93061
        mov edx, dword ptr ds : [eax+0x48]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call ebp
        fld dword ptr ss : [esp+0x20]
        fdiv dword ptr ss : [esp+0x24]
        add esp, 0xC
        fmul dword ptr ds : [public_6fb8574]
        call public_6fa9130
        cmp esi, 0xFFFFFFFF
        je public_6f9305f
        cmp eax, esi
        jge public_6f93061
        public_6f9305f : nop
        mov esi, eax
        public_6f93061 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f93010
        pop ebp
        public_6f9306c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f92ff0)
    }
}

#undef public_6f93010
#undef public_6f9305f
#undef public_6f93061
#undef public_6f9306c
