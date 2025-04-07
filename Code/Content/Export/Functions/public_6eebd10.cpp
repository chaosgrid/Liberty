#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eebd10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec720);
CLANG_FORWARD_PROC_SYMBOL(public_6eeca70);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6efec20);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);

#define public_6eebd24 _public_6eebd24
#define public_6eebd2c _public_6eebd2c
#define public_6eebd76 _public_6eebd76
#define public_6eebd79 _public_6eebd79
#define public_6eebdc0 _public_6eebdc0
#define public_6eebdc3 _public_6eebdc3
#define public_6eebe06 _public_6eebe06
#define public_6eebe1e _public_6eebe1e
#define public_6eebe2b _public_6eebe2b
#define public_6eebe33 _public_6eebe33
#define public_6eebe43 _public_6eebe43
#define public_6eebe60 _public_6eebe60
#define public_6eebebb _public_6eebebb
#define public_6eebefa _public_6eebefa
#define public_6eebf04 _public_6eebf04
#define public_6eebf68 _public_6eebf68
#define public_6eebf83 _public_6eebf83
#define public_6eebfaf _public_6eebfaf
#define public_6eebfb5 _public_6eebfb5
#define public_6eebff2 _public_6eebff2
#define public_6eebffa _public_6eebffa
#define public_6eec008 _public_6eec008
#define public_6eec024 _public_6eec024

PROC_DECLARE(0x6eebd10, internal_6eebd10, public_6eebd10);
extern "C" NAKED register_t __cdecl internal_6eebd10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x58
        mov al, byte ptr ds : [public_6fce368]
        test al, al
        push esi
        push edi
        jne public_6eebd2c
        public_6eebd24 : nop
        xor al, al
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eebd2c : nop
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov ecx, esi
        call public_6f73990
        test eax, eax
        je public_6eebd79
        mov ecx, eax
        call public_6f33e80
        test al, al
        jne public_6eebd76
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [public_6fcf100]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6fcf0fc
        mov dword ptr ss : [esp+0x14], eax
        call public_6eeca70
        cmp dword ptr ds : [eax], edi
        jne public_6eebd76
        xor al, al
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eebd76 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        public_6eebd79 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, esi
        call public_6f73990
        test eax, eax
        je public_6eebdc3
        mov ecx, eax
        call public_6f33e80
        test al, al
        jne public_6eebdc0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [public_6fcf114]
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        push eax
        mov ecx, offset public_6fcf110
        call public_6eeca70
        cmp dword ptr ds : [eax], edi
        jne public_6eebdc0
        xor al, al
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eebdc0 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        public_6eebdc3 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jle public_6eebe06
        cmp eax, 4
        jg public_6eebe06
        push edi
        mov ecx, esi
        call public_6f73a40
        test eax, eax
        je public_6eebd24
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6eebd24
        lea eax, ss:[ebp+0x14]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6eebe06
        mov al, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eebe06 : nop
        call public_6efec10
        fstp qword ptr ss : [esp+0x28]
        test edi, edi
        je public_6eebe33
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        public_6eebe1e : nop
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        je public_6eebe43
        public_6eebe2b : nop
        xor al, al
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eebe33 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        jmp public_6eebe1e
        public_6eebe43 : nop
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, offset public_6fcf158
        call public_6eec720
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6eebf83
        mov edi, edi
        public_6eebe60 : nop
        fld dword ptr ds : [esi+0x18]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fcomp dword ptr ds : [public_6fb622c]
        fnstsw ax
        test ah, 5
        jnp public_6eebebb
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6eebe60
        public_6eebebb : nop
        cmp esi, edi
        je public_6eebf83
        mov ecx, dword ptr ss : [ebp+8]
        fld dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x10]
        fstp qword ptr ss : [esp+0x18]
        push edx
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, offset public_6fcf140
        call public_6eeca70
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_6fcf144]
        je public_6eebefa
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_6eebf04
        public_6eebefa : nop
        fld qword ptr ds : [public_6fce360]
        fstp dword ptr ss : [esp+0xC]
        public_6eebf04 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6efec20
        fld dword ptr ss : [esp+0x14]
        fcompp 
        add esp, 8
        fnstsw ax
        test ah, 0x41
        je public_6eebe2b
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_6fcf128
        call public_6eeca70
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fcf12c]
        je public_6eebf68
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        jmp public_6eec008
        public_6eebf68 : nop
        mov dword ptr ss : [esp+0xC], 0x3F800000
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        jmp public_6eec008
        public_6eebf83 : nop
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fcf140
        mov dword ptr ss : [esp+0x1C], edx
        call public_6eeca70
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fcf144]
        je public_6eebfaf
        fld dword ptr ds : [eax+0x10]
        jmp public_6eebfb5
        public_6eebfaf : nop
        fld qword ptr ds : [public_6fce360]
        public_6eebfb5 : nop
        fcomp qword ptr ds : [public_6fb6220]
        fnstsw ax
        test ah, 0x44
        jnp public_6eec024
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fcf128
        mov dword ptr ss : [esp+0x1C], edx
        call public_6eeca70
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fcf12c]
        je public_6eebff2
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_6eebffa
        public_6eebff2 : nop
        mov dword ptr ss : [esp+0xC], 0x3F800000
        public_6eebffa : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        public_6eec008 : nop
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6eec024
        mov eax, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6eec024 : nop
        pop edi
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6eebd10)
    }
}

#undef public_6eebd24
#undef public_6eebd2c
#undef public_6eebd76
#undef public_6eebd79
#undef public_6eebdc0
#undef public_6eebdc3
#undef public_6eebe06
#undef public_6eebe1e
#undef public_6eebe2b
#undef public_6eebe33
#undef public_6eebe43
#undef public_6eebe60
#undef public_6eebebb
#undef public_6eebefa
#undef public_6eebf04
#undef public_6eebf68
#undef public_6eebf83
#undef public_6eebfaf
#undef public_6eebfb5
#undef public_6eebff2
#undef public_6eebffa
#undef public_6eec008
#undef public_6eec024
