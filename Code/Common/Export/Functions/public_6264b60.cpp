#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_626ba60);
CLANG_FORWARD_PROC_SYMBOL(public_6271490);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6264bca _public_6264bca
#define public_6264c80 _public_6264c80
#define public_6264c90 _public_6264c90
#define public_6264c93 _public_6264c93
#define public_6264c97 _public_6264c97
#define public_6264cbe _public_6264cbe
#define public_6264cf9 _public_6264cf9
#define public_6264d02 _public_6264d02
#define public_6264d2e _public_6264d2e
#define public_6264d3c _public_6264d3c
#define public_6264d6b _public_6264d6b

PROC_DECLARE(0x6264b60, internal_6264b60, public_6264b60);
extern "C" NAKED register_t __cdecl internal_6264b60()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x94]
        xor esi, esi
        cmp edi, esi
        mov ebx, ecx
        jne public_6264bca
        cmp dword ptr ss : [esp+0x98], esi
        jne public_6264bca
        cmp dword ptr ss : [esp+0x9C], esi
        jne public_6264bca
        fld dword ptr ss : [esp+0xA0]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x44
        jp public_6264bca
        fld dword ptr ss : [esp+0xA4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6264bca
        fld dword ptr ss : [esp+0xA8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x44
        jnp public_6264d6b
        public_6264bca : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x94]
        push ebp
        call public_6271490
        fld dword ptr ds : [eax+0x58]
        fmul dword ptr ss : [esp+0xA8]
        add esp, 4
        mov dword ptr ss : [esp+0x54], ebp
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [esp+0xAC]
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x64], ecx
        add ebx, 0x10
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x70], ebp
        mov ecx, 7
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0xBF800000
        rep movsd
        mov esi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+8]
        cmp esi, ecx
        mov edi, eax
        mov dword ptr ss : [esp+0x68], edx
        mov al, 1
        je public_6264c97
        lea esp, ss:[esp]
        public_6264c80 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6264c90
        mov esi, dword ptr ds : [esi]
        jmp public_6264c93
        public_6264c90 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6264c93 : nop
        cmp esi, ecx
        jne public_6264c80
        public_6264c97 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        pop ebp
        je public_6264cbe
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 1
        call public_626b7b0
        jmp public_6264d3c
        public_6264cbe : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6264d02
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_632c410
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax]
        jne public_6264cf9
        lea eax, ss:[esp+0xD]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x21], 1
        call public_626b7b0
        jmp public_6264d3c
        public_6264cf9 : nop
        lea ecx, ss:[esp+0x10]
        call public_626ba60
        public_6264d02 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x6C]
        jae public_6264d2e
        lea edx, ss:[esp+0xE]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x22], 1
        call public_626b7b0
        jmp public_6264d3c
        public_6264d2e : nop
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_6264d3c : nop
        lea ecx, ss:[esp+0x28]
        push eax
        call public_62bed70
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_62bed70
        mov eax, dword ptr ss : [esp+0x2C]
        lea edi, ds:[eax+0x10]
        mov ecx, 7
        lea esi, ss:[esp+0x50]
        rep movsd
        public_6264d6b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x80
        ret 0x1C
        UNREACHABLE_TRAP(0x6264b60)
    }
}

#undef public_6264bca
#undef public_6264c80
#undef public_6264c90
#undef public_6264c93
#undef public_6264c97
#undef public_6264cbe
#undef public_6264cf9
#undef public_6264d02
#undef public_6264d2e
#undef public_6264d3c
#undef public_6264d6b
