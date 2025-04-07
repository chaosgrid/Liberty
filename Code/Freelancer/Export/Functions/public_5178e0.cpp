#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_517920 _public_517920
#define public_517922 _public_517922
#define public_517946 _public_517946
#define public_517948 _public_517948
#define public_517997 _public_517997
#define public_517a04 _public_517a04
#define public_517a30 _public_517a30
#define public_517a67 _public_517a67
#define public_517a69 _public_517a69
#define public_517aae _public_517aae
#define public_517af6 _public_517af6
#define public_517b83 _public_517b83

PROC_DECLARE(0x5178e0, internal_5178e0, public_5178e0);
extern "C" NAKED register_t __cdecl internal_5178e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov ebp, ecx
        call public_51cbb0
        mov eax, dword ptr ss : [ebp+0xC0]
        xor ebx, ebx
        cmp eax, ebx
        je public_517a04
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_517a04
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, ebx
        je public_517920
        lea ecx, ds:[eax-8]
        jmp public_517922
        public_517920 : nop
        xor ecx, ecx
        public_517922 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov byte ptr ss : [ebp+0x34], 1
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, ebx
        je public_517946
        lea ecx, ds:[eax-8]
        jmp public_517948
        public_517946 : nop
        xor ecx, ecx
        public_517948 : nop
        lea eax, ss:[esp+0x38]
        push eax
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x38]
        push edx
/*FIXUP push offset public_5dbafc @0x517954*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbafc
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_517997
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[ebp+0x100]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea edi, ss:[ebp+0x10C]
        mov ecx, 9
        lea esi, ss:[esp+0x48]
        rep movsd
        jmp public_517a04
        public_517997 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[ebp+0x100]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x18], 0xC0800000
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x12C], eax
        mov dword ptr ss : [ebp+0x11C], eax
        mov dword ptr ss : [ebp+0x10C], eax
        mov dword ptr ss : [ebp+0x128], ebx
        mov dword ptr ss : [ebp+0x124], ebx
        mov dword ptr ss : [ebp+0x120], ebx
        mov dword ptr ss : [ebp+0x118], ebx
        mov dword ptr ss : [ebp+0x114], ebx
        mov dword ptr ss : [ebp+0x110], ebx
        public_517a04 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, ebx
        je public_517b83
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_517b83
        mov eax, dword ptr ds : [public_675220]
        cmp eax, ebx
        jne public_517a30
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517a30 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x10C]
        push ecx
        lea ebx, ss:[ebp+4]
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x80]
        rep movsd
        je public_517a67
        lea ecx, ds:[eax-8]
        jmp public_517a69
        public_517a67 : nop
        xor ecx, ecx
        public_517a69 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[ebp+0x100]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_517aae
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517aae : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        jne public_517af6
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517af6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x130]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        lea edx, ss:[ebp+0x160]
        mov ecx, edx
        lea edi, ss:[esp+0x38]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        fadd dword ptr ss : [esp+0x14]
        mov byte ptr ss : [ebp+0x34], 1
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], edx
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], esi
        mov ecx, 9
        lea esi, ss:[esp+0x80]
        rep movsd
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, 0xC
        lea esi, ss:[esp+0x38]
        mov edi, ebx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x64], edx
        rep movsd
        public_517b83 : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1A0], 1
        pop ebp
        pop ebx
        add esp, 0x94
        ret 4
        UNREACHABLE_TRAP(0x5178e0)
    }
}

#undef public_517920
#undef public_517922
#undef public_517946
#undef public_517948
#undef public_517997
#undef public_517a04
#undef public_517a30
#undef public_517a67
#undef public_517a69
#undef public_517aae
#undef public_517af6
#undef public_517b83
