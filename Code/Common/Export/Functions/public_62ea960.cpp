#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62b1480);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62ea960);
CLANG_FORWARD_PROC_SYMBOL(public_6303450);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc8);

#define public_62ea9b2 _public_62ea9b2
#define public_62ea9b4 _public_62ea9b4
#define public_62ea9cb _public_62ea9cb
#define public_62ea9d4 _public_62ea9d4
#define public_62ea9d6 _public_62ea9d6
#define public_62eaa03 _public_62eaa03
#define public_62eaa1d _public_62eaa1d
#define public_62eaa47 _public_62eaa47
#define public_62eaafd _public_62eaafd
#define public_62eab0f _public_62eab0f
#define public_62eab1f _public_62eab1f
#define public_62eac4c _public_62eac4c

PROC_DECLARE(0x62ea960, internal_62ea960, public_62ea960);
extern "C" NAKED register_t __cdecl internal_62ea960()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x80]
        test al, al
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        je public_62eaa1d
        mov eax, dword ptr ss : [ebp+4]
        mov cx, word ptr ds : [public_63a4aa4]
        add eax, 8
        cmp cx, word ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [eax]
        je public_62ea9cb
        test eax, eax
        je public_62ea9b2
        lea ecx, ds:[eax-8]
        jmp public_62ea9b4
        public_62ea9b2 : nop
        xor ecx, ecx
        public_62ea9b4 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x64]
        push eax
        lea eax, ss:[esp+0x8C]
        push eax
        call dword ptr ds : [edx+0x108]
        jmp public_62eaa1d
        public_62ea9cb : nop
        test eax, eax
        je public_62ea9d4
        lea ecx, ds:[eax-8]
        jmp public_62ea9d6
        public_62ea9d4 : nop
        xor ecx, ecx
        public_62ea9d6 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62eaa03
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62eaa03
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, eax
        call public_62b1480
        test al, al
        jne public_62eaa1d
        public_62eaa03 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x68], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x6C], eax
        public_62eaa1d : nop
        mov esi, dword ptr ss : [ebp+4]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62eaa47
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62eaa47 : nop
        fld dword ptr ss : [esp+0x6C]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        call dword ptr ds : [public_6399308]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x80], eax
        fild dword ptr ss : [esp+0x80]
        mov ecx, ebx
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+0x80]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62eab0f
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639e884]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_62eaafd
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0x60
        ret 0x18
        public_62eaafd : nop
        mov edx, dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x80]
        fld dword ptr ds : [edx+0x171C]
        jmp public_62eab1f
        public_62eab0f : nop
        mov eax, dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x80]
        fld dword ptr ds : [eax+0x1720]
        public_62eab1f : nop
        call public_6391fc8
        fmul dword ptr ss : [esp+0x84]
        lea ecx, ss:[esp+0x28]
        push 0x3F800000
        push ecx
        fstp dword ptr ss : [esp+0x88]
        call public_6303450
        fld dword ptr ss : [esp+0x88]
        fcomp dword ptr ds : [public_639e6b8]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62eac4c
        fld dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        push edx
        fld dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x38]
        fmul dword ptr ss : [esp+0x24]
        push eax
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        call public_62e1680
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], ecx
        fmul dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        faddp 
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x24]
        add esp, 8
        mov ecx, eax
        pop edi
        faddp 
        pop esi
        pop ebp
        pop ebx
        fsqrt 
        fld dword ptr ss : [esp+0x70]
        fptan 
        fstp st(0)
        fmulp 
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fld dword ptr ss : [esp+4]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov dword ptr ds : [ecx], edx
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x60
        ret 0x18
        public_62eac4c : nop
        mov eax, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x64]
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x60
        ret 0x18
        UNREACHABLE_TRAP(0x62ea960)
    }
}

#undef public_62ea9b2
#undef public_62ea9b4
#undef public_62ea9cb
#undef public_62ea9d4
#undef public_62ea9d6
#undef public_62eaa03
#undef public_62eaa1d
#undef public_62eaa47
#undef public_62eaafd
#undef public_62eab0f
#undef public_62eab1f
#undef public_62eac4c
