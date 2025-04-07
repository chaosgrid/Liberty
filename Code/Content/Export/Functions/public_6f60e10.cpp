#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);

#define public_6f60e92 _public_6f60e92
#define public_6f60e94 _public_6f60e94
#define public_6f60f20 _public_6f60f20
#define public_6f60f58 _public_6f60f58
#define public_6f60f5c _public_6f60f5c
#define public_6f60f98 _public_6f60f98
#define public_6f60fa5 _public_6f60fa5

PROC_DECLARE(0x6f60e10, internal_6f60e10, public_6f60e10);
extern "C" NAKED register_t __cdecl internal_6f60e10()
{
    __asm
    {
        sub esp, 0xB0
        push ebx
        push ebp
        push esi
        push edi
        call public_6f5a7e0
        test al, al
        je public_6f60f98
        mov eax, dword ptr ss : [esp+0xC8]
        mov edi, dword ptr ss : [esp+0xC4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_6fbbbd4]
        fadd dword ptr ds : [public_6fbbbd0]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb605c]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6f60e92
        fadd st(0), st
        fstp dword ptr ss : [esp+0x10]
        jmp public_6f60e94
        public_6f60e92 : nop
        fstp st(0)
        public_6f60e94 : nop
        fmul dword ptr ds : [public_6fb605c]
        mov eax, dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x48]
        fmul dword ptr ds : [public_6fb605c]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x24]
        fmul dword ptr ds : [public_6fb605c]
        push edx
        push 0xFDFF
        push eax
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], ecx
        fxch 
        lea ecx, ss:[esp+0x20]
        fadd dword ptr ds : [edi]
        push ecx
        push 0x20
        lea edx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x28]
        push edx
        lea eax, ss:[esp+0x38]
        fadd dword ptr ds : [edi+4]
        push eax
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x1C
        xor ebp, ebp
        test eax, eax
        jbe public_6f60f98
        mov ebx, dword ptr ds : [public_6fb3630]
        lea esi, ss:[esp+0x40]
        nop 
        lea esp, ss:[esp]
        public_6f60f20 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call ebx
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov al, byte ptr ss : [esp+0x34]
        add esp, 0x14
        test al, 3
        je public_6f60f58
        fld dword ptr ds : [public_6fbbbd8]
        fadd dword ptr ds : [public_6fbbbd0]
        fadd dword ptr ss : [esp+0x10]
        jmp public_6f60f5c
        public_6f60f58 : nop
        fld dword ptr ss : [esp+0x10]
        public_6f60f5c : nop
        mov eax, dword ptr ss : [esp+0xC8]
        fld st(0)
        lea edx, ss:[esp+0x34]
        fmul st, st(1)
        push edx
        push eax
        fstp dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x30]
        push edi
        push ecx
        fstp st(0)
        call public_6f611a0
        fcomp dword ptr ss : [esp+0x20]
        add esp, 0x10
        fnstsw ax
        test ah, 5
        jnp public_6f60fa5
        mov eax, dword ptr ss : [esp+0x24]
        inc ebp
        add esi, 4
        cmp ebp, eax
        jb public_6f60f20
        public_6f60f98 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xB0
        ret 
        public_6f60fa5 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x6f60e10)
    }
}

#undef public_6f60e92
#undef public_6f60e94
#undef public_6f60f20
#undef public_6f60f58
#undef public_6f60f5c
#undef public_6f60f98
#undef public_6f60fa5
