#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805730);
CLANG_FORWARD_PROC_SYMBOL(public_68058e0);
CLANG_FORWARD_PROC_SYMBOL(public_68059c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a00);

#define public_6805926 _public_6805926
#define public_680593c _public_680593c
#define public_6805949 _public_6805949
#define public_680596d _public_680596d
#define public_680597c _public_680597c
#define public_6805990 _public_6805990
#define public_6805993 _public_6805993
#define public_68059b2 _public_68059b2

PROC_DECLARE(0x68058e0, internal_68058e0, public_68058e0);
extern "C" NAKED register_t __cdecl internal_68058e0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push ecx
        call public_68059c0
        mov edi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ds : [edi]
        mov esi, eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ds:[eax+eax*2]
        lea eax, ss:[ebp+ebp]
        add esp, 8
        cmp edx, eax
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jl public_6805926
        push edi
        call public_6805730
        mov ebp, dword ptr ds : [edi]
        add esp, 4
        public_6805926 : nop
        xor edx, edx
        mov eax, esi
        div ebp
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ebx, edx
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        je public_6805990
        public_680593c : nop
        cmp eax, offset public_680d810
        jne public_6805949
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_680596d
        public_6805949 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [eax+0x20], edx
        jne public_680596d
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, edx
        lea edi, ds:[eax+0x28]
        xor edx, edx
        repe cmpsb
        je public_68059b2
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        public_680596d : nop
        lea eax, ss:[ebp-2]
        and eax, esi
        lea ebx, ds:[ebx+eax+1]
        cmp ebx, ebp
        jl public_680597c
        sub ebx, ebp
        public_680597c : nop
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        jne public_680593c
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0xFFFFFFFF
        je public_6805990
        mov ebx, eax
        jmp public_6805993
        public_6805990 : nop
        inc dword ptr ds : [edi+4]
        public_6805993 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        push ecx
        push edx
        call public_6805a00
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+ebx*4], eax
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+ebx*4]
        add esp, 0xC
        public_68059b2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68058e0)
    }
}

#undef public_6805926
#undef public_680593c
#undef public_6805949
#undef public_680596d
#undef public_680597c
#undef public_6805990
#undef public_6805993
#undef public_68059b2
