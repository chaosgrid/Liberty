#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4310);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62d5760);
CLANG_FORWARD_PROC_SYMBOL(public_62d58f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d65f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7640);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5190);
CLANG_FORWARD_PROC_SYMBOL(public_62e6010);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8810);
CLANG_FORWARD_PROC_SYMBOL(public_62e8840);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62caa80 _public_62caa80
#define public_62caa9f _public_62caa9f
#define public_62caad2 _public_62caad2
#define public_62cab48 _public_62cab48
#define public_62cab4d _public_62cab4d
#define public_62cab51 _public_62cab51
#define public_62cab61 _public_62cab61
#define public_62cabb4 _public_62cabb4
#define public_62cac17 _public_62cac17
#define public_62cad4a _public_62cad4a
#define public_62cad5d _public_62cad5d
#define public_62cad65 _public_62cad65
#define public_62cadf7 _public_62cadf7
#define public_62cae57 _public_62cae57
#define public_62cae8d _public_62cae8d
#define public_62cae94 _public_62cae94
#define public_62caeb5 _public_62caeb5
#define public_62caef6 _public_62caef6
#define public_62caefc _public_62caefc
#define public_62caf27 _public_62caf27
#define public_62cafae _public_62cafae
#define public_62cb030 _public_62cb030
#define public_62cb06d _public_62cb06d
#define public_62cb0a0 _public_62cb0a0
#define public_62cb0b4 _public_62cb0b4
#define public_62cb0f5 _public_62cb0f5

