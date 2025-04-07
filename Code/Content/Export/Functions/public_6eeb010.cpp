#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeb010);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6de0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6eeb0e5 _public_6eeb0e5
#define public_6eeb0ea _public_6eeb0ea

PROC_DECLARE(0x6eeb010, internal_6eeb010, public_6eeb010);
extern "C" NAKED register_t __cdecl internal_6eeb010()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        push edi
        push ebp
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_6fb74f0 @0x6eeb01f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb74f0
        push eax
        mov edi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call public_6eec2b0
        lea ecx, ss:[esp+0x74]
        push ecx
        call public_6fa6e50
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_6eeb0ea
        push ebp
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], eax
        call public_6fa6de0
        test eax, eax
        mov dword ptr ss : [esp+0x60], eax
        jle public_6eeb0e5
        fild dword ptr ss : [esp+0x60]
        fst dword ptr ss : [esp+0xC]
        fstp qword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x60], eax
        fild dword ptr ss : [esp+0x60]
        sub esp, 8
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fb74e8]
        fcos 
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_6fb5810]
        fmulp 
        fsubr qword ptr ss : [esp+0x18]
        fadd qword ptr ds : [public_6fb74e0]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0x6C]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call public_6eec2b0
        add esp, 0x18
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x50
        ret 
        public_6eeb0e5 : nop
        mov edi, 0xFFFFFFFD
        public_6eeb0ea : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6eeb010)
    }
}

#undef public_6eeb0e5
#undef public_6eeb0ea
