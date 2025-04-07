#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_580290);
CLANG_FORWARD_PROC_SYMBOL(public_5803d0);

#define public_58068f _public_58068f
#define public_5806cb _public_5806cb
#define public_580706 _public_580706
#define public_580741 _public_580741

PROC_DECLARE(0x5803d0, internal_5803d0, public_5803d0);
extern "C" NAKED register_t __cdecl internal_5803d0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        push esi
        je public_58068f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_58068f
        push ebp
        push edi
        lea esi, ds:[ebx+0x3A0]
        lea edi, ds:[ebx+0x360]
        mov ecx, 0xC
        lea eax, ds:[ebx+0x60]
        rep movsd
        push eax
        lea ecx, ds:[ebx+0x354]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_423b30
        lea ebp, ds:[ebx+0xA8]
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_423b30
        fld dword ptr ss : [esp+0x28]
        lea eax, ds:[ebx+0x60]
        fadd dword ptr ds : [ebx+0x384]
        push eax
        lea edx, ds:[ebx+0x3F8]
        push edx
        fstp dword ptr ds : [ebx+0x384]
        lea eax, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        lea esi, ds:[ebx+0x444]
        fadd dword ptr ds : [ebx+0x388]
        lea edi, ds:[ebx+0x404]
        mov ecx, 0xC
        push eax
        fstp dword ptr ds : [ebx+0x388]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [ebx+0x38C]
        fstp dword ptr ds : [ebx+0x38C]
        rep movsd
        call public_423b30
        push ebp
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_423b30
        fld dword ptr ss : [esp+0x40]
        lea eax, ds:[ebx+0x60]
        fadd dword ptr ds : [ebx+0x428]
        push eax
        lea esi, ds:[ebx+0x4E8]
        lea edi, ds:[ebx+0x4A8]
        fstp dword ptr ds : [ebx+0x428]
        mov ecx, 0xC
        fld dword ptr ss : [esp+0x48]
        lea eax, ds:[ebx+0x49C]
        fadd dword ptr ds : [ebx+0x42C]
        push eax
        fstp dword ptr ds : [ebx+0x42C]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [ebx+0x430]
        fstp dword ptr ds : [ebx+0x430]
        rep movsd
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_423b30
        add esp, 0x30
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx+0x4CC]
        fstp dword ptr ds : [ebx+0x4CC]
        fld dword ptr ss : [esp+0x20]
        lea esi, ds:[ebx+0x5F8]
        fadd dword ptr ds : [ebx+0x4D0]
        lea edi, ds:[ebx+0x540]
        mov ecx, 0xC
        sub esp, 0xC
        fstp dword ptr ds : [ebx+0x4D0]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [ebx+0x4D4]
        fstp dword ptr ds : [ebx+0x4D4]
        rep movsd
        fld dword ptr ds : [ebx+0x5A8]
        fadd dword ptr ds : [ebx+0x68]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x5A4]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x60]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [ebx+0x5A0]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x10]
        lea esi, ds:[ebx+0x628]
        fadd dword ptr ds : [ebx+0x564]
        lea edi, ds:[ebx+0x570]
        mov ecx, 0xC
        sub esp, 0xC
        fstp dword ptr ds : [ebx+0x564]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+0x568]
        fstp dword ptr ds : [ebx+0x568]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+0x56C]
        fstp dword ptr ds : [ebx+0x56C]
        rep movsd
        fld dword ptr ds : [ebx+0x5B4]
        fadd dword ptr ds : [ebx+0x68]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x5B0]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x5AC]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [ebx+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x10]
        pop edi
        fadd dword ptr ds : [ebx+0x594]
        fstp dword ptr ds : [ebx+0x594]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0x598]
        fstp dword ptr ds : [ebx+0x598]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ebx+0x59C]
        fstp dword ptr ds : [ebx+0x59C]
        pop ebp
        public_58068f : nop
        mov ecx, dword ptr ds : [ebx+0x330]
        cmp ecx, 0xFFFFFFFF
        je public_5806cb
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x360]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x330]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5806cb : nop
        mov ecx, dword ptr ds : [ebx+0x3D4]
        cmp ecx, 0xFFFFFFFF
        je public_580706
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x404]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x3D4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_580706 : nop
        mov ecx, dword ptr ds : [ebx+0x478]
        cmp ecx, 0xFFFFFFFF
        je public_580741
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x4A8]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x478]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_580741 : nop
        mov ecx, ebx
        call public_580290
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5803d0)
    }
}

#undef public_58068f
#undef public_5806cb
#undef public_580706
#undef public_580741
