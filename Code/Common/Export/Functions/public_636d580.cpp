#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d000);
CLANG_FORWARD_PROC_SYMBOL(public_636d040);
CLANG_FORWARD_PROC_SYMBOL(public_636d580);

#define public_636d5a7 _public_636d5a7
#define public_636d5bc _public_636d5bc
#define public_636d5e2 _public_636d5e2
#define public_636d5ed _public_636d5ed
#define public_636d620 _public_636d620

PROC_DECLARE(0x636d580, internal_636d580, public_636d580);
extern "C" NAKED register_t __cdecl internal_636d580()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        lea ecx, ss:[esp+4]
        call public_636d000
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        js public_636d5ed
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        public_636d5a7 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [ecx+eax*4]
        xor edi, edi
        cmp word ptr ds : [esi+0xC], di
        lea ebx, ds:[esi+0x10]
        jle public_636d5e2
        public_636d5bc : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        push ebp
        push edx
        push eax
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        call public_636d040
        movsx ecx, word ptr ds : [esi+0xC]
        inc edi
        add ebx, 0x10
        cmp edi, ecx
        jl public_636d5bc
        mov eax, dword ptr ss : [esp+0x34]
        public_636d5e2 : nop
        dec eax
        mov dword ptr ss : [esp+0x34], eax
        jns public_636d5a7
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_636d5ed : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_636d620
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0x3F800000
        add esp, 0x10
        ret 
        public_636d620 : nop
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [edx]
        fld dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x636d580)
    }
}

#undef public_636d5a7
#undef public_636d5bc
#undef public_636d5e2
#undef public_636d5ed
#undef public_636d620
