#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a190);

#define public_6f2a1b0 _public_6f2a1b0
#define public_6f2a1f3 _public_6f2a1f3
#define public_6f2a1fe _public_6f2a1fe
#define public_6f2a20b _public_6f2a20b

PROC_DECLARE(0x6f2a190, internal_6f2a190, public_6f2a190);
extern "C" NAKED register_t __cdecl internal_6f2a190()
{
    __asm
    {
        sub esp, 0xF4
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push ebp
        push esi
        push edi
        mov ebp, 0xFFFFFFFE
        lea esi, ss:[esp+0x38]
        mov edi, 0xA
        mov edi, edi
        public_6f2a1b0 : nop
        mov ecx, esi
        call ebx
        add esi, 4
        dec edi
        jne public_6f2a1b0
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x110]
        push ecx
        mov dword ptr ss : [esp+0x10C], 0
        call dword ptr ds : [public_6fb34f4]
        add esp, 0xC
        test eax, eax
        jne public_6f2a1fe
        mov ecx, dword ptr ss : [esp+0x100]
        test ecx, ecx
        jle public_6f2a1fe
        mov edx, dword ptr ss : [esp+0x10C]
        public_6f2a1f3 : nop
        cmp dword ptr ss : [esp+eax*4+0x60], edx
        je public_6f2a20b
        inc eax
        cmp eax, ecx
        jl public_6f2a1f3
        public_6f2a1fe : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xF4
        ret 
        public_6f2a20b : nop
        mov ecx, dword ptr ss : [esp+0x110]
        lea edx, ds:[eax+eax*2]
        lea eax, ss:[esp+edx*4+0x88]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+4], edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop ebx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6f2a190)
    }
}

#undef public_6f2a1b0
#undef public_6f2a1f3
#undef public_6f2a1fe
#undef public_6f2a20b
