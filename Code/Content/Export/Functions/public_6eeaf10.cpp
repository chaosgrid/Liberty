#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6de0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6eeafe8 _public_6eeafe8

PROC_DECLARE(0x6eeaf10, internal_6eeaf10, public_6eeaf10);
extern "C" NAKED register_t __cdecl internal_6eeaf10()
{
    __asm
    {
        sub esp, 0x98
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xAC]
        push edi
        xor ebx, ebx
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_6fb74f0 @0x6eeaf27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb74f0
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x6C], ebx
        mov byte ptr ss : [esp+0x70], bl
        call public_6eec2b0
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_6fa6e50
        mov esi, eax
        add esp, 0x10
        cmp esi, ebx
        je public_6eeafe8
        push edi
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6fa6de0
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        jle public_6eeafe8
        fild dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0x10]
        fstp qword ptr ss : [esp+0x14]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        sub esp, 8
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fb74e8]
        fcos 
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_6fb5810]
        fmulp 
        fsubr qword ptr ss : [esp+0x1C]
        fadd qword ptr ds : [public_6fb74e0]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0xB8]
        push ecx
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        call public_6eec2b0
        add esp, 0x18
        public_6eeafe8 : nop
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, 0x11
        lea esi, ss:[esp+0x60]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x6eeaf10)
    }
}

#undef public_6eeafe8
