#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422ba0);
CLANG_FORWARD_PROC_SYMBOL(public_422bc0);
CLANG_FORWARD_PROC_SYMBOL(public_422e30);
CLANG_FORWARD_PROC_SYMBOL(public_45a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e79f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e7b42 _public_4e7b42
#define public_4e7be3 _public_4e7be3
#define public_4e7c42 _public_4e7c42
#define public_4e7c47 _public_4e7c47
#define public_4e7c50 _public_4e7c50
#define public_4e7c5f _public_4e7c5f
#define public_4e7c87 _public_4e7c87
#define public_4e7ce1 _public_4e7ce1
#define public_4e7cf4 _public_4e7cf4
#define public_4e7d05 _public_4e7d05

PROC_DECLARE(0x4e79f0, internal_4e79f0, public_4e79f0);
extern "C" NAKED register_t __cdecl internal_4e79f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0xF8
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x110]
        mov word ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0
        mov al, byte ptr ss : [ebp+0x4B0]
        test al, al
        push esi
        push edi
        je public_4e7d05
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        je public_4e7d05
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e7d05
        add eax, 0xC
        test eax, eax
        je public_4e7d05
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_4e7d05
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4e7d05
        fild dword ptr ss : [esp+0x110]
        mov eax, dword ptr ss : [ebp+0x3B8]
        lea ebx, ss:[ebp+0x3B8]
        fstp dword ptr ss : [esp+0x24]
        fild dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push ecx
        push ebx
        call dword ptr ds : [eax+0x38]
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [eax+8]
        mov esi, offset public_67dbfc
        fld dword ptr ss : [esp+0x34]
        lea edi, ss:[esp+0x70]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [public_67dc60]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc70]
        fmulp 
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x54], eax
        fsub dword ptr ds : [public_67dc64]
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc74]
        fmulp 
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x58], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x5C], edx
        rep movsd
        jne public_4e7b42
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e7b42 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ss:[esp+0x48]
        add ebp, 0x38
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [ebp]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x54], edx
        call dword ptr ds : [eax+0x10]
        test al, al
        je public_4e7d05
        push 1
        lea ecx, ss:[esp+0x98]
        call public_422ba0
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        call dword ptr ds : [eax+0xC]
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_422bc0
        push 0x1EE0
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_5c64f4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [public_5c64f0]
        lea edi, ds:[ecx+0xE4]
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        je public_4e7c5f
        public_4e7be3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_4e7c50
        mov ecx, dword ptr ds : [public_6127b8]
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_422e30
        test al, al
        je public_4e7c50
        mov ax, word ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x114]
        mov word ptr ds : [ecx], ax
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+0x14]
        push esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_4e7c42
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xA0]
        jmp public_4e7c47
        public_4e7c42 : nop
        mov eax, 1
        public_4e7c47 : nop
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [ecx], eax
        public_4e7c50 : nop
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_4e7be3
        public_4e7c5f : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x28]
        lea edi, ds:[eax+0x144]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        je public_4e7cf4
        mov ebx, dword ptr ds : [public_5c6578]
        public_4e7c87 : nop
        mov ebp, dword ptr ds : [public_5c6580]
        mov ecx, esi
        call ebp
        cmp eax, 0xFFFFFFFF
        je public_4e7ce1
        mov edx, dword ptr ds : [public_6127b8]
        push edx
        mov ecx, esi
        call ebp
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_422e30
        test al, al
        je public_4e7ce1
        mov eax, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x114]
        mov word ptr ds : [edx], cx
        mov ecx, esi
        call ebx
        push eax
        call public_45a7c0
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x11C]
        add esp, 4
        mov dword ptr ds : [eax], 1
        public_4e7ce1 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        jne public_4e7c87
        public_4e7cf4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF8
        ret 0x10
        public_4e7d05 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xF8
        ret 0x10
        UNREACHABLE_TRAP(0x4e79f0)
    }
}

#undef public_4e7b42
#undef public_4e7be3
#undef public_4e7c42
#undef public_4e7c47
#undef public_4e7c50
#undef public_4e7c5f
#undef public_4e7c87
#undef public_4e7ce1
#undef public_4e7cf4
#undef public_4e7d05
