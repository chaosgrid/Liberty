#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_635b570);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6363e00);
CLANG_FORWARD_PROC_SYMBOL(public_6364890);
CLANG_FORWARD_PROC_SYMBOL(public_63651c0);

#define public_6363b38 _public_6363b38
#define public_6363b70 _public_6363b70
#define public_6363b92 _public_6363b92
#define public_6363bca _public_6363bca
#define public_6363bf5 _public_6363bf5
#define public_6363c19 _public_6363c19
#define public_6363c3f _public_6363c3f
#define public_6363c54 _public_6363c54
#define public_6363c7a _public_6363c7a
#define public_6363c8f _public_6363c8f
#define public_6363ce4 _public_6363ce4
#define public_6363d43 _public_6363d43
#define public_6363d5d _public_6363d5d
#define public_6363d80 _public_6363d80
#define public_6363dbd _public_6363dbd
#define public_6363dd7 _public_6363dd7
#define public_6363ddf _public_6363ddf

PROC_DECLARE(0x6363ab0, internal_6363ab0, public_6363ab0);
extern "C" NAKED register_t __cdecl internal_6363ab0()
{
    __asm
    {
        sub esp, 0xBC
        push ebx
        mov ebx, dword ptr ss : [esp+0xC4]
        push ebp
        mov ebp, dword ptr ss : [esp+0xD0]
        push esi
        mov esi, dword ptr ss : [esp+0xD8]
        push edi
        mov edi, dword ptr ss : [esp+0xD4]
        push esi
        push ebp
        push edi
        mov dword ptr ss : [esp+0x1C], ecx
        push ebx
        lea ecx, ss:[esp+0x74]
        call public_635b3b0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        call public_635b570
        mov edx, dword ptr ss : [esp+0x28]
        or edx, dword ptr ss : [esp+0x2C]
        add esp, 8
        test edx, 0x80000000
        jne public_6363b92
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363b38
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push ebp
        push edi
        push ebx
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363b38 : nop
        fld dword ptr ss : [esp+0x1C]
        push esi
        fcomp dword ptr ds : [public_63a53d4]
        push ebp
        fnstsw ax
        test ah, 1
        je public_6363b70
        mov eax, ebx
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        add ecx, ebx
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363b70 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        push edi
        push ebx
        call public_6363e00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363b92 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        or ecx, dword ptr ss : [esp+0x18]
        test ecx, 0x80000000
        jne public_6363c19
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 8
        and eax, 3
        lea ecx, ds:[eax*8]
        sub ecx, eax
        lea eax, ds:[edx+ecx*4+0x18]
        cmp dword ptr ds : [esi+0x10], eax
        je public_6363bca
        xor dword ptr ds : [edx+0x14], 0x100
        public_6363bca : nop
        fld dword ptr ss : [esp+0x20]
        push ebp
        fcomp dword ptr ds : [public_63a53d4]
        push esi
        push ebx
        fnstsw ax
        test ah, 1
        je public_6363bf5
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363bf5 : nop
        mov ecx, edi
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4e0]
        mov ecx, dword ptr ss : [esp+0x1C]
        add edx, edi
        push edx
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363c19 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 1
        je public_6363c3f
        mov eax, ebx
        and eax, 0xC
        mov eax, dword ptr ds : [eax+public_63ee4e0]
        add eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6363c54
        public_6363c3f : nop
        mov ecx, ebx
        and ecx, 0xC
        mov eax, dword ptr ds : [ecx+public_63ee4e0]
        add eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x2C], ebx
        public_6363c54 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 1
        je public_6363c7a
        mov edx, edi
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4e0]
        add eax, edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x30], eax
        jmp public_6363c8f
        public_6363c7a : nop
        mov eax, edi
        and eax, 0xC
        mov eax, dword ptr ds : [eax+public_63ee4e0]
        add eax, edi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x30], edi
        public_6363c8f : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        push ebp
        push edx
        call public_635ae60
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        push edi
        push edx
        call public_635b150
        mov eax, dword ptr ss : [esp+0x58]
        or eax, dword ptr ss : [esp+0x54]
        add esp, 0x20
        test eax, 0x80000000
        jne public_6363ce4
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push ebp
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363ce4 : nop
        mov edi, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x54]
        push edx
        push ebp
        push esi
        push edi
        call public_635ae60
        mov edx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        push ebx
        push edx
        call public_635b150
        mov eax, dword ptr ss : [esp+0x60]
        or eax, dword ptr ss : [esp+0x5C]
        add esp, 0x20
        test eax, 0x80000000
        jne public_6363d5d
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 8
        and eax, 3
        lea ecx, ds:[eax*8]
        sub ecx, eax
        lea eax, ds:[edx+ecx*4+0x18]
        cmp dword ptr ds : [esi+0x10], eax
        je public_6363d43
        xor dword ptr ds : [edx+0x14], 0x100
        public_6363d43 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push ebx
        push edi
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363d5d : nop
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363d80
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push ebp
        push ecx
        push edx
        jmp public_6363ddf
        public_6363d80 : nop
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363dd7
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 8
        and eax, 3
        lea ebx, ds:[eax*8]
        sub ebx, eax
        lea eax, ds:[edx+ebx*4+0x18]
        cmp dword ptr ds : [esi+0x10], eax
        je public_6363dbd
        xor dword ptr ds : [edx+0x14], 0x100
        public_6363dbd : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edx
        push edi
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        public_6363dd7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push ebp
        push edi
        push eax
        public_6363ddf : nop
        mov ecx, dword ptr ss : [esp+0x20]
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBC
        ret 0x10
        UNREACHABLE_TRAP(0x6363ab0)
    }
}

#undef public_6363b38
#undef public_6363b70
#undef public_6363b92
#undef public_6363bca
#undef public_6363bf5
#undef public_6363c19
#undef public_6363c3f
#undef public_6363c54
#undef public_6363c7a
#undef public_6363c8f
#undef public_6363ce4
#undef public_6363d43
#undef public_6363d5d
#undef public_6363d80
#undef public_6363dbd
#undef public_6363dd7
#undef public_6363ddf