PROC_DECLARE(0x62caa60, internal_62caa60, public_62caa60);
extern "C" NAKED register_t __cdecl internal_62caa60()
{
    __asm
    {
        sub esp, 0x68
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        push esi
        push edi
        jne public_62caa80
        pop edi
        mov eax, 3
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        public_62caa80 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x34
        call public_62e8810
        test al, al
        je public_62caa9f
        pop edi
        mov eax, 2
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        public_62caa9f : nop
        mov al, byte ptr ss : [ebp+0x1E0]
        test al, al
        mov byte ptr ss : [esp+0x12], 0
        je public_62caad2
        mov eax, dword ptr ss : [ebp+0x1D4]
        test eax, eax
        je public_62caad2
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62caad2
        mov ebx, dword ptr ss : [ebp+0x1D4]
        test ebx, ebx
        je public_62cab51
        add ebx, 0xFFFFFFF8
        jmp public_62cab4d
        public_62caad2 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        test eax, eax
        je public_62cab51
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62cab48
        test ebx, ebx
        je public_62cab48
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        push eax
        call public_62e61a0
        fcomp dword ptr ds : [public_639b21c]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_62cab48
        pop edi
        mov eax, 3
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        public_62cab48 : nop
        mov byte ptr ss : [esp+0x12], 1
        public_62cab4d : nop
        test ebx, ebx
        jne public_62cab61
        public_62cab51 : nop
        pop edi
        mov eax, 2
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        public_62cab61 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        lea esi, ss:[ebp+0x2C]
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, esi
        call public_62d4e50
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        lea esi, ss:[ebp+0x88]
        call dword ptr ds : [edx+0x20]
        push eax
        mov ecx, esi
        call public_62d4e50
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        lea edi, ss:[ebp+0x148]
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, edi
        call public_62d4e50
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [ebp+0x1DC]
        je public_62cabb4
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        public_62cabb4 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp+0x1DC], eax
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_62caefc
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62caefc
        mov esi, dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62cac17
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62cac17 : nop
        lea eax, ss:[esp+0x30]
        push ebx
        push eax
        call public_62e60e0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ds : [eax+4]
        push ecx
        fsub dword ptr ds : [esi+0x10]
        lea edx, ss:[esp+0x54]
        fld dword ptr ds : [eax]
        push edx
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        call public_62e1680
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 0x10
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x48]
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x38]
        fxch 
        push eax
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        fchs 
        fstp dword ptr ss : [esp+0x34]
        call public_62e1630
        fstp dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [ebp+0x214]
        add esp, 8
        test al, al
        je public_62cad5d
        mov al, byte ptr ss : [ebp+0x1EC]
        test al, al
        jne public_62cad5d
        fld dword ptr ss : [ebp+0x200]
        fadd dword ptr ss : [ebp+0x204]
        fcomp dword ptr ss : [ebp+0x1F8]
        fnstsw ax
        test ah, 0x41
        jne public_62cad5d
        fld dword ptr ss : [ebp+0x1F8]
        fcomp dword ptr ss : [ebp+0x204]
        fnstsw ax
        test ah, 0x41
        jne public_62cad4a
        fld dword ptr ss : [ebp+0x1F8]
        lea edx, ss:[esp+0x24]
        fadd dword ptr ss : [ebp+0x1C]
        lea esi, ss:[ebp+0x88]
        push edx
        mov ecx, esi
        fstp dword ptr ss : [ebp+0x1F8]
        mov byte ptr ss : [ebp+0x214], 0
        fld dword ptr ss : [ebp+0x208]
        mov dword ptr ss : [esp+0x28], 0
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], 0
        call public_62d75e0
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        pop edi
        mov eax, 1
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        public_62cad4a : nop
        fld dword ptr ss : [ebp+0x1C]
        xor esi, esi
        fadd dword ptr ss : [ebp+0x1F8]
        fstp dword ptr ss : [ebp+0x1F8]
        jmp public_62cad65
        public_62cad5d : nop
        xor esi, esi
        mov dword ptr ss : [ebp+0x1F8], esi
        public_62cad65 : nop
        mov al, byte ptr ss : [ebp+0x1EC]
        test al, al
        je public_62cae57
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [ebp+0x1F0]
        fnstsw ax
        test ah, 5
        jp public_62cae57
        fld dword ptr ss : [ebp+0x1F4]
        fcomp dword ptr ss : [ebp+0x1FC]
        fnstsw ax
        test ah, 5
        jp public_62cae57
        fld dword ptr ss : [ebp+0x1C]
        lea edx, ss:[esp+0x24]
        fadd dword ptr ss : [ebp+0x1F4]
        lea ebx, ss:[ebp+0x88]
        push edx
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x1F4]
        mov dword ptr ss : [esp+0x28], 0
        fld dword ptr ss : [ebp+0x208]
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp+0x30]
        call public_62d75e0
        mov al, byte ptr ss : [ebp+0x20C]
        test al, al
        je public_62cadf7
        mov edx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [ebp+0x1C0]
        lea ecx, ss:[ebp+0x1C0]
        push edx
        call dword ptr ds : [eax+4]
        public_62cadf7 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        push esi
        mov ecx, edi
        call public_62d5980
        push 0x3F800000
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        mov ecx, edi
        call public_62d58f0
        push 0x40490FDB
        mov ecx, edi
        call public_63275f0
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ss : [ebp+0x10], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x68
        ret 
        public_62cae57 : nop
        mov edx, dword ptr ss : [ebp+0x1C0]
        lea ecx, ss:[ebp+0x1C0]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [ebp+0x1F0]
        mov dword ptr ss : [ebp+0x1F4], esi
        fnstsw ax
        test ah, 0x41
        jne public_62cae8d
        mov byte ptr ss : [ebp+0x1EC], 1
        mov byte ptr ss : [ebp+0x214], 1
        jmp public_62cae94
        public_62cae8d : nop
        mov byte ptr ss : [ebp+0x1EC], 0
        public_62cae94 : nop
        mov al, byte ptr ss : [ebp+0x1EC]
        test al, al
        je public_62caef6
        fld dword ptr ss : [ebp+0x218]
        xor cl, cl
        fcomp dword ptr ss : [ebp+0x21C]
        fnstsw ax
        test ah, 5
        jp public_62caeb5
        mov cl, 1
        public_62caeb5 : nop
        fld dword ptr ss : [ebp+0x1C]
        fadd dword ptr ss : [ebp+0x218]
        fst dword ptr ss : [ebp+0x218]
        fcomp dword ptr ss : [ebp+0x21C]
        fnstsw ax
        test ah, 0x41
        jne public_62caefc
        test cl, cl
        je public_62caefc
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+0x110]
        cmp edi, esi
        je public_62caefc
        mov edx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [edi]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [esi+0xC]
        jmp public_62caefc
        public_62caef6 : nop
        mov dword ptr ss : [ebp+0x218], esi
        public_62caefc : nop
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62caf27
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax+0x16C4]
        mov dword ptr ss : [ebp+0x1E8], ecx
        public_62caf27 : nop
        push ebx
        call public_62e6010
        fadd dword ptr ss : [ebp+0x1E8]
        push ebx
        fstp dword ptr ss : [ebp+0x1E4]
        call public_62e6010
        fadd dword ptr ss : [ebp+0x1E4]
        mov ecx, dword ptr ss : [ebp+0x14]
        add esp, 8
        lea eax, ss:[esp+0x13]
        fstp dword ptr ss : [ebp+0x220]
        mov byte ptr ss : [esp+0x13], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x60]
        push ebx
        call public_62e61f0
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x58]
        rep movsd
        lea ecx, ss:[esp+0x40]
        push ebx
        push ecx
        call public_62e60e0
        mov eax, dword ptr ds : [public_63fc538]
        fld dword ptr ss : [ebp+0x1E4]
        add esp, 0xC
        test eax, eax
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        jne public_62cafae
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cafae : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x3C]
        push 0
        push ebx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [ebp+0x24]
        add edx, 0x14FC
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x4C]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x2C], ecx
        call public_62e5190
        add esp, 0xC
        test al, al
        mov byte ptr ss : [ebp+0x23C], al
        je public_62cb030
        lea eax, ss:[esp+0x18]
        push eax
        lea esi, ss:[ebp+0x2C]
        push ebx
        mov ecx, esi
        call public_62d65f0
        jmp public_62cb06d
        public_62cb030 : nop
        lea esi, ss:[ebp+0x148]
        push 0
        mov ecx, esi
        call public_62d5980
        push 0x3F800000
        mov ecx, esi
        call public_62a33e0
        push ebx
        mov ecx, esi
        call public_62d5760
        push 0x40490FDB
        mov ecx, esi
        call public_63275f0
        mov ecx, dword ptr ss : [ebp+0x1E8]
        push ecx
        mov ecx, esi
        call public_62a66b0
        public_62cb06d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62cb0a0
        mov ecx, dword ptr ss : [ebp+0x20]
        call public_62d4310
        test al, al
        je public_62cb0b4
        public_62cb0a0 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        push ebx
        push eax
        call public_62e4bb0
        fstp st(0)
        add esp, 8
        public_62cb0b4 : nop
        lea esi, ss:[ebp+0x88]
        push ebx
        mov ecx, esi
        call public_62d7510
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x34
        call public_62e8840
        test al, al
        je public_62cb0f5
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call public_62d7640
        public_62cb0f5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, 1
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x62caa60)
    }
}

#undef public_62caa80
#undef public_62caa9f
#undef public_62caad2
#undef public_62cab48
#undef public_62cab4d
#undef public_62cab51
#undef public_62cab61
#undef public_62cabb4
#undef public_62cac17
#undef public_62cad4a
#undef public_62cad5d
#undef public_62cad65
#undef public_62cadf7
#undef public_62cae57
#undef public_62cae8d
#undef public_62cae94
#undef public_62caeb5
#undef public_62caef6
#undef public_62caefc
#undef public_62caf27
#undef public_62cafae
#undef public_62cb030
#undef public_62cb06d
#undef public_62cb0a0
#undef public_62cb0b4
#undef public_62cb0f5
