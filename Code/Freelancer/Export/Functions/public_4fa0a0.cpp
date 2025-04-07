#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fa270);
CLANG_FORWARD_PROC_SYMBOL(public_4fb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4fa0c5 _public_4fa0c5
#define public_4fa163 _public_4fa163
#define public_4fa179 _public_4fa179
#define public_4fa17c _public_4fa17c
#define public_4fa1ae _public_4fa1ae
#define public_4fa1e9 _public_4fa1e9
#define public_4fa22d _public_4fa22d
#define public_4fa24c _public_4fa24c
#define public_4fa25f _public_4fa25f

PROC_DECLARE(0x4fa0a0, internal_4fa0a0, public_4fa0a0);
extern "C" NAKED register_t __cdecl internal_4fa0a0()
{
    __asm
    {
        sub esp, 0x68
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x70]
        and al, 0xFE
        push 0x26
        mov byte ptr ds : [ebx+0x70], al
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4fa0c5
        xor al, al
        pop ebx
        add esp, 0x68
        ret 4
        public_4fa0c5 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        je public_4fa179
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4fa179
        mov ecx, dword ptr ds : [ebx+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4fa179
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fa163
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fa163 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x44]
        jmp public_4fa17c
        public_4fa179 : nop
        lea esi, ds:[ebx+0x10]
        public_4fa17c : nop
        fld dword ptr ds : [ebx+0x78]
        lea edi, ss:[esp+0x14]
        fcomp dword ptr ds : [ebx+0x80]
        mov ecx, 0xC
        rep movsd
        fnstsw ax
        test ah, 5
        pop edi
        mov dword ptr ss : [esp+8], 0x3F800000
        pop esi
        jp public_4fa1ae
        fld dword ptr ds : [ebx+0x78]
        fdiv dword ptr ds : [ebx+0x80]
        fstp dword ptr ss : [esp+4]
        public_4fa1ae : nop
        fld dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [esp+8], 0x3F800000
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fa1e9
        fld dword ptr ds : [ebx+0x7C]
        fdiv dword ptr ds : [public_6129cc]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4fa1e9
        xor al, al
        pop ebx
        add esp, 0x68
        ret 4
        public_4fa1e9 : nop
        test byte ptr ds : [ebx+0x70], 2
        jne public_4fa24c
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4fa24c
        mov eax, dword ptr ds : [ebx+0x6C]
        mov eax, dword ptr ds : [eax+4]
        sub eax, 0
        je public_4fa22d
        dec eax
        jne public_4fa25f
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_4fb1e0
        mov al, 1
        pop ebx
        add esp, 0x68
        ret 4
        public_4fa22d : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_4fa270
        mov al, 1
        pop ebx
        add esp, 0x68
        ret 4
        public_4fa24c : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_4fa270
        public_4fa25f : nop
        mov al, 1
        pop ebx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x4fa0a0)
    }
}

#undef public_4fa0c5
#undef public_4fa163
#undef public_4fa179
#undef public_4fa17c
#undef public_4fa1ae
#undef public_4fa1e9
#undef public_4fa22d
#undef public_4fa24c
#undef public_4fa25f
