#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293210);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);

#define public_629a390 _public_629a390
#define public_629a43a _public_629a43a
#define public_629a43e _public_629a43e
#define public_629a453 _public_629a453
#define public_629a45e _public_629a45e
#define public_629a478 _public_629a478

PROC_DECLARE(0x629a320, internal_629a320, public_629a320);
extern "C" NAKED register_t __cdecl internal_629a320()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629a45e
        mov ecx, dword ptr ss : [esp+0x30]
        test dword ptr ds : [public_639e538], ecx
        jne public_629a45e
        mov edx, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [edx+0xA0]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_629a45e
        mov ecx, dword ptr ds : [ebx+4]
        push 0x80000
        add ecx, 0xE4
        call public_629b720
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+0x824]
        add ebp, 0x24
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        jle public_629a45e
        lea esp, ss:[esp]
        public_629a390 : nop
        mov eax, dword ptr ss : [ebp+edi*8]
        test eax, eax
        je public_629a43e
        lea esi, ds:[eax-8]
        test esi, esi
        je public_629a43e
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        cmp dword ptr ss : [esp+0x18], 0x1000000
        jne public_629a43e
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_629a43e
        mov edi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        add edi, 0xB0
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi]
        jne public_629a43a
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x70]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0xC]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [eax+0xA0]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_629a453
        public_629a43a : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_629a43e : nop
        mov eax, dword ptr ss : [ebp+0x800]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jl public_629a390
        jmp public_629a45e
        public_629a453 : nop
        push 0
        push 0x19
        mov ecx, ebx
        call public_629b010
        public_629a45e : nop
        fld dword ptr ds : [ebx+0x50]
        fcomp dword ptr ds : [public_639d2ac]
        fnstsw ax
        test ah, 5
        jp public_629a478
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [ebx+0x50]
        fstp dword ptr ds : [ebx+0x50]
        public_629a478 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        mov ecx, ebx
        call public_6293210
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x629a320)
    }
}

#undef public_629a390
#undef public_629a43a
#undef public_629a43e
#undef public_629a453
#undef public_629a45e
#undef public_629a478
