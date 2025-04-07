#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b7a0);
CLANG_FORWARD_PROC_SYMBOL(public_630e660);
CLANG_FORWARD_PROC_SYMBOL(public_6345e60);

#define public_628c0c0 _public_628c0c0
#define public_628c0c2 _public_628c0c2
#define public_628c0ef _public_628c0ef
#define public_628c1bf _public_628c1bf
#define public_628c1da _public_628c1da

PROC_DECLARE(0x628c080, internal_628c080, public_628c080);
extern "C" NAKED register_t __cdecl internal_628c080()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        test esi, esi
        je public_628c1da
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx+4], 3
        jne public_628c1da
        push ebx
        push ebp
        push edi
        lea eax, ss:[esp+0x30]
        push eax
        call public_6345e60
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov edi, dword ptr ds : [ebx+0x14]
        add ebx, 0x10
        mov dword ptr ss : [esp+0x10], 0x7F7FFFFF
        jmp public_628c0c2
        public_628c0c0 : nop
        fstp st(0)
        public_628c0c2 : nop
        test edi, edi
        jl public_628c1bf
        mov edx, dword ptr ds : [ebx+0xC]
        lea eax, ds:[edi*8]
        mov eax, dword ptr ds : [edx+eax+4]
        dec edi
        test eax, eax
        je public_628c0c2
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax+0x28]
        cmp ecx, dword ptr ds : [edx+4]
        lea ebp, ds:[eax+0x34]
        je public_628c0ef
        lea ebp, ds:[eax+0x18]
        public_628c0ef : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_628c0c2
        mov eax, dword ptr ds : [eax+0xA4]
        push eax
        call public_630e660
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_628c0c2
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_628c0c2
        mov ecx, dword ptr ss : [esp+0x48]
        test dword ptr ds : [esi+0xE0], ecx
        je public_628c0c2
        mov edx, dword ptr ss : [esp+0x4C]
        cmp dword ptr ds : [esi+0xB0], edx
        je public_628c0c2
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x34]
        push ebp
        push ecx
        call public_628b7a0
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_628c0c0
        mov edx, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [ecx], esi
        jmp public_628c0c2
        public_628c1bf : nop
        fld dword ptr ss : [esp+0x10]
        pop edi
        fcomp dword ptr ds : [public_639c39c]
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 5
        jp public_628c1da
        mov al, 1
        pop esi
        add esp, 0x30
        ret 
        public_628c1da : nop
        xor al, al
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x628c080)
    }
}

#undef public_628c0c0
#undef public_628c0c2
#undef public_628c0ef
#undef public_628c1bf
#undef public_628c1da
