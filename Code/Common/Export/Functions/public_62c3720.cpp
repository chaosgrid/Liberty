#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3d10);
CLANG_FORWARD_PROC_SYMBOL(public_62c50e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_6303a60);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c3757 _public_62c3757
#define public_62c3766 _public_62c3766
#define public_62c37cb _public_62c37cb
#define public_62c37cd _public_62c37cd
#define public_62c3829 _public_62c3829
#define public_62c383b _public_62c383b
#define public_62c384c _public_62c384c
#define public_62c386a _public_62c386a
#define public_62c386c _public_62c386c
#define public_62c38c0 _public_62c38c0
#define public_62c38c2 _public_62c38c2

PROC_DECLARE(0x62c3720, internal_62c3720, public_62c3720);
extern "C" NAKED register_t __cdecl internal_62c3720()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        push ebp
        mov ebp, ecx
        mov byte ptr ss : [ebp+0x399], bl
        mov byte ptr ss : [ebp+0x39A], bl
        mov byte ptr ss : [ebp+0x39B], bl
        mov dword ptr ss : [ebp+0x2F0], ebx
        call public_62d20d0
        mov eax, dword ptr ss : [ebp+0x324]
        cmp eax, ebx
        je public_62c3757
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        jne public_62c3766
        public_62c3757 : nop
        push 0xD
        mov ecx, ebp
        call public_62c3d10
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_62c3766 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        push 1
        push 0x3F800000
        push eax
        mov dword ptr ss : [ebp+0x43C], 0xFFFFFFFF
        mov byte ptr ss : [ebp+0x344], bl
        call public_62e5af0
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [ebp+0x14]
        add esp, 8
        push ecx
        call public_62e5ab0
        fmul dword ptr ds : [public_639f510]
        add esp, 8
        push 3
        push 1
        fstp dword ptr ss : [ebp+0x33C]
        mov ecx, ebp
        call public_62d21d0
        mov eax, dword ptr ss : [ebp+0x32C]
        test al, al
        jns public_62c383b
        mov eax, dword ptr ss : [ebp+0x324]
        cmp eax, ebx
        je public_62c37cb
        add eax, 0xFFFFFFF8
        jmp public_62c37cd
        public_62c37cb : nop
        xor eax, eax
        public_62c37cd : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[ebp+0x38C]
        push esi
        lea edi, ss:[ebp+0x3CC]
        push edi
        lea edi, ss:[ebp+0x388]
        push edi
        push eax
        call dword ptr ds : [edx+0x138]
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        call public_6303a60
        mov esi, eax
        lea edi, ss:[ebp+0x3D8]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ss : [ebp+0x324]
        add esp, 8
        cmp eax, ebx
        je public_62c3829
        mov edx, dword ptr ds : [eax-8]
        lea ecx, ds:[eax-8]
        call dword ptr ds : [edx+0x20]
        push eax
        lea ecx, ss:[ebp+0x30]
        call public_62d4e50
        jmp public_62c384c
        public_62c3829 : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea ecx, ss:[ebp+0x30]
        call public_62d4e50
        jmp public_62c384c
        public_62c383b : nop
        test al, 0x40
        je public_62c384c
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x43C], ebx
        call public_62c50e0
        public_62c384c : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62c38c0
        mov eax, dword ptr ss : [ebp+0x324]
        cmp eax, ebx
        je public_62c386a
        lea edi, ds:[eax-8]
        jmp public_62c386c
        public_62c386a : nop
        xor edi, edi
        public_62c386c : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fcomp dword ptr ds : [public_63fc518]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_62c38c0
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push ebx
        push ebx
        call dword ptr ds : [edx+0x6C]
        push 0xD
        jmp public_62c38c2
        public_62c38c0 : nop
        push 1
        public_62c38c2 : nop
        mov ecx, ebp
        call public_62c3d10
        lea eax, ss:[esp+0x10]
        lea esi, ss:[ebp+0x30]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_62d5a80
        push 0x40490FDB
        mov ecx, esi
        call public_63275f0
        mov ecx, dword ptr ds : [public_639f47c]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x46C], ecx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62c3720)
    }
}

#undef public_62c3757
#undef public_62c3766
#undef public_62c37cb
#undef public_62c37cd
#undef public_62c3829
#undef public_62c383b
#undef public_62c384c
#undef public_62c386a
#undef public_62c386c
#undef public_62c38c0
#undef public_62c38c2
